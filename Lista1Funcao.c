#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Exercicio3


#ifdef Exercicio1

//*Crie a fun��o Esfera que receba da fun��o main o valor do raio
//Calcule o volume da esfera o seu volume (v = 4/3*Pi*R3).
//Crie tamb�m uma fun��o para garantir que o raio deve ser maior que zero.
//Exiba o resultado obtido no interior da fun��o main.*//

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
     printf("O resultado do c�lculo � de: %.2f \n", volume_esfera);

     return 0;
}


#endif // Exercicio1




#ifdef Exercicio2

//* 2.	Crie a fun��o verifica para verificar e exibir no seu interior
// se o n�mero � positivo, negativo ou zero.
// O n�mero dever� ser do tipo inteiro e  dever� ser recebido  no interior  fun��o main.*//

int number;

Verifica ()
{
    if (number >0)
        printf("O n�mero digitado � positivo");
    else
        if (number <0)
            printf("O n�mero digitado � negativo");
    else
        printf("O n�mero digitado � zero");
}

int main ()
{
    setlocale(LC_ALL,"");
    printf("Digite um n�mero de valor inteiro\n");
    scanf("%d",&number);
    Verifica();
    return 0;
}
#endif // Exercicio2



#ifdef Exercicio3

//*3. Crie a fun��o Divis�o que receba da fun��o main dois n�meros diferentes de zero
// que possibilitem o c�lculo da divis�o do primeiro pelo segundo.
// Crie uma fun��o para garantir que os n�meros devem ser diferentes de zero.
//Exiba na fun��o main os n�meros e o resultado obtido na fun��o Divis�o.*//

    int num1, num2, auxiliar, resposta;

Positivo()
{
 do
     {
          scanf ("%d",&auxiliar);
          if (auxiliar <= 0)
            printf("N�mero inv�lido, digite outro n�mero maior que zero \n");
     } while (auxiliar <= 0);
}

Divisao()
{
    resposta = num1/num2;
}

int main ()
{

    setlocale(LC_ALL,"");
    printf("Digite o valor do primeiro n�mero \n");
    Positivo();
    num1 = auxiliar;

    printf("Digite o valor do segundo n�mero \n");
    Positivo();
    num2 = auxiliar;

    printf("O primeiro n�mero digitado foi: %d\n", num1);
    printf("O segundo n�mero digitado foi: %d\n", num2);

    Divisao();
    printf("O resultado da divis�o entre os dois n�meros �: %d\n", resposta);

    system ("pause");
    return 0;
}

#endif // Exercicio3
