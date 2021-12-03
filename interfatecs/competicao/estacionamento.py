def menor(lista):
    menor = lista[0]
    pos = 0
    for i in range(1, len(lista)):
        if lista[i][1] < menor[1]:
            menor = lista[i]
            pos = i
    lista.pop(pos)
    return menor


def naoEstaEm(lista, valor):
    for i in range(0, len(lista)):
        if valor == lista[i][1]:
            return False
    return True

#entrada
estacionamento = []
T = 15
while True:
    placa = str(input())

    if len(placa) < 7:
        break

    posEstacionamento = 0
    for car in placa:
        posEstacionamento += ord(car)
    posEstacionamento = (posEstacionamento % T) + 1
    if posEstacionamento <= 15 and naoEstaEm(estacionamento, posEstacionamento):
        estacionamento.append([placa, posEstacionamento])

#ordenacao
sort_Estac = []
while len(estacionamento) > 0:
    sort_Estac.append(menor(estacionamento))

#saida
p = 0
while True:
    if p > len(sort_Estac) - 1:
        break
    print('{} {}'.format(sort_Estac[p][1], sort_Estac[p][0]))
    p += 1
