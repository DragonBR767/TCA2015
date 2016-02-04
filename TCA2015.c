#include <stdio.h>
#include <string.h>

int main (void){
	
	//Definição de Estruturas JOOJ
	typedef struct {
		char login[50];
		char senha[50];
		char nome[150];
		int tipo;
		int id;
	} usuario;
	
	//Declaração de Variaveis Bronzes
	int a=0;//Saporra é pro Menu de Opções
	FILE fp;
	usuario conta;
	
	
	printf("SEJA BEM-VINDO JOGADOR\n");
	printf("\nOque deseja fazer?\n");
	printf("\n1 - Cadastrar Usuario\n");
	printf("2 - Fazer Login\n");
	printf("9 - Sair!\n");
	
	while(a!=9){
	fflush(stdin);
	scanf("%d",a);
	
	switch (a) {
		
		default: printf("Opção Invalida!!!");
		
		case (1):
			fp = fopen(usuarios.bin, a+);
			if (fp != NULL){
				
			}
	}
	}
}
