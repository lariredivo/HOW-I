/*Programa de conversão de base numérica (decimal para binário ou octal, binário para decimal ou octal e octal para binário ou decimal)*/
#include <iostream>  //library
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <math.h>



using namespace std; //definir espaço de nomes

int ConversorDeBases(int baseNumeralInicial, int numero, int baseNumeralFinal); //Declaração da função que faz a conversão

int main (){  // Declaração da função principal
setlocale(LC_ALL, "Portuguese"); // Para a correta acentuação das palavras em português BR

    //Declaração das variáveis
    int numero;
    int baseNumeralInicial, baseNumeralFinal;

    //Tela inicial do usuário
    printf("Calculadora de conversão de bases numericas \n");
    printf("O programa realiza as seguintes conversões: \n");
    printf("A) binário para decimal ou octal \n");
    printf("B) decimal para binário ou octal\n");
    printf("C) octal para binário ou decimal\n");
    printf("Digite o número que deseja converter e a sua base:");
    //Armazenamento do número e da base inicial digitada pelo usuário
    scanf("%d %d", &numero, &baseNumeralInicial);

    printf("\n Agora digite a base de conversão desejada (2, 8 ou 10): ");// Definir a base de conversão
    scanf("%d", &baseNumeralFinal);

    //Resultado da conversão
    printf("\n O resultado da conversão do número %d na base %d para a base %d é: %d \n", numero, baseNumeralInicial, baseNumeralFinal, ConversorDeBases(baseNumeralInicial,numero,baseNumeralFinal));

    return 0; //número inteiro

    system("PAUSE"); //Permite que o usuário veja o resultado final sem que o programa seja fechado
}

//  Declaração da função que irá fazer o cálculo
int ConversorDeBases(int baseNumeralInicial, int numero, int baseNumeralFinal) {
    int soma = 0;
    int quociente = numero;
    int restoDivisao = 0;
    int i = 0;

    while (quociente != 0) {
        restoDivisao = quociente%baseNumeralFinal;
        quociente = quociente / baseNumeralFinal;
        soma = (restoDivisao * (pow(baseNumeralInicial,i))) + soma;
        i++;
    }
    return soma;
}
