#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
		
	int numfilas,numcolumnas;	
	int *matriz;
	int i,j;
	
	//Pido el tamaño de la matriz
	
	printf("Introduce el numero de filas:\n");
	scanf("%d",&numfilas);
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&numcolumnas);
	
	printf("\n");
	
	
	//Reservo memoria para la matriz
	
	matriz =(int*)malloc(sizeof(int)*numfilas*numcolumnas);
	
	srand(time(NULL));

	//Relleno la matriz
	
	for(i=0;i<numfilas;i++){
		
		for(j=0;j<numcolumnas;j++){	
		
			matriz[i*numfilas+j]=rand()%100+1;
		
		}
	
	}		


	//Imprimir matriz
	
	for(i=0;i<numfilas;i++){
		
		for(j=0;j<numcolumnas;j++){
			
			printf("%d",matriz[i*numfilas+j]);
		
		}
		
		printf("\n");
	
	}	

	free(matriz);
	return 0;

}
	
