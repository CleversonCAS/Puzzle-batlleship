#include <iterator>
#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "funbp.h"
#include <vector>
#include <fstream>
using std::ofstream;
using std::cout;
using std::cin;
using std::vector;
using matrix = std::vector<vector<int>>;///////////////////////////////////////////////////////////////////////////////////////
#define TAM 18
//OBS: tá imprimindo a borda do tabuleiro para ter noção doq ta contesendo, dps tira
//OBS o barco grande tá sendo colocado lindamente em qualquer lugar , aparentemente sem erros,
//acredito q pros outros barcos seje só trocar trocar os numeros...etc etc;
//se digitado 15x15 dá um erro mas foda-se
//colocar limite de n e m
int main()
{	
	int i, j,k,l, board[TAM][TAM],board2[TAM][TAM]; // LINHA, COLUNA E A MATRIZ DO BOARD.
	int p,q;
	int n, m;
	int x,cord1,cord2;
	int num = 10;
	zeraBoard(board2, n, m);
	cin >> n >> m; 
	vector< matrix > lista2( num, matrix( TAM, vector<int>(TAM) ) );
	ofstream outFile;
	outFile.open("teste.txt");
	//zeraBoard(board, n , m);
	//std::vector< int** > Ve;	
	//zeraBoard(board, n, m);
		for ( i = 0; i < num; ++i)
		{
			
			while(1)
			{	
			int counter = 0;
			if(n >= 9 && m >= 9)
			{
				zeraBoard(board, n, m);
				battleship(board, n , m, counter);
				cruiser(board, n, m, counter);
				cruiser(board, n, m, counter);							
				destroyer(board, n, m, counter);							
				destroyer(board, n, m, counter);
				destroyer(board, n, m, counter);						
				submarinerandom(board, n, m, counter);
				submarinerandom(board, n, m, counter);
				submarinerandom(board, n, m, counter);
				submarinerandom(board, n, m, counter);
			}
			else
			{
				zeraBoard(board, n, m);
				battleship(board, n , m, counter);
				cruiser(board, n, m, counter);
				cruiser(board, n, m, counter);
				destroyer(board, n, m, counter);
				destroyer(board, n, m, counter);
				destroyer(board, n, m, counter);						
				submarine(board, n, m, counter);
				submarine(board, n, m, counter);
				submarine(board, n, m, counter);
				submarine(board, n, m, counter);
			}

				//std::cout << "Tem " << counter << " 1's \n";
				versaoFinal( board,  n,  m);//////////////////////////////////////////////////////////////////////////////////////////////////////////////
				if(counter == 20)
				{	
					for( j=0 ; j< num ; j++ )
    				{
					//std::cout << ">>> Matriz " << j << ":\n";
        				for ( k=0 ; k < n+1 ; k++ )
       				 	{
           					 for ( l=0 ; l <m+1; l++ )
           					 {
           			 			lista2[i][k][l] = board[k][l];
       						 }
       					}
    				}
    				//printboard(board, n, m);
    			}
					break;//	Ve.push_back(board);
				}
			}
			
			for( j=0 ; j< num ; j++ )
    				{
					outFile << ">>> Matriz " << j+1 << ":\n";
        				for ( k=1 ; k < n+1 ; k++ )
       				 	{
           					 for ( l=1 ; l < m+1; l++ )
           					 {
           			 			outFile<<lista2[j][k][l]<<' ';
       						 }
       						 outFile<<'\n';
       					}
       					
    				}
    	outFile.close();
    	contadorDeBarcos( board,  n,  m);
    	printboard( board,  n,  m);
    cout<<"Battleship Puzzle\nUtilize os comandos\nX (cord1) (cord2)\nSendo X o tipo de barco\n";
    cout<<"1 = *\n3 = <\n4 = >\n5 = ^\n6 = v\n7 = ~\n";
    printboard3( board2, board,  n,  m);
 	while(1)
 	{

 		printboard2( board2, board,  n,  m);//att pra colocar o n de barcos ao redor
 		cout<<"Digite o número e as cordenadas:\n";
 		cin>>x>>cord1>>cord2;
 		board2[cord1][cord2] = x;
 	}
 	//COMPARA BOARD 1 COM 2
	return 0;
}
/*
v[18];
for( k=1 ; k < n+1 ; k++ )
       if(board[i][j]==1)
       	v[k]++;
       	*/
