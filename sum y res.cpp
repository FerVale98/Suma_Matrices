#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a,b,valor,valor2;
	srand(time(NULL));
	printf("Tama�o de la matriz:\n");
	printf("Filas: ");
	scanf("%i",&a);
	printf("\nColumnas: ");
	scanf("%i",&b);
	int mat[a][b],mat2[a][b],suma[a][b],resta[a][b];
	printf("\nMatriz 1:\n");
	for(int i=0;i<a;i++){
		 for(int j=0;j<b;j++){
		 	valor=1+rand()%30;
		 	mat[i][j]=valor;
		 	printf("%i ",mat[i][j]);
		 }
		 printf("\n");
	}
	printf("\nMatriz 2:\n");
	for(int i=0;i<a;i++){
		 for(int j=0;j<b;j++){
		 	valor2=1+rand()%30;
		 	mat2[i][j]=valor2;
		 	printf("%i ",mat2[i][j]);
		 }
		 printf("\n");
	}
	printf("\nSuma:\n");
	for(int i=0;i<a;i++){
		 for(int j=0;j<b;j++){
		 	suma[i][j]=mat[i][j]+mat2[i][j];
		 	printf("%i ",suma[i][j]);
		 }
		 printf("\n");
	}
	
	printf("\nResta 1\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(i==j){
				resta[i][j]=mat[i][j]-mat2[i][j];
			}else{
				resta[i][j]=mat[i][j]+mat2[i][j];
			}
			printf(" %i",resta[i][j]);
		}
		printf("\n");
		
	}
	printf("\nResta 2\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(j==((b-1)-i)){
				resta[i][j]=mat[i][j]-mat2[i][j];
			}else{
				resta[i][j]=mat[i][j]+mat2[i][j];
			}
			printf(" %i",resta[i][j]);
		}
		printf("\n");
		
	}
	
	
}
