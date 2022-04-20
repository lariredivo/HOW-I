#include <iostream>  //library
#include <locale.h>
#include <stdlib.h>
#include <cmath>
#include <math.h>


using namespace std; //definir espaço de nomes

int main (){  //Função principal

ponto:
ponto1:
ponto2:

int valor;

    setlocale (LC_ALL, "Portuguese"); //Coloca o idioma em português

    cout << "Conversor" <<endl; //Digita na tela conversor
    cout << "Digite 1: Decimal para Binário" <<endl; //Digita a opção "Digite 1: Decimal para Binário"
    cout << "Digite 2: Binário para Decimal" <<endl; // Digita a opção "Digite 2: Binário para Decimal"
    cout << "Digite 3: Fechar programa" <<endl; // Digita a opção "Digite 3: Fechar programa"

      cin >> valor; //stream de entrada
    if (valor >=1 && valor <=3){ // verificar se usuario digitou valor diferente das opcoes anteriores
    do {

        int decimal;//declaração de variáveis
        short binario[8];
        int bina, resultado, resto = 0;
        int digito[8];

          system ("clear||cls"); //Limpa a tela anterior

        if (valor == 1){  //condicional "se", o valor inserido for 1

            cout << "Você escolheu a opção 1: Decimal para Binário" <<endl; //Digita o resultado da escolha anterior
            cout << "Digite o valor para conversão" <<endl; //Digita o valor para conversão

                cin >> decimal;

            for (int i = 0; i < 8; i++) //Vai percorrer todo vetor de 0 a 8
                {
                binario[i] = decimal % 2; //Vetor binario guardado o resto da divisao por 2
                decimal /= 2; //divisao sem resto
                }

            cout << "Resultado em binario:" << endl; // digita o resultado

            for (int i = 7; i >= 0; i--)//Vai percorrer todo vetor de 8 a 0
                            {
             cout << binario[i];// resultado da conversao de cada vetor
                }



          cout << "\n1:Refazer calculo"<< endl; //digita o menu de escolha
          cout << "2:Binario para decimal" << endl;
          cout << "3:Encerrar" << endl;

            cin >> valor; // digita opcao desejada
            if (valor > 3){
                    cout << "opcao invalida" << endl;
                    goto ponto1;

        }else{ //condicional "se não",

          if(valor == 2){ //condicional "se", o valor inserido for 2

                cout << "Você escolheu a opção 2: Binário para Decimal" <<endl; //Digita o resultado da escolha anterior
                cout << "Digite o valor para conversão" <<endl; //Digita o valor para conversão

                  cin>> bina; //stream de entrada do valor da variavel x

                    for (int i = 0; i < 8; i++)//Vai percorrer vetor de 0 a 8
                        {
                      digito [i] = bina % 10; //atribui o resto da divisão da variavel bina em digito de acordo com seu vetor
                      bina /=10; // Divisão sem resto
                        }

                    for (int i = 7; i >= 0; i--)//Vai percorrer vetor de 8 a 0
                        {
                      resultado = (resto * 2) + digito[i]; // Atribui o valor a variavel, do valor do resto até o valor do vetor adicionado anteriormente
                      resto= resultado; // resto é o resultado
                        }

                    cout << "Resultado em decimal:" << endl;
                    cout << resultado;// digita o resultado

                    cout << "\n1:Decimal para binario"<< endl; //digita o menu de escolha
                    cout << "2:Refazer calculo" << endl;
                    cout << "3:Encerrar" << endl;

                      cin >> valor; // digita opcao desejada
        if (valor > 3){
            cout << "opcao invalida" << endl;
                goto ponto2;
                        }

       }
                     }
                    }

        }while (valor!=3); // finaliza o loop caso a escolha seja 3
    cout << "Obrigado!" <<endl;
    }else{
        cout << "opcao invalida" << endl;
        goto ponto;
        }
return 0;
} //finalização do programa
