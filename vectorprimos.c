#include<stdio.h>
#include<stdlib.h>

int numprimo(int numero);
void primos(int *vector,int num);
void imprime(int *vector,int num);

int main(){
	
	int num,primo,i;
	int *vector;
	int resultado;
	
	printf("Dime el numero mde elementos del vector:\n");
	scanf("%d",&num);
	
	printf("Introduce el numero que deseas saber si es primo.\n");
	scanf("%d",&primo);
		
	vector=(int*)malloc(sizeof(int)*num);
	
	resultado=numprimo(primo);
	
	if(resultado==1){
		
		printf("El numero es primo.\n");
	
	}
	else{
		
		printf("El numero no es primo.\n");
	
	}

	primos(vector,num);
	imprime(vector,num);

	return 0;
}
 int numprimo(int numero){
	
	int i;
	
	//Declaro variable auxiliar
	int auxiliar;
	
	for(i=2;i<numero;i++){
		
		if(numero%i==0){
			
			auxiliar=0;
		}
		else{
			
			auxiliar=1;
		}
	}
	
	return auxiliar;
 }

void primos(int *vector,int num){
	
	int i;
	
	do{
		
		printf("Calcula %d primos",num);
		
		for(i=0;i<num;i++){
			
			if(num!=0){
				
				&*(vector+i);
			}
		}
		
	}while(primos!=num);
	
}

void imprime(int *vector,int num){
	
	int i;
	
	for(i=0;i<num;i++){
		
		printf("%d, ",*(vector+i));
	
	}
	
}

