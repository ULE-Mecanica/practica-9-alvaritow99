#include<stdio.h>
#include<stdlib.h>

void inicializaMatriz(int *matriz, int filas, int columnas);
void imprimeMatriz(int *matriz, int filas, int columnas);

int main(){
		
	int numfilas,numcolumnas;	
	int *matriz;


	//Pido el numero de filas y columnas.
	
	printf("Introduce el numero de filas:\n");
	scanf("%d",&numfilas);
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&numcolumnas);
	
	printf("\n");
	
	
	//Reservo memoria para la matriz

	matriz=(int*)malloc(sizeof(int));
	
	inicializaMatriz(matriz,numfilas,numcolumnas);
	imprimeMatriz(matriz,numfilas,numcolumnas);


	free(matriz);
	return 0;

}
	
void inicializaMatriz(int *matriz, int filas, int columnas){
	
	int i,j;
	int l;
	
	l=1;
	
	for(i=0;i<filas;i++){
		
		for(j=0;j<columnas;j++){
		
			l=matriz[i*filas+j];
		
			l+=2;
		}
	
	}	

}

void imprimeMatriz(int *mat, int filas, int columnas){
	
	int i,j;

	for(i=0;i<filas;i++){
		
		for(j=0;j<columnas;j++){
		
			printf("%d",mat[i*filas+j]);
	
		}
		
		printf("\n");
	
	}	

}

