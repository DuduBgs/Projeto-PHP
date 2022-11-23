#include <stdio.h>
#include <stdlib.h>

void resultado(char a, char b, char c, char d, char e, char f, char g, char h, char i, int x){
	if( a == b == c == 'X' || d == e == f == 'X' || g == h == i == 'X' || a == d == g == 'X' || b == e == h == 'X' || c == f == i == 'X' || a == e == i == 'X' || c == e == g == 'X'){
		printf("Jogador X ganhou a partida");
	}else if(a == b == c == 'O' || d == e == f == 'O' || g == h == i == 'O' || a == d == g == 'O' || b == e == h == 'O' || c == f == i == 'O' || a == e == i == 'O' || c == e == g == 'O'){
		printf("Jogador O ganhou a partida");
	}else if(x == 9){
		printf("A partida empatou");
	}else{
		printf("A partida foi finalizada mais cedo por um erro na jogada");
	}
}

int main(){
	
	char tabuleiro[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
	int i = 0;
	char simbolo;
	int cordenadaX, cordenadaY;
	
	for(i = 0; i < 9; i++){
		printf("\n%c | %c | %c\n----------\n%c | %c | %c\n----------\n%c | %c | %c\n\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2], tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
		
		printf("Qual o seu simbolo(X ou O) e qual a posição da sua jogada(cordenada no tabuleiro usando X e Y):\n\n");
		scanf("%c %d %d", &simbolo, &cordenadaX, &cordenadaY);
		
		if(tabuleiro[cordenadaX-1][cordenadaY-1] == '*'){
			tabuleiro[cordenadaX-1][cordenadaY-1] = simbolo;
		}else{
			printf("Erro: local já ocupado");
			
			break;
		}
	}
	
	resultado(tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2], tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2], i);
	
	return 0;
}
