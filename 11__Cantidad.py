def cantidad():
    p=raw_input("Inserte palabra para contar: ")
    n=input("Inserte n�mero de caracteres de la plabara: ")
    l=len(str(p))
    print "Tu palabra tiene", l, "caracteres."
    if l==n:
        print "La palabra tiene el mismo n�mero de caracteres que el n�mero insertado."
    else:
        print "La palbra no tiene el mismo n�mero de caracteres que el n�mero insertado."

    
