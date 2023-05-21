while True:
  try:
    entrada = input()
    n_process = int(input())

    R_seguidos = int()
    n_ciclos = int()

    for b in range(1):

      for i in entrada:
        
        if R_seguidos == n_process:
          n_ciclos += 1
          R_seguidos = 0

        if i == 'R': #se for R conta a sequencia de R
          R_seguidos += 1
        else:
            if R_seguidos > 0:
              n_ciclos += 1
            R_seguidos = 0
            n_ciclos += 1 

      if R_seguidos > 0:
          n_ciclos += 1


    print(n_ciclos)
  except EOFError:
    break
