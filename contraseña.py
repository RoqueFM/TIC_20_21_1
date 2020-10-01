Python 2.7.18 (v2.7.18:8d21aa21f2, Apr 20 2020, 13:25:05) [MSC v.1500 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> >>> def contrasena():
	nombre=raw_input("Inserte nombre: ")
	apellido=raw_input("Inserte apellido: ")
	print "Eres el impostor,", nombre, apellido, "??"
	print "Tu nombre empieza por: ", nombre[0:3]
	print "Tu apellido empieza por: ", apellido[0:3]
	print " "
	print "Tu nueva contraseña es: ",nombre[0:3]+apellido[0:3]

	
>>> contrasena()
