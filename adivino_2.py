import random
def adivino_2():
	maxn=10
	numero=random.randint(1,maxn)
	intento=input("Int�ntalo: ")
	while intento!=numero:
		if intento>numero:
			print "Demasiado grande, prueba otra vez"
		if intento<numero:
			print "Demasiado peque�o, prueba otra vez"
		intento=input("Intentalo: ")

	print "�HAS ACERTADO!"
adivino_2()
