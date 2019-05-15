#include <stdio.h>
#include <stdlib.h>


int main(int argc,char*argv[]){
	
	int i,j;
	
	//Declaro variables auxiliares
	int l,m;

	int numfilas,numcolumnas;
	int *matriz;
	int suma=0;
	
	
	printf("Dime el numero de filas de una matriz: ");
	scanf("%d",&numfilas);
	
	printf("Dime el numero de columnas de una matriz: ");
	scanf("%d",&numcolumnas);
	
	//Reservo espacio para la matriz
	
	matriz =(int*)malloc(sizeof(int)*numfilas*numcolumnas);
	
	//Leo la matriz

	for(i=0;i<numfilas;i++){
		
		for(j=0;i<numcolumnas;j++){
			
			printf("Introduzca la posicion (%d,%d) de la matriz separada por comas: \n",i,j);
			scanf("%d",&matriz[i*numfilas+j]);
			
		}
	}

	//Imprimo la matriz con variables auxiliares m=filas, l=columnas
	
	for(i=0;i<m;i++){
		
		for(j=0;j<l;j++){
			
			printf("%d",matriz[i*numfilas+j]);
		}
	
		printf("\n");
	
	}
	
	//Hago la suma de los elementos de la matriz
	
	for(m=0;m<numfilas;m++){
		
		for(l=0;l<numcolumnas;l++){
			
			suma+= matriz[l*numfilas+m];
		}
	
	}

	printf("La suma de los elementos de la matriz es: %d",suma);
	
	free(matriz);
	
	return 0;
	
}
