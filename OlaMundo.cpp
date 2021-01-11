/*
* Primeiro programa em C++
   Autor: Pedro Filho, 11/01/2021.
*/
// biblioteca
#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
   // configura para Português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // imprime
   cout<< "Olá, Mundo C++!" <<  endl;

   // pausa o sistema
   system( "pause" );

   // fim do programa
   return 0;

} // fim main
