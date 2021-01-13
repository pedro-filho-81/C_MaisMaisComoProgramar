/*
   Questão: 2.3 Escreva uma única instrução C++ para realizar cada uma das
   seguintes tarefas (suponha que as declarações using não foram utilizadas):
   a) Declare as variáveis c, thisIsAVariable, q76354 e number como sendo do tipo String.
   b) Solicite que o usuário insira um inteiro. Termine sua mensagem de
   solicitação com dois-pontos (:) seguido por um espaço e deixe o  cursor
   posicionado depois do espaço.
   c) Leia um inteiro do usuário no teclado e armazene o valor inserido
   na variável do tipo inteiro age.
   d) Se a variável number não for igual a 7, imprima “The variable number is
   not equal to 7”.
   e) Imprima a mensagem “This is a C++ program” em uma linha.
   f) Imprima a mensagem “This is a C++ program” em duas linhas.
   Termine a primeira linha com C++.
   g) Imprima a mensagem “This is a C++ program” com cada palavra em uma
   linha separada.
   h) Imprima a mensagem “This is a C++ program” com cada palavra separada
   da palavra seguinte por uma tabulação.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 50). Edição do Kindle.
   Autor: Pedro Filho, 13/01/2021
*/

// biblioteca
#include <iostream>
#include <locale>

using namespace std;

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // a) declarando variáveis
   string c, estaEUmaVariavel, q76354, numero;
   int idade;


   // entrada de dados
   cout << "Digite um inteiro: ";
   cin >> idade;

   // se a idade não igual a 7 imprima
   if( idade != 7 )
      cout << "Este número de variável não é igual a 7.\n";

   // imprima em uma linha
   cout << "\nEste é um programa C++." << endl;

   // imprima em duas linhas
   cout << "\nEste é um \nprograma C++." << endl;

   // imprima cada palavra em uma linha
   cout << "\nEste\n é\n um\n programa\n C++" << endl;

   // imprima cada palavre separada por tabulação
   cout << "\tEste\té\tum\tprograma\tC++." << endl;


   // pular uma linha
   cout << endl;

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
