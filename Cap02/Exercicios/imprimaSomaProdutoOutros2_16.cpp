/*
   Quest�o:
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

   // Vari�veis
   int n1;
   int n2;
   int soma;
   int diminui;
   int produto;
   int diferenca;
   int quociente;

    // Entrada de dados
    cout << "Digite um inteiro: ";
    cin >> (n1);
    cout << "Digite outro inteiro: ";
    cin >> n2 ;

    // calculando
    soma = n1 + n2;
    diminui = n1 - n2;
    produto = n1 * n2;
    quociente = n1 / n2;
    diferenca = n1 % n2;

    // Mostra na tela
    cout << "\nSoma = " << soma << endl;
    cout << "diminuir = " << diminui << endl;
    cout << "Produto = " << produto << endl;
    cout << "Quociente = " << quociente << endl;
    cout << "Diferenca = "<< diferenca << endl;

    // se n�mero1 maior que n2
    if ( n1 > n2 ){
      // imprima
      cout<< n1 << " � maior.\n" << n2 << " � o menor" << endl;
    } // fim if

     // se n2 maior que n1
    if ( n2 > n1 ){
        // imprima
        cout << n2 << " � o maior.\n" << n1 << " � o menor." << endl;
    } // fim if

   // pular uma linha
   cout << endl;

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
