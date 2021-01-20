#include<stdio.h>

int main(){
	int menu(float op);
	int m1[100][100];
	int m2[100][100];
	int m3[100][100];
	int m4[100][100];
	int m5[100][100];
	int nm;
	int f1;
	int f2;
	int f3;
	int f4;
	int f5;
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;
	int ef;
	int ec;
	printf("\nInserte numero de matrices (hasta 5 y dimension hasta 50x50 en la suma y hasta 2 y 20x20 en multiplicacion): ");
	scanf("%d",&nm);
	printf("\nVas a insertar %d matrices.", nm);
	if(nm==1){
		printf("\nNo puedes insertar solo una matriz.");
	}else if(nm==2){
		printf("\nAceptado... %d matrices.", nm);
		printf("\nInserte la matriz 1: ");
		printf("\nInserte filas: ");
		scanf("%d", &f1);
		printf("\nInserte columnas: ");
		scanf("%d", &c1);
		printf("\nDimensiones: %d x %d", f1, c1);
		for(ef=0;ef<f1;ef++){
			for(ec=0;ec<c1;ec++){
			printf("\nElemento %d-%d matriz 1: ", ef+1, ec+1);
			scanf("%d",&m1[ef][ec]);
			}
		}
		printf("\nInserte la matriz 2: ");
		printf("\nInserte filas: ");
		scanf("%d", &f2);
		printf("\nInserte columnas: ");
		scanf("%d", &c2);
		printf("\nDimensiones: %d x %d", f2, c2);
		for(ef=0;ef<f2;ef++){
			for(ec=0;ec<c2;ec++){
			printf("\nElemento %d-%d matriz 2: ", ef+1, ec+1);
			scanf("%d",&m2[ef][ec]);
			}
		}
		printf("\nMatriz 1: ");
		printf("\n");
		for(ef=0;ef<f1;ef++){
		printf("\n|");
			for(ec=0;ec<c1;ec++){
			printf(" %d  ", m1[ef][ec]);
			}
		printf("|");
		}
		printf("\n");
		printf("\nMatriz 2: ");
		printf("\n");
		for(ef=0;ef<f2;ef++){
			printf("\n|");
			for(ec=0;ec<c2;ec++){
			printf(" %d  ", m2[ef][ec]);
			}
			printf("|");
		}	
	}else if(nm==3){
		printf("\nAceptado... %d matrices.", nm);
		printf("\nInserte la matriz 1: ");
		printf("\nInserte filas: ");
		scanf("%d", &f1);
		printf("\nInserte columnas: ");
		scanf("%d", &c1);
		printf("\nDimensiones: %d x %d", f1, c1);
		for(ef=0;ef<f1;ef++){
			for(ec=0;ec<c1;ec++){
			printf("\nElemento %d-%d matriz 1: ", ef+1, ec+1);
			scanf("%d",&m1[ef][ec]);
			}
		}
		printf("\nInserte la matriz 2: ");
		printf("\nInserte filas: ");
		scanf("%d", &f2);
		printf("\nInserte columnas: ");
		scanf("%d", &c2);
		printf("\nDimensiones: %d x %d", f2, c2);
		for(ef=0;ef<f2;ef++){
			for(ec=0;ec<c2;ec++){
			printf("\nElemento %d-%d matriz 2: ", ef+1, ec+1);
			scanf("%d",&m2[ef][ec]);
			}
		}
		printf("\nInserte la matriz 3: ");
		printf("\nInserte filas: ");
		scanf("%d", &f3);
		printf("\nInserte columnas: ");
		scanf("%d", &c3);
		printf("\nDimensiones: %d x %d", f3, c3);
		for(ef=0;ef<f3;ef++){
			for(ec=0;ec<c3;ec++){
			printf("\nElemento %d-%d matriz 3: ", ef+1, ec+1);
			scanf("%d",&m3[ef][ec]);
			}
		}
		printf("\nMatriz 1: ");
		printf("\n");
		for(ef=0;ef<f1;ef++){
		printf("\n|");
			for(ec=0;ec<c1;ec++){
			printf(" %d  ", m1[ef][ec]);
			}
		printf("|");
		}
		printf("\n");
		printf("\nMatriz 2: ");
		printf("\n");
		for(ef=0;ef<f2;ef++){
			printf("\n|");
			for(ec=0;ec<c2;ec++){
			printf(" %d  ", m2[ef][ec]);
			}
			printf("|");
		}
		printf("\nMatriz 3: ");
		printf("\n");
		for(ef=0;ef<f3;ef++){
			printf("\n|");
			for(ec=0;ec<c3;ec++){
			printf(" %d  ", m3[ef][ec]);
			}
			printf("|");
		}	
	}else if(nm==4){
		printf("\nAceptado... %d matrices.", nm);
		printf("\nInserte la matriz 1: ");
		printf("\nInserte filas: ");
		scanf("%d", &f1);
		printf("\nInserte columnas: ");
		scanf("%d", &c1);
		printf("\nDimensiones: %d x %d", f1, c1);
		for(ef=0;ef<f1;ef++){
			for(ec=0;ec<c1;ec++){
			printf("\nElemento %d-%d matriz 1: ", ef+1, ec+1);
			scanf("%d",&m1[ef][ec]);
			}
		}
		printf("\nInserte la matriz 2: ");
		printf("\nInserte filas: ");
		scanf("%d", &f2);
		printf("\nInserte columnas: ");
		scanf("%d", &c2);
		printf("\nDimensiones: %d x %d", f2, c2);
		for(ef=0;ef<f2;ef++){
			for(ec=0;ec<c2;ec++){
			printf("\nElemento %d-%d matriz 2: ", ef+1, ec+1);
			scanf("%d",&m2[ef][ec]);
			}
		}
		printf("\nInserte la matriz 3: ");
		printf("\nInserte filas: ");
		scanf("%d", &f3);
		printf("\nInserte columnas: ");
		scanf("%d", &c3);
		printf("\nDimensiones: %d x %d", f3, c3);
		for(ef=0;ef<f3;ef++){
			for(ec=0;ec<c3;ec++){
			printf("\nElemento %d-%d matriz 3: ", ef+1, ec+1);
			scanf("%d",&m3[ef][ec]);
			}
		}
		printf("\nInserte la matriz 4: ");
		printf("\nInserte filas: ");
		scanf("%d", &f4);
		printf("\nInserte columnas: ");
		scanf("%d", &c4);
		printf("\nDimensiones: %d x %d", f4, c4);
		for(ef=0;ef<f4;ef++){
			for(ec=0;ec<c4;ec++){
			printf("\nElemento %d-%d matriz 4: ", ef+1, ec+1);
			scanf("%d",&m4[ef][ec]);
			}
		}
		printf("\nMatriz 1: ");
		printf("\n");
		for(ef=0;ef<f1;ef++){
		printf("\n|");
			for(ec=0;ec<c1;ec++){
			printf(" %d  ", m1[ef][ec]);
			}
		printf("|");
		}
		printf("\n");
		printf("\nMatriz 2: ");
		printf("\n");
		for(ef=0;ef<f2;ef++){
			printf("\n|");
			for(ec=0;ec<c2;ec++){
			printf(" %d  ", m2[ef][ec]);
			}
			printf("|");
		}
		printf("\nMatriz 3: ");
		printf("\n");
		for(ef=0;ef<f3;ef++){
			printf("\n|");
			for(ec=0;ec<c3;ec++){
			printf(" %d  ", m3[ef][ec]);
			}
			printf("|");
		}	
		printf("\nMatriz 4: ");
		printf("\n");
		for(ef=0;ef<f4;ef++){
			printf("\n|");
			for(ec=0;ec<c4;ec++){
			printf(" %d  ", m4[ef][ec]);
			}
			printf("|");
		}
	}else if(nm==5){
		printf("\nAceptado... %d matrices.", nm);
		printf("\nInserte la matriz 1: ");
		printf("\nInserte filas: ");
		scanf("%d", &f1);
		printf("\nInserte columnas: ");
		scanf("%d", &c1);
		printf("\nDimensiones: %d x %d", f1, c1);
		for(ef=0;ef<f1;ef++){
			for(ec=0;ec<c1;ec++){
			printf("\nElemento %d-%d matriz 1: ", ef+1, ec+1);
			scanf("%d",&m1[ef][ec]);
			}
		}
		printf("\nInserte la matriz 2: ");
		printf("\nInserte filas: ");
		scanf("%d", &f2);
		printf("\nInserte columnas: ");
		scanf("%d", &c2);
		printf("\nDimensiones: %d x %d", f2, c2);
		for(ef=0;ef<f2;ef++){
			for(ec=0;ec<c2;ec++){
			printf("\nElemento %d-%d matriz 2: ", ef+1, ec+1);
			scanf("%d",&m2[ef][ec]);
			}
		}
		printf("\nInserte la matriz 3: ");
		printf("\nInserte filas: ");
		scanf("%d", &f3);
		printf("\nInserte columnas: ");
		scanf("%d", &c3);
		printf("\nDimensiones: %d x %d", f3, c3);
		for(ef=0;ef<f3;ef++){
			for(ec=0;ec<c3;ec++){
			printf("\nElemento %d-%d matriz 3: ", ef+1, ec+1);
			scanf("%d",&m3[ef][ec]);
			}
		}
		printf("\nInserte la matriz 4: ");
		printf("\nInserte filas: ");
		scanf("%d", &f4);
		printf("\nInserte columnas: ");
		scanf("%d", &c4);
		printf("\nDimensiones: %d x %d", f4, c4);
		for(ef=0;ef<f4;ef++){
			for(ec=0;ec<c4;ec++){
			printf("\nElemento %d-%d matriz 4: ", ef+1, ec+1);
			scanf("%d",&m4[ef][ec]);
			}
		}
		printf("\nInserte la matriz 5: ");
		printf("\nInserte filas: ");
		scanf("%d", &f5);
		printf("\nInserte columnas: ");
		scanf("%d", &c5);
		printf("\nDimensiones: %d x %d", f5, c5);
		for(ef=0;ef<f5;ef++){
			for(ec=0;ec<c5;ec++){
			printf("\nElemento %d-%d matriz 5: ", ef+1, ec+1);
			scanf("%d",&m5[ef][ec]);
			}
		}
		printf("\nMatriz 1: ");
		printf("\n");
		for(ef=0;ef<f1;ef++){
		printf("\n|");
			for(ec=0;ec<c1;ec++){
			printf(" %d  ", m1[ef][ec]);
			}
		printf("|");
		}
		printf("\n");
		printf("\nMatriz 2: ");
		printf("\n");
		for(ef=0;ef<f2;ef++){
			printf("\n|");
			for(ec=0;ec<c2;ec++){
			printf(" %d  ", m2[ef][ec]);
			}
			printf("|");
		}
		printf("\nMatriz 3: ");
		printf("\n");
		for(ef=0;ef<f3;ef++){
			printf("\n|");
			for(ec=0;ec<c3;ec++){
			printf(" %d  ", m3[ef][ec]);
			}
			printf("|");
		}	
		printf("\nMatriz 4: ");
		printf("\n");
		for(ef=0;ef<f4;ef++){
			printf("\n|");
			for(ec=0;ec<c4;ec++){
			printf(" %d  ", m4[ef][ec]);
			}
			printf("|");
		}
		printf("\nMatriz 5: ");
		printf("\n");
		for(ef=0;ef<f5;ef++){
			printf("\n|");
			for(ec=0;ec<c5;ec++){
			printf(" %d  ", m5[ef][ec]);
			}
			printf("|");
		}
	}else if(nm>5){
		nm=5;
		printf("\nSolo se insertaran 5 matrices.");
		printf("\nAceptado... %d matrices.", nm);
		printf("\nInserte la matriz 1: ");
		printf("\nInserte filas: ");
		scanf("%d", &f1);
		printf("\nInserte columnas: ");
		scanf("%d", &c1);
		printf("\nDimensiones: %d x %d", f1, c1);
		for(ef=0;ef<f1;ef++){
			for(ec=0;ec<c1;ec++){
			printf("\nElemento %d-%d matriz 1: ", ef+1, ec+1);
			scanf("%d",&m1[ef][ec]);
			}
		}
		printf("\nInserte la matriz 2: ");
		printf("\nInserte filas: ");
		scanf("%d", &f2);
		printf("\nInserte columnas: ");
		scanf("%d", &c2);
		printf("\nDimensiones: %d x %d", f2, c2);
		for(ef=0;ef<f2;ef++){
			for(ec=0;ec<c2;ec++){
			printf("\nElemento %d-%d matriz 2: ", ef+1, ec+1);
			scanf("%d",&m2[ef][ec]);
			}
		}
		printf("\nInserte la matriz 3: ");
		printf("\nInserte filas: ");
		scanf("%d", &f3);
		printf("\nInserte columnas: ");
		scanf("%d", &c3);
		printf("\nDimensiones: %d x %d", f3, c3);
		for(ef=0;ef<f3;ef++){
			for(ec=0;ec<c3;ec++){
			printf("\nElemento %d-%d matriz 3: ", ef+1, ec+1);
			scanf("%d",&m3[ef][ec]);
			}
		}
		printf("\nInserte la matriz 4: ");
		printf("\nInserte filas: ");
		scanf("%d", &f4);
		printf("\nInserte columnas: ");
		scanf("%d", &c4);
		printf("\nDimensiones: %d x %d", f4, c4);
		for(ef=0;ef<f4;ef++){
			for(ec=0;ec<c4;ec++){
			printf("\nElemento %d-%d matriz 4: ", ef+1, ec+1);
			scanf("%d",&m4[ef][ec]);
			}
		}
		printf("\nInserte la matriz 5: ");
		printf("\nInserte filas: ");
		scanf("%d", &f5);
		printf("\nInserte columnas: ");
		scanf("%d", &c5);
		printf("\nDimensiones: %d x %d", f5, c5);
		for(ef=0;ef<f5;ef++){
			for(ec=0;ec<c5;ec++){
			printf("\nElemento %d-%d matriz 5: ", ef+1, ec+1);
			scanf("%d",&m5[ef][ec]);
			}
		}
		printf("\nMatriz 1: ");
		printf("\n");
		for(ef=0;ef<f1;ef++){
		printf("\n|");
			for(ec=0;ec<c1;ec++){
			printf(" %d  ", m1[ef][ec]);
			}
		printf("|");
		}
		printf("\n");
		printf("\nMatriz 2: ");
		printf("\n");
		for(ef=0;ef<f2;ef++){
			printf("\n|");
			for(ec=0;ec<c2;ec++){
			printf(" %d  ", m2[ef][ec]);
			}
			printf("|");
		}
		printf("\nMatriz 3: ");
		printf("\n");
		for(ef=0;ef<f3;ef++){
			printf("\n|");
			for(ec=0;ec<c3;ec++){
			printf(" %d  ", m3[ef][ec]);
			}
			printf("|");
		}	
		printf("\nMatriz 4: ");
		printf("\n");
		for(ef=0;ef<f4;ef++){
			printf("\n|");
			for(ec=0;ec<c4;ec++){
			printf(" %d  ", m4[ef][ec]);
			}
			printf("|");
		}
		printf("\nMatriz 5: ");
		printf("\n");
		for(ef=0;ef<f5;ef++){
			printf("\n|");
			for(ec=0;ec<c5;ec++){
			printf(" %d  ", m5[ef][ec]);
			}
			printf("|");
		}
	}
	//OPERACIONES
	int op;
	printf("\n______________________________");
	printf("\n|                            |");
	printf("\n|         OPERACIONES        |");
	printf("\n|____________________________|");
	printf("\n 1.......................SUMA ");
	printf("\n   100         1+2");
	printf("\n   101       1+2+3");
	printf("\n   102     1+2+3+4");
	printf("\n   103   1+2+3+4+5");
	printf("\n 2.............MULTIPLICACION ");
	printf("\n   200         1x2");
	printf("\n   201         2x1");
	printf("\n Para restar, insertar la matriz con menos,(-) delante de cada numero.");
	printf("\n******************************");
	printf("\nInserte numero de operacion: ");
	scanf("%d", &op);
	printf("Operacion numero %d...aceptada", op);
	int fmayor;
	int cmayor;
	if(f1>=f2){
		fmayor=f1;
		if(fmayor>=f3){
			fmayor=f2;
			if(fmayor>=f4){
				fmayor=f3;
				if(fmayor>=f5){
					fmayor=f4;
				}else{
					fmayor=f5;
				}
			}
		}
	}
	if(c1>=c2){
		cmayor=c1;
		if(cmayor>=c3){
			cmayor=c2;
			if(cmayor>=c4){
				cmayor=c3;
				if(cmayor>=c5){
					cmayor=c4;
				}else{
					cmayor=c5;
				}
			}
		}
	}
	if(op==100){
		int s12[100][100];
		printf("\n Suma 1+2");
		for(ef=0;ef<=50;ef++){
			for(ec=0;ec<=50;ec++){
				s12[ef][ec]=m1[ef][ec]+m2[ef][ec];
			}
		}
		for(ef=0;ef<f1;ef++){
			printf("\n |");
			for(ec=0;ec<c1;ec++){
				printf(" %d", m1[ef][ec]);
			}
			printf(" |");
			printf("    |");
			for(ec=0;ec<c1;ec++){
				printf(" %d",m2[ef][ec]);
			}
			printf(" |");
		}
		for(ef=0;ef<f1;ef++){
		printf("\n|");
			for(ec=0;ec<c1;ec++){
			printf(" %d  ", s12[fmayor][cmayor]);
			}
			printf("|");
		}
	}else if(op==101){
		printf("\n Suma 1+2+3");
		int s123[100][100];
		for(ef=0;ef<=50;ef++){
			for(ec=0;ec<=50;ec++){
				s123[ef][ec]=m1[ef][ec]+m2[ef][ec]+m3[ef][ec];
			}
		}
		for(ef=0;ef<f1;ef++){
		printf("\n|");
			for(ec=0;ec<c1;ec++){
			printf(" %d  ", s123[fmayor][cmayor]);
			}
			printf("|");
		}
	}else if(op==102){
		printf("\n Suma 1+2+3+4");
		int s1234[100][100];
		for(ef=0;ef<=50;ef++){
			for(ec=0;ec<=50;ec++){
				s1234[ef][ec]=m1[ef][ec]+m2[ef][ec]+m3[ef][ec]+m4[ef][ec];
			}
		}
		for(ef=0;ef<f1;ef++){
		printf("\n|");
			for(ec=0;ec<c1;ec++){
			printf(" %d  ", s1234[fmayor][cmayor]);
			}
			printf("|");
		}
	}else if(op==103){
		printf("\n Suma 1+2+3+4+5");
		int s12345[100][100];
		for(ef=0;ef<=50;ef++){
			for(ec=0;ec<=50;ec++){
				s12345[ef][ec]=m1[ef][ec]+m2[ef][ec]+m3[ef][ec]+m4[ef][ec]+m5[ef][ec];
			}
		}
		for(ef=0;ef<f1;ef++){
		printf("\n|");
			for(ec=0;ec<c1;ec++){
			printf(" %d  ", s12345[fmayor][cmayor]);
			}
			printf("|");
		}
	}else if(op==200){
		printf("\nMultiplicacion 1x2");
		if(c1==f2){
			printf("\nMismo numero de columnas en la matriz 1 que filas en la matriz 2, operacion aceptada...");
			int mul1x2[100][100];
			int mu;
			for(ef=0;ef<=c1;ef++){
				for(ec=0;ec<=f2;ec++){
					for(mu=0;mu<=f2;mu++){
						mul1x2[ef][ec]=mul1x2[ef][ec]+(m1[ef][mu]*m2[mu][ec]);
					}
				}
			}
			int fm;
			int cm;
			if(f1>=f2){
				fm=f1;
			}else{
				fm=f2;
			}
			if(c1>=c2){
				cm=c1;
			}else{
				cm=c2;
			}
			for(ef=0;ef<fm;ef++){
				printf("\n|");
				for(ec=0;ec<cm;ec++){
					printf(" %d  ", mul1x2[ef][ec]);
				}
				printf("|");
			}
		}else{
			printf("\nEl numero de columnas en la matriz 1 y el numero de filas de la matriz 2 no coinciden, operacion declinada");
		}
	}else{
		printf("\n Vuelve a empezar y elige numero valido, funcion aun no declarada");
	}
	return 0;
}
