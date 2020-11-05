# -*- coding: cp1252 -*-
def suma_digitos():
    s=0
    n=str(input("Inserte número para sumar sus cifras: "))
    f=len(n)
    for cont in range(0,f):
        s=s+int(n[cont])
    print "La suma de los dígitos es:", s

suma_digitos()
    
