#include <stdio.h>
#include <string.h>
#include <time.h>

//Definição de Estruturas JOOJ
typedef struct {
	char login[50];
	char senha[50];
	char nome[150];
	int tipo;
} user; // em inglheiis purque noiz é FODA

void registroUser (){
	
	FILE *fp;
	user conta;
	
	printf("Cadastre-se\n");
	printf("\nSeu nome completo: ");
	fflush(stdin);
	gets(conta.nome);
	printf("\nSeu Login: ");
	fflush(stdin);
	gets(conta.login);
	printf("\nSua Senha: ");
	fflush(stdin);
	gets(conta.senha);
	conta.tipo = 0;	
	
	fp = fopen ("usuario.bin", "a+");
	fp = fwrite (&conta, sizeof(user), 1, fp);
	fclose(fp);
	
	printf("Voce registrou com sucesso uma conta de Jogador!");
}

void registroAdmin (){
	
	FILE *fp;
	user conta;
	
	printf("Cadastre-se\n");
	printf("\nSeu nome completo: ");
	fflush(stdin);
	gets(conta.nome);
	printf("\nSeu Login: ");
	fflush(stdin);
	gets(conta.login);
	printf("\nSua Senha: ");
	fflush(stdin);
	gets(conta.senha);
	conta.tipo = 1;
	
	fp = fopen ("usuario.bin", "a+");
	fp = fwrite (&conta, sizeof(user), 1, fp);
	fclose(fp);
	
	printf("Voce registrou com sucesso uma conta de Administrador!");
}

void menuPrincipal (){
	int a=0;
	FILE *fp;
	user conta;
	int flag;
	
	printf("SEJA BEM-VINDO JOGADOR\n");
	printf("\nOque deseja fazer?\n");
	printf("\n1 - Cadastrar Usuario\n");
	printf("2 - Fazer Login\n");
	printf("9 - Sair!\n");
	
	do{
		fflush(stdin);
		scanf("%d", &a);
	
		switch (a) {
			
			case (1):
				fp = fopen("usuarios.bin", "r");
				if (fp == NULL){
					flag = 0;}
				else{
					flag = 1; }
				 fclose(fp);
				if (flag == 0){
					registroAdmin(conta);}
				else{
					registroUser(conta); }
			
		    default: printf("Opção Invalida!!!");
		}
	}while(a!=9);
}

int main (){
	menuPrincipal();
}
