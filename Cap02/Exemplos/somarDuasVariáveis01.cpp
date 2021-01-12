/*
   Exemplo do livro, somar duas variáveis
   Autor: Pedro Filho, 12/01/2021
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

   // variáveis
   int numero1, numero2, soma = 0;

   // entrada de dados
   cout << "Digite o primeiro inteiro: ";
   cin >> numero1; // entrada do usuário

   cout<< "Segundo inteiro: ";
   cin >> numero2; // segunda entrado do usuário

   // somar as variáveis numero1 e numero2
   soma = numero1 + numero2;

   // mostrar resultado
   cout << "A soma de " <<
      numero1 << " + " << numero2 << " = " << soma << endl;

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
