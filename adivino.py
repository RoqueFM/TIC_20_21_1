# -*- coding: cp1252 -*-
def adivino():
	numero=input("Dime un número del 1 al 10: ")
	intento=input("Inténtalo: ")
	while intento!=numero:
		if intento>numero:
			print "Demasiado grande, prueba otra vez"
		if intento<numero:
			print "Demasiado pequeño, prueba otra vez"
		intento=input("Intentalo: ")

	print "¡HAS ACERTADO!"
adivino()
