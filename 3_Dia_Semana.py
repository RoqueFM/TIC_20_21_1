Python 2.7.18 (v2.7.18:8d21aa21f2, Apr 20 2020, 13:25:05) [MSC v.1500 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def dia_semana():
	numerodia=input("Inserte numero dia semana: ")
	if (numerodia==1):
		print "lunes"
	else:
		if (numerodia==2):
			print "martes"
		else:
			if(numerodia==3):
				print "miércoles"
			else:
				if(numerodia==4):
					print"jueves"
				else:
					if(numerodia==5):
						print "viernes"
					else:
						if(numerodia==6):
							print "sábado"
						else:
							if(numerodia==7):
								print "domingo"
							else:
								print "Inserte número válido."

								
>>> dia_semana()
