#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *matriz;
	int numfilas,numcolumnas;
	int i,j;
	
	printf("Introduce el numero de filas:\n");
	scanf("%d",&numfilas);
	
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&numcolumnas);
	
	matriz=(int*)malloc(sizeof(int)*numfilas*numcolumnas);	
	
	for(i=0;i<numfilas;i++){
		
		for(j=0;j<numcolumnas;j++){
			
			if(i==j){
				
				matriz[i*numfilas+j]=1;
			}
			else{
				
				matriz[i*numfilas+j]=0;
			
			}
		
		}
	
	}

	//Imprimo la matriz

	for(i=0;i<numfilas;i++){
		
		for(j=0;j<numcolumnas;j++){	
		
			printf("%d  ",matriz[i*numfilas+j]);
		
		}
		
		printf("\n");
	
	}
	
	free(matriz);
	return 0;

}

