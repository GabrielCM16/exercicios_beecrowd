lista = {}
for i in range(int(input())):
  entrada = int(input())
  if entrada in lista: lista[entrada] += 1 
  else: lista[entrada] = 1

a = list(lista.keys())
a.sort()

for chave in a:
    print(f"{chave} aparece {lista[chave]} vez(es)")
