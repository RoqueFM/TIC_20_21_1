def fecha():
		dia=input("Insetrte n�mero de d�a: ")
		mes=input("Inserte n�mero de mes: ")
		anno=input("Inserte a�o: ")
		meses=["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Agosto", "Octubre", "Noviembre", "Diciembre"]
		print dia, "de", meses[(mes-1)], "del", anno
