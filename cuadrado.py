Python 2.7.18 (v2.7.18:8d21aa21f2, Apr 20 2020, 13:25:05) [MSC v.1500 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def cuadrado():
	lado=input("Inserte lado cuadrado:  ")
	print "Cuadrado de ", lado, " asteriscos por lado"
	for cont in range(0, lado):
		print " * "*lado

>>> cuadrado()
Inserte lado cuadrado:  8
Cuadrado de  8  asteriscos por lado
 *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  * 
>>> cuadrado()
