#include<stdio.h>
#include<stdlib.h>

int primo(int num);
int elnumeroesprimo(int num);
	
int main(){
	
	int i,j;
	int numfilas,numcolumnas;
	int *matriz;

	printf("Introduce el numero de filas: ");
	scanf("%d",&numfilas);
	
	printf("Introduce el numero de columnas: ");
	scanf("%d",&numcolumnas);
	
	matriz=(int*)malloc(sizeof(int)*numfilas*numcolumnas);
	
	int l=0;
		
		for(i=0;i<numfilas;i++){
			
			for(j=0;j<numcolumnas;j++){
				
				l =primo(l);
				matriz[i*numfilas+j] = l;
			}
		}
		
		for(i=0;i<numfilas;i++){
			
			for(j=0;j<numcolumnas;j++){
			
				printf("%d",matriz[i*numfilas+j]);
			
			}
			
			printf("\n");
		}
		
	free(matriz);

	return 0;
}


int primo(int num){
	
	num++;
	
	while(!elnumeroesprimo(num)){
		
		num++;
	}

	return num;
}

int elnumeroesprimo(int num){
	
	int i;
	
	//Compruebo si es primo
	
	for(i=2;i<num; i++){
		
		if(num%i==0){
			
			return 0;
		
		}
	}
	
	return num;

}

