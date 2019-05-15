#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int numfilas,numcolumnas;
	int *matriz;
	int descendente,i,j;
	
	//Pido el tamaño de la matriz
	printf("Introduce el numero de filas:\n");
	scanf("%d",&numfilas);
	
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&numcolumnas);
	
	matriz=(int*)malloc(sizeof(int)*numfilas*numcolumnas);
	
	descendente=numfilas*numcolumnas;
	
	for(i=0;i<numfilas;i++){
	
		for(j=0;j<numcolumnas;j++){
			
			matriz[i*numfilas+j]=descendente;
			descendente--;
		
		}

	}
	
	for(i=0;i<numfilas;i++){
	
		for(j=0;j<numcolumnas;j++){
			
			printf("%d",matriz[i*numfilas+j]);
		
		}
		
		printf("\n");
	}
	

	return 0;
}
