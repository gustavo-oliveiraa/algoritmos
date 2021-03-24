/*7. Ler dois valores numéricos e apresentar 
a diferença do maior valor pelo menor.*/
#include<stdio.h>
int main(){
	double A, B, DIFERENCA;
	printf("Digite o valor de A:\n");
	scanf("%lf", &A);
	printf("Digite o valor de B:\n");
	scanf("%lf", &B);
	if(A > B)
       DIFERENCA = A - B, printf("A diferenca entre o maior e o menor numero e:%.2lf\n", DIFERENCA);
       else{
       	    DIFERENCA = B - A;
       	    printf("A diferenca entre o maior e o menor numero e:%.2lf\n", DIFERENCA);
	   }
	   return 0;
}
