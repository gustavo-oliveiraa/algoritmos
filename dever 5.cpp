/*5. Complete os exerc�cios 1 (multa no eix�o) e 3 (tri�ngulo) com uma mensagem para quando a 
condi��o n�o for satisfeita (falsa).*/
#include<stdio.h>
int main(){
	double A, B, C;
	printf("Digite o valor de A:\n");
	scanf("%lf", &A);
	printf("Digite o valor de B:\n");
	scanf("%lf", &B);
	printf("Digite valor de C:\n");
	scanf("%lf", &C);
	if(A + B <= C or A + C <= B or B + C <= A)
	   printf("Impossivel constituir os lados de um triangulo!\n");
	   else{
	   	    printf("E possivel constituir os lados de um triangulo!");
	   }
	   return 0;
}
