/*
* Primeiro programa em C++
   Autor: Pedro Filho, 11/01/2021.
*/
// biblioteca
#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
   // configura para Portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // imprime
   cout<< "Ol�, Mundo C++!" <<  endl;

   // pausa o sistema
   system( "pause" );

   // fim do programa
   return 0;

} // fim main
