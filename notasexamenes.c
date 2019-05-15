#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j;
	int *matriz;
	int alumnos,notas;
	float contador=0;
	float total=0;
	
	//Pido el tamaño de la matriz(alumnos=i, notas=j)
	
	printf("Introduzca el numero de alumnos.\n");
	scanf("%d",&alumnos);
	
	printf("Introduzca el numero de notas.\n");
	scanf("%d",&notas);	
	
	//Reservo espacio para la matriz
	
	matriz=(int*)malloc(sizeof(int)*alumnos*notas);

	
	for(i=0;i<alumnos;i++){
		
		for(j=0;j<notas;j++){
			
			printf("Introduzca la nota %d del alumno %d.\n",j+1,i+1);
			scanf("%d",&matriz[i*alumnos+j]);
		}
	}
	
	for(i=0;i<alumnos;i++){
		
		for(j=0;j<notas;j++){
			
			printf("%d",matriz[i*alumnos+j]);
		}
		
		printf("\n");
	}
	
	contador=0;
	
	for(i=0;i<alumnos;i++){
		
		for(j=0;j<notas;j++){
			
			contador+=matriz[i*alumnos+j];
			total+=matriz[i*alumnos+j];
		}
		
		contador=contador/notas;
		printf("La nota media del alumno %d es: %.2f ",i+1,contador);
	
	}
		
	total=total/(notas*alumnos);
	printf("La nota media del grupo es %.2f ",total);

	free(matriz);
	return 0;

}


