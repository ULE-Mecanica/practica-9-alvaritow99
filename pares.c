#include<stdio.h>
#include<stdlib.h>

void inicializa(int *matriz, int filas, int columnas);
void imprime(int *matriz, int filas, int columnas);

int main(){
		
	int numfilas,numcolumnas;	
	int *matriz;
	
	//Pido el tamaño de la matriz
	
	printf("Introduce el numero de filas:\n");
	scanf("%d",&numfilas);
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&numcolumnas);
	
	//Reservo memoria para la matriz
	
	matriz=(int*)malloc(sizeof(int)*numfilas*numcolumnas);
	
	inicializa(matriz,numfilas,numcolumnas);
	imprime(matriz,numfilas,numcolumnas);

	//Libero el espacio reservado para la matriz
	
	free(matriz);
	
	return 0;
}
	
void inicializa(int *matriz, int filas, int columnas){
	
	int i,j;
	int l;
	
	l=0;
	
	for(i=0;i<filas;i++){
		
		for(j=0;j<columnas;j++){
		
			l=matriz[i*filas+j];
			
			l+=2;
		}
	}	

}

void imprime(int *matriz, int filas, int columnas){
	
	int i,j;

	for(i=0;i<filas;i++){
		
		for(j=0;j<columnas;j++){
		
			printf("%d",matriz[i*filas+j]);
	
		}
		
		printf("\n");
	}	

}

