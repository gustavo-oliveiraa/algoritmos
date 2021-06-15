/*16. Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome
e a altura da menor delas.*/

#include<stdio.h>
int main(){
	char NOME1[50], NOME2[50], NOME3[50];
	double ALTURA1, ALTURA2, ALTURA3;
	printf("Digite o nome da primeira pessoa:\n");
	scanf("%s", &NOME1);
	printf("Coloque a altura da primeira pessoa:\n");
	scanf("%lf", &ALTURA1);
	printf("Digite o nome da segunda pessoa:\n");
	scanf("%s", &NOME2);
	printf("Coloque a altura da segunda pessoa:\n");
	scanf("%lf", &ALTURA2);
	printf("Digite o nome da terceira pessoa:\n");
	scanf("%s", &NOME3);
	printf("Coloque a altura da terceira pessoa:\n");
	scanf("%lf", &ALTURA3);
	if(ALTURA1 > ALTURA3 && ALTURA1 > ALTURA2){
		    printf("O maior e o %s, com %.2lf.\n", NOME1, ALTURA1);
	}else if(ALTURA2 > ALTURA3 && ALTURA2 > ALTURA1){
		    printf("O maior e o %s, com %.2lf.\n", NOME2, ALTURA2);
	}else if(ALTURA3 > ALTURA1 && ALTURA3 > ALTURA2){
		    printf("O maior e o %s, com %.2lf.\n", NOME3, ALTURA3);
	}else if(ALTURA1 == ALTURA3 && ALTURA1 == ALTURA2){
		    printf("Todos tem a mesma altura.\n");
	}
	return 0;
		
}
