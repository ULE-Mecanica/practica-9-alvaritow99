#include<stdio.h>
#include<stdlib.h>

int main(){

	int numfilas,numcolumnas;
	int *matriz;
	int i,j;
	int l;
	
	//Creo tamaño de la matriz
	
	numfilas=10;
	numcolumnas=10;
	
	//Reservo espacio para la matriz
	 
	matriz =(int*)malloc(sizeof(int)*numfilas*numcolumnas);
	
	//Rellenar matriz
	
	l=0;
	
	for(i=0;i<numfilas;i++){
		
		for(j=0;j<numcolumnas;j++){
		
			l= matriz[i*numfilas+j];
			l++;
		}
	}
	
	//Imprimo la matriz
	
	for(i=0;i<numfilas;i++){
		
		for(j=0;j<numcolumnas;j++){
			
			printf("%d",matriz[i*numcolumnas+j]);
		}
		
		printf("\n");
	
	}
	
	free(matriz);
	
	return 0;	
}
