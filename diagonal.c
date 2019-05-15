#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *matriz;
	int numfilas,numcolumnas;
	int i,j;
	
	//Pido el tamaño de la matriz
	
	printf("Introduce el numero de filas:\n");
	scanf("%d",&numfilas);
	
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&numcolumnas);
	
	//Reservo memoria

	matriz=(int*)malloc(sizeof(int)*numfilas*numcolumnas);
	
	//Rellenar matriz
	
	for(i=0;i<numfilas;i++){
		
		for(j=0;j<numcolumnas;j++){
			
			//Diagonal principal
			
			if(i==j){
				
				matriz[i*numfilas+j]=i*j;
			}
			
			else{
				
				matriz[i*numfilas+j]=i-j;
			}	
		}
	
	}
	
	
	//Imprimo la matriz
	
	for(i=0;i<numfilas;i++){
	
		for(j=0;j<numcolumnas;j++){
			
			printf("%d",matriz[i*numfilas+j]);
			
		}
		
		printf("\n");
	
	}
					
	return 0;

}
