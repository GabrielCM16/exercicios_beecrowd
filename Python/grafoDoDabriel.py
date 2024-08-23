import heapq

def heuristic(a, b):
    # Heurística trivial que sempre retorna 1
    return 1

def a_star(graph, start, goal, K):
    if start not in graph or goal not in graph:
        return None, -1

    open_set = []
    heapq.heappush(open_set, (0, start))
    
    came_from = {}
    g_score = {node: float('inf') for node in graph}
    g_score[start] = 0
    f_score = {node: float('inf') for node in graph}
    f_score[start] = heuristic(start, goal)
    
    while open_set:
        current = heapq.heappop(open_set)[1]
                
        if current == goal:
            path = []
            total_cost = g_score[goal]
            while current in came_from:
                path.append(current)
                current = came_from[current]
            path.append(start)
            return path[::-1], total_cost
        
        for neighbor, weight in graph[current].items():
            if neighbor != start and neighbor != goal and neighbor > K:
                continue
            
            tentative_g_score = g_score[current] + weight
            
            if tentative_g_score < g_score[neighbor]:
                came_from[neighbor] = current
                g_score[neighbor] = tentative_g_score
                f_score[neighbor] = g_score[neighbor] + heuristic(neighbor, goal)
                heapq.heappush(open_set, (f_score[neighbor], neighbor))
    
    return None, -1



n, m = map(int, input().split())

graph = {}

for i in range(m):
    u, v, w = map(int, input().split())
    if u not in graph:
        graph[u] = {}
    if v not in graph:
        graph[v] = {}
    graph[u][v] = w
    graph[v][u] = w

print(graph)
for i in range(int(input())):
    start, goal, K = map(int, input().split())
    path, cost = a_star(graph, start, goal, K)
    print(cost)
