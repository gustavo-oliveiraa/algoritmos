/*11. Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de
triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um
outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo
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
