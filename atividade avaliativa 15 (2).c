/*15. Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso �
Internet, para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc�
pagar� R$ 30,00 por at� 20 horas de uso (va1or b�sico), caso voc� tenha usado mais de 20
horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float conta, horas;
	printf("Qual a quantidade de horas que foram utilizadas:\n");
	scanf("%f", &horas);
	if(horas <= 20){
		printf("Voc� pagara o valor inicial de R$30,00");
	}
	else{
		conta = ((horas-20)*3)+30;
		printf("O valor da conta a ser paga � R$ %.2f", conta);
	}
	return 0;
}
