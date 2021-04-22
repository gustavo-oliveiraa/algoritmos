/*15. Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à
Internet, para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você
pagará R$ 30,00 por até 20 horas de uso (va1or básico), caso você tenha usado mais de 20
horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float conta, horas;
	printf("Qual a quantidade de horas que foram utilizadas:\n");
	scanf("%f", &horas);
	if(horas <= 20){
		printf("Vocé pagara o valor inicial de R$30,00");
	}
	else{
		conta = ((horas-20)*3)+30;
		printf("O valor da conta a ser paga é R$ %.2f", conta);
	}
	return 0;
}
