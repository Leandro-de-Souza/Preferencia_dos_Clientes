
soma1 = 0
soma2 = 0
soma3 = 0

codigo = int(input("Informe um codigo (1, 2, 3) ou 4 para parar: "))

while codigo != 4:
    if codigo == 1:
        soma1 = soma1 + 1
    elif codigo == 2:
        soma2 = soma2 + 1
    elif codigo == 3:
        soma3 = soma3 + 1

    codigo = int(input("Informe um codigo (1, 2, 3) ou 4 para parar: "))

print("MUITO OBRIGADO")
print(f"Alcool: {soma1}")
print(f"Gasolina: {soma2}")
print(f"Diesel: {soma3}")

