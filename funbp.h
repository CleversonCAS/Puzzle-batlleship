#ifndef FUNPB_H
#define	FUNPB_H
void printboard(int board[18][18], int n, int m);//imprime o puzzle na tela
void zeraBoard(int board[18][18], int n, int m);//Zera o tabuleiro
void aondeehproibido(int mat[18][18],int n, int m);//atualiza o tabuleiro colocando o '2' para indicar que os barcos não tentem encaixar naquela posição
void battleship(int mat[18][18],int n, int m, int &counter);//FUNÇÕES PARA COLOCAR OS BARCOS NA MATRIZ
void cruiser(int board[18][18],int n, int m, int &counter);//
void destroyer(int board[18][18], int n, int m, int &counter);//
void submarine(int board[18][18], int n, int m, int &counter);//Coloca o submarino no primeiro espaçõ encontrado(para puzzles menores que 9)
void submarinerandom(int board[18][18], int n, int m, int &counter);//coloca o submarino aleatoriamente
//
void versaoFinal(int board[18][18], int n, int m);//Atualiza o puzzle para os números apresentados no tutorial
void printboard2(int board[18][18],int board2[18][18], int n, int m);///imprime o jogo da pessoa a cada interação
void printboard3(int board[18][18], int n, int m);//imprime o jogo correto para o jogador
void igualarmatrizes(int board1[18][18],int board2[18][18], int n, int m);//copia de 2 para 1
void contadorDeBarcos(int board[18][18], int n, int m);//conta os barcos para colocar o numeros nas laterais
int compara(int board1[18][18],int board2[18][18], int n, int m);//compara o puzzle formado com o original para saber se o jogador estava correto;
#endif
