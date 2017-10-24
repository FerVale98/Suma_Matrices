#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a,b,valor,valor2;
	int mat[a][b],mat2[a][b],suma[a][b];
	srand(time(NULL));
	printf("Tamaño de la matriz:\n");
	printf("Columnas: ");
	scanf("%i",&a);
	printf("\nFilas: ");
	scanf("%i",&b);
	printf("\nMatriz 1:\n");
	for(int i=0;i<a;i++){
		 for(int j=0;j<b;j++){
		 	valor=1+rand()%30;
		 	mat[i][j]=valor;
		 	printf("%i ",mat[i][j]);
		 }
	}
	printf("\nMatriz 2:\n");
	for(int i=0;i<a;i++){
		 for(int j=0;j<b;j++){
		 	valor2=1+rand()%30;
		 	mat2[i][j]=valor2;
		 	printf("%i ",mat2[i][j]);
		 }
	}
	printf("\nSuma:\n");
	for(int i=0;i<a;i++){
		 for(int j=0;j<b;j++){
		 	suma[i][j]=mat[i][j]+mat2[i][j];
		 	printf("%i ",suma[i][j]);
		 }
	}
	
}
