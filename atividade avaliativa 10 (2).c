/*10. Fa�a um algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e encontre qual
o menor deles, mostrando-o no final. Fa�a o chinesinho ao lado do seu algoritmo. */
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor1, valor2, valor3;
	printf("Digite o valor 1: \n");
	scanf("%f", &valor1);// 1==valor1
	printf("Digite o valor 2: \n");
	scanf("%f", &valor2);//2==valor2
	printf("Digite o valor 3: \n");
	scanf("%f", &valor3);//3==valor3
	if(valor1 < valor2 && valor1 < valor3){//(1 < 2 and 1 < 3)
		printf("O menor valor �: %.1f", valor1);// O menor valor �: 1.
	}
	else if(valor2 < valor1 && valor2 < valor3){
		printf("O menor valor �: %.1f", valor2);
	}
	else if(valor3 < valor1 && valor3 < valor2){
		printf("O menor valor �: %.1f", valor3);
	}
	else{
		printf(" N�o possui menor valor.");
	}
	return 0;
}
