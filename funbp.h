#ifndef FUNPB_H
#define	FUNPB_H
void printboard(int board[18][18], int n, int m);
void zeraBoard(int board[18][18], int n, int m);
void aondeehproibido(int mat[18][18],int n, int m);
void battleship(int mat[18][18],int n, int m, int &counter);//1
void cruiser(int board[18][18],int n, int m, int &counter);//2
void destroyer(int board[18][18], int n, int m, int &counter);//3
void submarine(int board[18][18], int n, int m, int &counter);//4
void submarinerandom(int board[18][18], int n, int m, int &counter);
void versaoFinal(int board[18][18], int n, int m);
void printboard2(int board[18][18],int board2[18][18], int n, int m);///imprime o joguinho da pessoa
void igualarmatrizes(int board1[18][18],int board2[18][18], int n, int m);//copia de 2 para 1
void contadorDeBarcos(int board[18][18], int n, int m);

#endif
