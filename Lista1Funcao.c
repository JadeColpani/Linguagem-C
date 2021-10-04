#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Exercicio3


#ifdef Exercicio1

//*Crie a função Esfera que receba da função main o valor do raio
//Calcule o volume da esfera o seu volume (v = 4/3*Pi*R3).
//Crie também uma função para garantir que o raio deve ser maior que zero.
//Exiba o resultado obtido no interior da função main.*//

float volume_esfera;
float valor_raio;
float PI;

Esfera()
{
    PI = 3.14;
    volume_esfera = (4.0*PI*valor_raio*valor_raio*valor_raio)/3.0;
}

ValorPositivo()
{
    while (valor_raio <= 0) {
        printf("Digite um novo valor maior que zero para o raio \n");
        scanf("%f",&valor_raio);
        return 0;
    }
}

int main()

{
     setlocale (LC_ALL,"");
     printf("Digite um valor de raio positivo: \n");
     scanf("%f",&valor_raio);
     ValorPositivo();
     Esfera();
     printf("O resultado do cálculo é de: %.2f \n", volume_esfera);

     return 0;
}


#endif // Exercicio1




#ifdef Exercicio2

//* 2.	Crie a função verifica para verificar e exibir no seu interior
// se o número é positivo, negativo ou zero.
// O número deverá ser do tipo inteiro e  deverá ser recebido  no interior  função main.*//

int number;

Verifica ()
{
    if (number >0)
        printf("O número digitado é positivo");
    else
        if (number <0)
            printf("O número digitado é negativo");
    else
        printf("O número digitado é zero");
}

int main ()
{
    setlocale(LC_ALL,"");
    printf("Digite um número de valor inteiro\n");
    scanf("%d",&number);
    Verifica();
    return 0;
}
#endif // Exercicio2



#ifdef Exercicio3

//*3. Crie a função Divisão que receba da função main dois números diferentes de zero
// que possibilitem o cálculo da divisão do primeiro pelo segundo.
// Crie uma função para garantir que os números devem ser diferentes de zero.
//Exiba na função main os números e o resultado obtido na função Divisão.*//

    int num1, num2, auxiliar, resposta;

Positivo()
{
 do
     {
          scanf ("%d",&auxiliar);
          if (auxiliar <= 0)
            printf("Número inválido, digite outro número maior que zero \n");
     } while (auxiliar <= 0);
}

Divisao()
{
    resposta = num1/num2;
}

int main ()
{

    setlocale(LC_ALL,"");
    printf("Digite o valor do primeiro número \n");
    Positivo();
    num1 = auxiliar;

    printf("Digite o valor do segundo número \n");
    Positivo();
    num2 = auxiliar;

    printf("O primeiro número digitado foi: %d\n", num1);
    printf("O segundo número digitado foi: %d\n", num2);

    Divisao();
    printf("O resultado da divisão entre os dois números é: %d\n", resposta);

    system ("pause");
    return 0;
}

#endif // Exercicio3
