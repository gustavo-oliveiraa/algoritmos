/*3. Dado tr�s valores, verificar se eles podem constituir os lados de um 
tri�ngulo (tri�ngulo � umafigura geom�trica onde cada 
lado � menor do que a soma dos outros dois lados).*/
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
