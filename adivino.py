# -*- coding: cp1252 -*-
def adivino():
	numero=input("Dime un n�mero del 1 al 10: ")
	intento=input("Int�ntalo: ")
	while intento!=numero:
		if intento>numero:
			print "Demasiado grande, prueba otra vez"
		if intento<numero:
			print "Demasiado peque�o, prueba otra vez"
		intento=input("Intentalo: ")

	print "�HAS ACERTADO!"
adivino()
