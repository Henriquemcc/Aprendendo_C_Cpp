#include <stdio.h>

int main()
{
	// Imprime o cabeçalho do nosso jogo
	printf("**************************************\n");
	printf("Bem vindo ao nosso jogo de adivinhação\n");
	printf("**************************************\n");

	int numeroSecreto = 42;

	int chute;

	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);
}