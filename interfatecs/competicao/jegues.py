def menor(lista):
    menor = lista[0]
    pos = 0
    for i in range(1, len(lista)):
        if lista[i][1] < menor[1]:
            menor = lista[i]
            pos = i
    lista.pop(pos)
    return menor


def printTres(lista):
    for i in range(0, 2):
        print("{}".format(lista[i][0]), end=' ')
    print("{}".format(lista[i + 1][0]))

#entrada
chegada = []
t1 = []
t2 = []

while True:
    entrada = str(input()).split()

    if len(entrada) < 3:
        break

    t1.append([entrada[0], int(entrada[1])])
    t2.append([entrada[0], int(entrada[2])])
    chegada.append([entrada[0], entrada[3]])

#processamento

#ordenacao
sort_t1 = []
while len(t1) > 0:
    sort_t1.append(menor(t1))

sort_t2 = []
while len(t2) > 0:
    sort_t2.append(menor(t2))

sort_chegada = []
while len(chegada) > 0:
    sort_chegada.append(menor(chegada))


#sort_t1 = sorted(t1, key = lambda x: x[1])
#sort_t2 = sorted(t2, key = lambda x: x[1])
#sort_chegada = sorted(chegada, key = lambda x: x[1])

#saida
print("T1", end=' ')
printTres(sort_t1)
print("T2", end=' ')
printTres(sort_t2)
print("CHEGADA", end=' ')
printTres(sort_chegada)
