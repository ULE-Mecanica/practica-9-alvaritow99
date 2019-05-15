#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void traspuestaMatriz(int *matriz,int filas,int columnas);
void imprime(int *matriz,int filas,int columnas);


int main(){
	
	int *matriz;
	int numfilas,numcolumnas;
	int i,j;
	
	printf("Introduce el numero de filas:\n");
	scanf("%d",&numfilas);
	
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&numcolumnas);
	
	matriz=(int*)malloc(sizeof(int)*numfilas*numcolumnas);

	//Genero la semilla
	srand(time(NULL));
	
	//Relleno la matriz con numeros aleatorios del 0 al 9 ambos incluidos
	for(i=0;i<numfilas;i++){
		
		for(j=0;j<numcolumnas;j++){
			
			matriz[i*numfilas+j]=rand()%10+0;
		}
	}
	
	traspuestaMatriz(matriz,numfilas,numcolumnas);
	imprime(matriz,numfilas,numcolumnas);	
	
	return 0;	

}


void traspuestaMatriz(int *matriz,int filas,int columnas){
	
	int i,j;
	
	//Matriz original
	printf("Matriz.\n");
	
	for(i=0;i<filas;i++){
		
		for(j=0;j<columnas;j++){	
			
			printf("%d  ",matriz[i*filas+j]);
		}
		
		printf("\n");
	}
	
	printf("\n");
	
	//Matriz traspuesta(intercambio filas por columnas)
	printf("Matriz traspuesta.\n");
	
	for(i=0;i<columnas;i++){
		
		for(j=0;j<filas;j++){
			
			printf("%d  ",matriz[j*filas+i]);
			
		}
		
		printf("\n");
	}
	
	
}

void imprime(int *matriz,int filas,int columnas){
	
	int i,j;
	
	//Imprimo la traspuesta
	
	printf("Matriz traspuesta.\n");
	
	for(i=0;i<columnas;i++){
		
		for(j=0;j<filas;j++){
			
			printf("%d  ",matriz[j*filas+i]);
			
		}
		
		printf("\n");
	}
		
}
