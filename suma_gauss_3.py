Python 2.7.18 (v2.7.18:8d21aa21f2, Apr 20 2020, 13:25:05) [MSC v.1500 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def suma_gauss_3():
	n_final=input("Inserte número final: ")
	suma_acumulada=0
	for cont in range(1,n_final+1):
		if(cont%2==0):
			suma_acumulada=suma_acumulada+cont
	print "Suma de los números pares hasta ", n_final, " = ", suma_acumulada

	
>>> suma_gauss_3()
