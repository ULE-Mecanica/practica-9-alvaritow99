#include<stdio.h>
#include<stdlib.h>

void media(int *vector,int filas);

int main(){

	int numfilas;
	int *vector;
	int i,j;

	printf("Introduce las filas del vector: ");
	scanf("%d",&numfilas);

	//Reservo memoria 
	
	vector =(int*)malloc(sizeof(int)*numfilas);
	
	//Relleno el vector
	
	for(i=0; i<numfilas; i++){
		
		printf("Introduce el elemento de posicion %d ",i);
		scanf("%d",&*(vector+i));
		
		printf("\n");
	}
	
	media(vector,numfilas);
	
	free(vector);
	
	return 0;
}

void media(int *vector,int filas){

int i;
float suma=0;

	for(i=0;i<filas;i++){
		
		suma=suma+ *(vector+i);
	
	}
	
	suma=suma/filas;
	
	printf("La media es %f",suma);

}

