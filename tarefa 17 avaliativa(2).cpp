/*17. Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida,
ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois
calcule e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa.*/
#include<stdio.h>
#include<math.h>
#include <locale.h>
int main(){
	int NASCIMENTO, ANO, IDADE, VIVIDOS;
	char NOME[50];
	printf("Digite seu nome:\n");
	scanf("%s", &NOME);
	printf("Digite o ano que voce nasceu:\n");
	scanf("%d", &NASCIMENTO);
	printf("Digite o ano atual:\n");
	scanf("%d", &ANO);
	IDADE = ANO - NASCIMENTO;
	VIVIDOS = IDADE * 365;
	printf("Seu nome:%s\n", NOME);
	printf("Sua idade:%d\n", IDADE);
	printf("Esses sao seus dias vividos:%d\n", VIVIDOS);
	return 0;
	
	
}
