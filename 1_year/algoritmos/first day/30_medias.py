i = 0

while i < 3:
    nota1 = int(input("Insira a nota 1 "))
    nota2 = int(input("Insira a nota 2 "))

    media = (nota1 + nota2) / 2

    if media >= 7:
        print("Aprovado")
    else:
        print("Reprovado")

    i += 1
