/*4. Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída
uma das seguintes mensagens: “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo
feminino, acrescentando o nome em seguida. Observe o exemplo de um resultado:
Ilma Sra. Ana Rita*/

#include<stdio.h>
int main(){
	char nome[20], sexo;
	
	printf("Digite seu nome:");
	scanf("%s", &nome);
	fflush(stdin);
	printf("Digite seu sexo:");
	scanf("%c", &sexo);
	fflush(stdin);
	if(sexo == 'm')
	printf("Ilmo. Sr %s.\n", nome);
	else if(sexo == 'f')
	printf("Ilma. Sra %s.\n", nome);
	else
	printf("Nome inválido.\n");
	
	return 0;
}
