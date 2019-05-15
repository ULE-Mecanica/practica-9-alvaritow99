#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,char *argv[]){


	int i; //Filas del vector
	int n; //Numero de n enteros del vector
	int valormin; //Valor minimo del vector
	int *vector; //Vector que contiene un numero de n enteros

	//Pido el numero del vector
	
	printf("Dame un numero de elementos del vector: ");
	scanf("%d",&n);

	printf("Dame los %d numeros que comparo separados por comas: ",n);
	
	vector=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++){

		scanf("%d",&*(vector+i));

	}

	for(i=1;i<=n;i++){

		if((*vector+i)<=valormin){
	
			valormin= *(vector+i);
		
		}
		
		if(*(vector+0)<=*(vector+i)){

			printf("El valor minimo del vector es: %d \n",valormin);

		}
		
	}


	free(vector);
	
	return 0;

}
