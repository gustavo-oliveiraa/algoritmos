/*8. Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o
peso ideal da pessoa, utilizando as seguintes fórmulas
para homem: peso = (72.5 * altura) - 58
para mulher: peso = (62.1 * altura) - 44.7*/
#include<stdio.h>
int main(){
	char sexo;
	double pesoIdeal, altura;
	printf("Digite o sexo (M) ou (F):\n");
	scanf("%c", &sexo);
	printf("Digite a altura:\n");
	scanf("%lf", &altura);
	if(sexo == 'M'){
	        pesoIdeal = (72.5 * altura) - 58;
	        printf("o peso ideal da pessoa e %.2lf.\n", pesoIdeal);
	}else{
		     pesoIdeal = (62.1 * altura) - 44.7;
		     printf("O peso ideal da pessoa e %.2lf.\n", pesoIdeal);
	}
	return 0;
}
