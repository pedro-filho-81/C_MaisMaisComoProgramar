/*
   Quest�o: 2.3 Escreva uma �nica instru��o C++ para realizar cada uma das
   seguintes tarefas (suponha que as declara��es using n�o foram utilizadas):
   a) Declare as vari�veis c, thisIsAVariable, q76354 e number como sendo do tipo String.
   b) Solicite que o usu�rio insira um inteiro. Termine sua mensagem de
   solicita��o com dois-pontos (:) seguido por um espa�o e deixe o  cursor
   posicionado depois do espa�o.
   c) Leia um inteiro do usu�rio no teclado e armazene o valor inserido
   na vari�vel do tipo inteiro age.
   d) Se a vari�vel number n�o for igual a 7, imprima �The variable number is
   not equal to 7�.
   e) Imprima a mensagem �This is a C++ program� em uma linha.
   f) Imprima a mensagem �This is a C++ program� em duas linhas.
   Termine a primeira linha com C++.
   g) Imprima a mensagem �This is a C++ program� com cada palavra em uma
   linha separada.
   h) Imprima a mensagem �This is a C++ program� com cada palavra separada
   da palavra seguinte por uma tabula��o.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 50). Edi��o do Kindle.
   Autor: Pedro Filho, 13/01/2021
*/

// biblioteca
#include <iostream>
#include <locale>

using namespace std;

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // a) declarando vari�veis
   string c, estaEUmaVariavel, q76354, numero;
   int idade;


   // entrada de dados
   cout << "Digite um inteiro: ";
   cin >> idade;

   // se a idade n�o igual a 7 imprima
   if( idade != 7 )
      cout << "Este n�mero de vari�vel n�o � igual a 7.\n";

   // imprima em uma linha
   cout << "\nEste � um programa C++." << endl;

   // imprima em duas linhas
   cout << "\nEste � um \nprograma C++." << endl;

   // imprima cada palavra em uma linha
   cout << "\nEste\n �\n um\n programa\n C++" << endl;

   // imprima cada palavre separada por tabula��o
   cout << "\tEste\t�\tum\tprograma\tC++." << endl;


   // pular uma linha
   cout << endl;

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
