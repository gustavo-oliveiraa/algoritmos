/*12. Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual
cidade pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��o*/

#include<stdio.h>
int main(){
	int DDD;
	printf("Digite o DDD:\n");
	scanf("%d", &DDD);
	if(DDD == 61) {
	        printf("O DDD %d e de Brasilia.\n", DDD);
    }else if(DDD == 71){
    	    printf("O DDD %d e de Salvador.\n", DDD);
	}else if(DDD == 11){
		    printf("O DDD %d e de Sao Paulo.\n", DDD);
	}else if(DDD == 21){
		    printf("O DDD %d e do Rio de Janeiro.\n", DDD);
	}else if(DDD == 32){
	        printf("O DDD %d e de Juiz de Fora.\n", DDD);
    }else if(DDD == 19){
    	    printf("O DDD %d e de Campinas.\n", DDD);
	}else if(DDD == 27){
		    printf("O DDD %d e de Vitoria.\n", DDD);
	}else if(DDD == 31){
	        printf("O DDD %d e de Belo Horizonte.\n", DDD);
    }else{
    	    printf("Cidade sem identificacao.");
    }
	 return 0;               
}
