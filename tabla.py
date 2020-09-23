Python 2.7.18 (v2.7.18:8d21aa21f2, Apr 20 2020, 13:25:05) [MSC v.1500 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def tabla():
	n_tabla=input("Dime la tabla que deseas:  ")
	print "TABLA DEL ", n_tabla
	for cont in range(0, 10):
		print n_tabla, " x ",cont , " = ", n_tabla*cont

		
>>> tabla()
