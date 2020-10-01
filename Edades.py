Python 2.7.18 (v2.7.18:8d21aa21f2, Apr 20 2020, 13:25:05) [MSC v.1500 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def edades():
	sumatotal=0
	media=0
	print "INTRODUCE NÚMERO: "
	print "Edad 1: "
	edad_1=input()
	menor=edad_1
	mayor=edad_1
	for cont in range(1,10):
		print "Edad", cont+1, ": "
		n_numero=input()
	if(n_numero>mayor):
		mayor=n_numero
	if(n_numero<menor):
		menor=n_numero
	edad_1=edad_1+n_numero
	media=(edad_1/10.00000)
	print "La edad del mayor es: ", mayor
	print "La edad del menor es: ", menor
	print "La suma de las edades es: ", edad_1
	print "La media de edad es: ", media

	
>>> edades()
