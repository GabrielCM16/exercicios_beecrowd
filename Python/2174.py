pokemons = []
for i in range(int(input())):
  pokemon = input()

  if pokemon not in pokemons:
    pokemons.append(pokemon)
  else: continue

falta = 151 - len(pokemons)
print(f'Falta(m) {falta} pomekon(s).')
