/*5. Complete os exercícios 1 (multa no eixão) e 3 (triângulo) com uma mensagem para quando a 
condição não for satisfeita (falsa).*/
#include<stdio.h>
#include<math.h>
int main(){
	char placa[7];
	int velocidade;
	printf("Digite a placa do carro:\n");
	scanf("%s", &placa);
	printf("Digite a velocidade do veiculo:\n");
	scanf("%d", &velocidade);
	if(velocidade > 80)
	   printf("Voce sera multado, sua velocidade %dkm excedeu o limite.\nNumero da placa:%s\n", velocidade, placa);
	   else{
	  	    printf("Voce nao sera multado, sua velocidade nao excedeu o limite.\n");
	  	    printf("Numero de sua placa:%s.\n", placa);
	  }
	return 0;
	
}

