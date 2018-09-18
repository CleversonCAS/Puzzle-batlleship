#include <iterator>
#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "funbp.h"
#include <vector>
#include <fstream>
#include <iomanip>
using std::ofstream;
using std::cout;
using std::cin;
using std::vector;
using matrix = std::vector<vector<int>>;
#define TAM 18
//
int main()
{	
	int i, j,k,l, board[TAM][TAM],board2[TAM][TAM]; 
	int p,q;
	int n, m;
	int x,cord1,cord2;//O que o jogador irá digitar em cada interação
	int num = 100;
	zeraBoard(board2, n, m);//zera o board do jogador
	cout<<"Battleship Puzzle\nDigite o tamanho do board(Minimo 8x8  -  Máximo 15x15)\nPS:Apenas puzzles quadrados\n";
	cin >> n >> m; 
	cout<<"\nUtilize os comandos\nX (cord1) (cord2)\nSendo X o tipo de barco (ex: 3 4 5 ('<'' na posição 4x5)\n";
	cout<<"\n1 = *\n3 = <\n4 = >\n5 = ^\n6 = v\n7 = ~\n";
	
	vector< matrix > lista2( num, matrix( TAM, vector<int>(TAM) ) );//cria um Vector com capcidade de 100 matrizes e os coloca num arquivo
	ofstream outFile;
	outFile.open("teste.txt");
	
		for ( i = 0; i < num; ++i)//Produz 100 puzzles
		{
			
			while(1)//Continuará rodando Até encontrar um pozzle que siga as regras
			{	
			int counter = 0;//contador garante que o puzzle terá 20 barcos
			if(n <= 9 && m <= 9)
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
				versaoFinal( board,  n,  m);//Atualizando o puzzle para os numeros descritos no tutorial
				if(counter == 20)
				{	
					for( j=0 ; j< num ; j++ )
    				{
        				for ( k=0 ; k < n+1 ; k++ )
       				 	{
           					 for ( l=0 ; l <m+1; l++ )
           					 {
           			 			lista2[i][k][l] = board[k][l];//Iguala o Vector[i] para o puzzle atual
       						 }
       					}
    				}
    				
    			}
					break;
				}
			}
			
			for( j=0 ; j< num ; j++ )
    				{
					outFile << ">>> Matriz " << j+1 << ":\n";
        				for ( k=1 ; k < n+1 ; k++ )
       				 	{
           					 for ( l=1 ; l < m+1; l++ )
           					 {
           			 			outFile<<lista2[j][k][l]<<' ';//Imprime os puzzles no arquivo
       						 }
       						 outFile<<'\n';
       					}
       					
    				}
    	outFile.close();
    	contadorDeBarcos( board,  n,  m);//conta os barcos para colocar o numeros nas laterais 
    
    //printboard3(board,n,m);PARA IMPRIMIR O GABARITO DO PUZZLE ANTES
 	for(auto p(0) ; p<=(m*n) ; p++ )
 	{

 		printboard2( board2, board,  n,  m);
 		cout<<"Digite o número e as cordenadas:\n";
 		cin>>x>>cord1>>cord2;
 		board2[cord1][cord2] = x;
 	}
 	if(compara( board2, board,  n,  m))
 	{
 		cout<<"Yee.....Você acertou\n";
 	}
 		else 
 		{	cout<<"Você errou, esse seria o correto:\n";
 			printboard3(board,n,m);
 		}
	return 0;
}

