#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main(void) {

  // Imprime cabecalho do nosso jogo
  printf("*****************************************\n");
  printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
	printf("*****************************************\n");

	int numeroSecreto = 42;
	int chute;

	for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
		printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
		printf("Qual e o seu chute?\n");
		scanf("%d", &chute);

		int acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;
		int menor = chute < numeroSecreto;

		printf("Seu chute foi %d\n", chute);

		if (chute < 0 ) {
			printf("Voce nao pode chutar numeros negativos");
			i--;

			continue;
		}

		if (acertou) {
			printf("Voce acertou!\n");
			printf("Jogue de novo, voce e um bom jogador\n");

			break;
		}
		else if (maior) {
			printf("Seu chute foi maior que o numero secreto, tente novamente!\n");
		}
		else {
				printf("Seu chute foi menor que o numero secreto, tente novamente!\n");
		}

	}
	printf("Fim de Jogo.");
}