/*11. Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo apresente no caso de
tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais) ou um
outro tri�ngulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo
(chinesinho) ao lado.*/

#include<stdio.h>
#include<math.h>
int main(){
	double LADO1, LADO2, LADO3;
	printf("Digite o valor do lado 1:\n");
	scanf("%lf", &LADO1);
	printf("Digite o valor do lado 2:\n");
	scanf("%lf", &LADO2);
	printf("Digite o valor do lado 3:\n");
	scanf("%lf", &LADO3);
	if(LADO1 == LADO2 && LADO1 == LADO3){
		printf("Este e um triangulo equilatero.\n");
	}else if(LADO1 != LADO2 && LADO1 != LADO3){
		printf("Este e um triangulo escaleno.\n");
	}else{
		printf("Este e um trangulo isosceles.\n");
	}
	return 0;
}
