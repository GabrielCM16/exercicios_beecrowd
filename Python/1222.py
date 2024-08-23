while True:
    try:
        numPalavras, maxLinhas, maxCarac = map(int, input().split())
        palavras = input().split()

        linhas = paginas = caracs = 0

        for i in range(numPalavras):
            palavra = palavras[i]
            palavra_len = len(palavra)

            if caracs == 0:
                caracs = palavra_len
            elif caracs + 1 + palavra_len <= maxCarac:
                caracs += 1 + palavra_len
            else:
                linhas += 1
                if linhas == maxLinhas:
                    paginas += 1
                    linhas = 0
                caracs = palavra_len

        if caracs > 0:
            linhas += 1
            if linhas > maxLinhas:
                paginas += 1
                linhas = 1
            else:
                paginas += 1

        print(paginas)

    except EOFError:
        break
