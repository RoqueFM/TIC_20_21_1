Python 2.7.18 (v2.7.18:8d21aa21f2, Apr 20 2020, 13:25:05) [MSC v.1500 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def palabra():
	abc="abcdefghijklmnopqrstuvwxyz"
	p=raw_input("Inserte palabra a clasificar en letras minúsculas: ")
	pa=p[0:1]
	print pa
	for cont in range(0,25):
		if pa==abc[cont:(cont+1)]:
			print cont

			
>>> palabra()
