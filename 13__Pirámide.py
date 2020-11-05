def piramide():
    p=int(input("Inserte altura de la pirámide: "))
    for cont in range(0,p):
        print ((p-cont)/2)*("  "), cont*(" *"), ((p-cont)/2)*(" ")

piramide()
