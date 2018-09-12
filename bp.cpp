#include <iterator>
#include <iostream>
#include <ctime> 
#include <cstdlib> 
using std::cout;
using std::cin;

/*void proibido(COLOCAR MATRIZ AQUI)
{
	for(i = 0; i < n; ++i)
	{
		for(j = 0; j < m; ++j)
		{
			if(M[i][j]==1)
			{
				Mi[i][j+1] = Mi[i][j+1]==1 ? 1 : 2;
				Mi[i][j-1] = Mi[i][j-1]==1 ? 1 : 2;
				Mi[i+1][j] = Mi[i+1][j]==1 ? 1 : 2;
				Mi[i-1][j] = Mi[i-1][j]==1 ? 1 : 2;
				Mi[i+1][j+1] = Mi[i+1][j+1]==1 ? 1 : 2;
				Mi[i-1][j-1] = Mi[i-1][j-1]==1 ? 1 : 2;
				Mi[i-1][j+1] = Mi[i-1][j+1]==1 ? 1 : 2;
				Mi[i+1][j-1] = Mi[i+1][j-1]==1 ? 1 : 2;
			}
		}
	}
}*/
int main()
{	

	srand(time(NULL));
	int i, j, board[15][15]; // LINHA, COLUNA E A MATRIZ DO BOARD.
	int p,q;
	int n, m;
	cin >> n >> m; // VALORES QUE O USUÁRIO VAI PASSAR (LINHA E COLUNA) DO BOARD.

	// PREENCHIMENTO DO TABULEIRO COM ZEROS / CRIAÇÃO DO TABULEIRO.
	for(i = 0; i < n; ++i)
	{
		for(j = 0; j < m; ++j)
		{
			board[i][j] = 0; 
		}
	}
	/*
	p = rand() % n ;
	q = rand() % m ;
	cout<<p<<q<<'\n';
	*/
	p=7;
	q=8;
	
	
	int hv;
	hv = rand() % 2; // HV DE 0 E 1. SE HV = 0::HORIZONTAL | SE HV = 1::VERTICAL.
	cout<<hv<<'\n';
	if(board[p][q] == 0)
	{
		if(hv == 0)
		{
			if(board[p][q+1] == 0 && board[p][q+2] == 0 && board[p][q+3] == 0)
			{
				board[p][q] = 1;
				board[p][q+1] = 1; 
				board[p][q+2] = 1;
				board[p][q+3] = 1;
			}
		}
		if(hv == 1)
		{
			if(board[p+1][q] == 0 && board[p+2][q] == 0 && board[p+3][q] == 0)
			{
				board[p][q] = 1;
				board[p+1][q] = 1; 
				board[p+2][q] = 1;
				board[p+3][q] = 1;
			}	
		}
	}
	//WHILE (N DER CERTO)
	//FAZER OS COISO, SE N DER CERTO , GERA OUTROS NUMEROS RANDOM


	for(i = 0; i < n; ++i)
	{
		for(j = 0; j < m; ++j)
		{
			if(board[i][j]==1)
			{
				board[i][j+1] = board[i][j+1]==1 ? 1 : 2;
				board[i][j-1] = board[i][j-1]==1 ? 1 : 2;
				board[i+1][j] = board[i+1][j]==1 ? 1 : 2;
				board[i-1][j] = board[i-1][j]==1 ? 1 : 2;
				board[i+1][j+1] = board[i+1][j+1]==1 ? 1 : 2;
				board[i-1][j-1] = board[i-1][j-1]==1 ? 1 : 2;
				board[i-1][j+1] = board[i-1][j+1]==1 ? 1 : 2;
				board[i+1][j-1] = board[i+1][j-1]==1 ? 1 : 2;
			}
		}
	}

	//print test
	for(i = 0; i < n; ++i)
	{
		for(j = 0; j < m; ++j)
		{
			cout<<board[i][j];
		}
		cout<<'\n';
	}
		
	

	return 0;
}