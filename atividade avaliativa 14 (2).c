/*14. Fazer um algoritmo que leia três valores, determine e imprima o maior deles*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor1, valor2, valor3;
	printf("Digite o valor 1:\n");
	scanf("%f", &valor1);
    printf("Digite o valor 2:\n");
	scanf("%f", &valor2);
	printf("Digite o valor 3:\n");
	scanf("%f", &valor3);
	if(valor1 > valor2 && valor1 > valor3){
		printf("O maior valor é: %.1f", valor1);
	}
	else if(valor2 > valor1 && valor2 > valor3){
		printf("O maior valor é: %.1f", valor2);
	}
	else if(valor3 > valor1 && valor3 > valor2){
		printf("O maior valor é: %.1f", valor3);
	}
	else{
		printf("Nao a maior valor.");
	}
	return 0;
}
