/*
   Exemplo do livro, somar duas vari�veis
   Autor: Pedro Filho, 12/01/2021
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

   // vari�veis
   int numero1, numero2, soma = 0;

   // entrada de dados
   cout << "Digite o primeiro inteiro: ";
   cin >> numero1; // entrada do usu�rio

   cout<< "Segundo inteiro: ";
   cin >> numero2; // segunda entrado do usu�rio

   // somar as vari�veis numero1 e numero2
   soma = numero1 + numero2;

   // mostrar resultado
   cout << "A soma de " <<
      numero1 << " + " << numero2 << " = " << soma << endl;

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
