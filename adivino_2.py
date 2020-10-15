import random
def adivino_2():
	maxn=10
	numero=random.randint(1,maxn)
	intento=input("Inténtalo: ")
	while intento!=numero:
		if intento>numero:
			print "Demasiado grande, prueba otra vez"
		if intento<numero:
			print "Demasiado pequeño, prueba otra vez"
		intento=input("Intentalo: ")

	print "¡HAS ACERTADO!"
adivino_2()
