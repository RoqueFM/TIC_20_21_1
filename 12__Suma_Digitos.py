# -*- coding: cp1252 -*-
def suma_digitos():
    s=0
    n=str(input("Inserte n�mero para sumar sus cifras: "))
    f=len(n)
    for cont in range(0,f):
        s=s+int(n[cont])
    print "La suma de los d�gitos es:", s

suma_digitos()
    
