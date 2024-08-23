import heapq

def heuristic(a, b):
    # Heurística trivial que sempre retorna 1
    # Pode ser ajustada de acordo com o contexto específico do problema
    return 1

def a_star(graph, start, goal):
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
            tentative_g_score = g_score[current] + weight
            
            if tentative_g_score < g_score[neighbor]:
                came_from[neighbor] = current
                g_score[neighbor] = tentative_g_score
                f_score[neighbor] = g_score[neighbor] + heuristic(neighbor, goal)
                heapq.heappush(open_set, (f_score[neighbor], neighbor))
    
    return None, float('inf')

graph = {
    'A': {'B': 15, 'D': 8, 'C': 7},
    'B': {'A': 15, 'C': 16, 'D': 9},
    'C': {'A': 7, 'B': 16, 'D': 12},
    'D': {'A': 8, 'C': 12, 'B': 9}
}

start = 'A'
goal = 'D'
path, cost = a_star(graph, start, goal)
print("Caminho mais curto:", path)
print("Tamanho do caminho:", cost)
