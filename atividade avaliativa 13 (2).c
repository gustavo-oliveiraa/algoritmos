/*13. Fa�a e apresente o chinesinho do seu algoritmo do exerc�cio 12.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int DDD;
	printf("Digite o DDD:\n");
	scanf("%d", &DDD);//DDD== 32
	if(DDD == 61) {//(32==61) n�o � esta cidade.
	        printf("O DDD %d � de Bras�lia.\n", DDD);
    }else if(DDD == 71){//(32==71) n�o � esta cidade.
    	    printf("O DDD %d � de Salvador.\n", DDD);
	}else if(DDD == 11){//(32==11) n�o � esta cidade.
		    printf("O DDD %d � de S�o Paulo.\n", DDD);
	}else if(DDD == 21){//(32==21) n�o � esta cidade.
		    printf("O DDD %d � do Rio de Janeiro.\n", DDD);
	}else if(DDD == 32){//(32==32) � esta cidade.
	        printf("O DDD %d � de Juiz de Fora.\n", DDD);// O DDD 32 � de Juiz de Fora.
    }else if(DDD == 19){
    	    printf("O DDD %d � de Campinas.\n", DDD);
	}else if(DDD == 27){
		    printf("O DDD %d � de Vit�ria.\n", DDD);
	}else if(DDD == 31){
	        printf("O DDD %d � de Belo Horizonte.\n", DDD);
    }else{
    	    printf("Cidade sem identifica��o.");
    }
	 return 0;       
	        
}
