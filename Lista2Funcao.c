#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define Exercicio3

#ifdef Exercicio1

//*1. Crie uma fun��o chamada Notas para garantir o recebimento de cada uma das notas//
//As notas dever�o ser maiores ou iguais a zero e menores ou iguais a dez//
//Receba quatro valores referente �s notas escolares de um aluno//
//Crie uma fun��o m�dia para calcular a m�dia aritm�tica do aluno//
//Exiba a m�dia e se o aluno foi aprovado ou n�o no interior da fun��o main//
//Ele ser� aprovado se a m�dia for maior ou igual a 6.0 Caso contr�rio, reprovado*//

int nota1, nota2, nota3, nota4, auxiliar;
int aritmetica = 0;

notas()

{
        do
     {
          scanf ("%d",&auxiliar);
          if (auxiliar < 0 || auxiliar > 10)
            printf("N�mero inv�lido, digite outro valor \n");
     } while (auxiliar < 0 || auxiliar > 10);

}

media()
{
   aritmetica = (nota1+nota2+nota3+nota4)/4;
}

main()
{

     setlocale(LC_ALL,"");
     printf("Digite a primeira nota\n");
     notas();
     nota1=auxiliar;

     printf("Digite a segunda nota\n");
     notas();
     nota2=auxiliar;

     printf("Digite a terceira nota\n");
     notas();
     nota3=auxiliar;

     printf("Digite a quarta nota\n");
     notas();
     nota4=auxiliar;

     printf("As notas do aluno foram %d, %d, %d e %d\n", nota1, nota2, nota3, nota4);
     media();
     printf("A m�dia aritm�tica do aluno foi %d\n", aritmetica);

     if (aritmetica <6)
        printf("O estudante foi reprovado");
    else
        printf("O estudante foi aprovado");
}


#endif // Exercicio1


#ifdef Exercicio2

//*2. Crie uma fun��o que garanta o recebimento de n�meros maiores que zero e menores ou iguais a 10. //
//Receba dois n�meros utilizando est� fun��o e o terceiro n�mero dever� ser a soma dos dois anteriores. //
//Crie a fun��o produto para calcular o produto destes tr�s n�meros.//
//No interior da fun��o main verifique se o produto obtido for menor que 500, solicite novos dados.*//

float a, b, c, resultado, auxreal;

numero()
{
     do
     {
          scanf ("%f",&auxreal);
          if (auxreal <= 0 || auxreal > 10)
            printf("N�mero inv�lido, digite um outro valor \n");
     } while (auxreal <= 0 || auxreal > 10);
}

produto()
{
    resultado = a*b*c;
}

main ()
{
    setlocale(LC_ALL,"");
     printf("Digite o primeiro n�mero\n");
     numero();
     a=auxreal;

     printf("Digite o segundo n�mero\n");
     numero();
     b=auxreal;

     c=a+b;

     produto();
     printf("O produto de %.2f * %.2f * %.2f � %.2f \n", a, b, c, resultado);

}

#endif // Exercicio2

#ifdef Exercicio3

//*3. Crie uma fun��o que garanta que cada lado deve ser maior que zero.
//Receba tr�s n�meros que representam os lados de um tri�ngulo.
//Garanta no interior da fun��o main a exist�ncia de um tri�ngulo.
//Informe ao usu�rio se o tri�ngulo � is�scele, equil�tero ou escaleno.
//Observa��es:
//a)Garantir que cada lado � menor que a soma dos outros dois lados.
//b)O tri�ngulo � equil�tero quando todos os lados s�o iguais.
//c)O tri�ngulo � is�scele quando apenas dois lados s�o iguais.
//d)O tri�ngulo � escaleno quando todos os lados s�o diferentes.*//

int lado1, lado2, lado3, teste;

verificalados()
{
     do
     {
          scanf ("%d",&teste);
          if (teste <= 0)
            printf("N�mero inv�lido, informe um n�mero maior que zero \n");
     } while (teste <= 0);
}

tipo_triangulo()
{
    if (lado1 == lado2 || lado2 == lado3)
    {
       printf("Todos os lados s�o iguais, portanto, o tri�ngulo � equil�tero\n");
    }
    else
       if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
       {
           printf("Dois lados s�o iguais, portanto, o tri�ngulo � is�sceles\n");
       }
    else
        if (lado1 != lado2 != lado3)
        {
           printf("Todos os lados s�o diferentes, portanto, o tri�ngulo � escaleno\n");
        }
}

main()
{
     setlocale(LC_ALL,"");
     printf("Digite o primeiro lado do tri�ngulo\n");
     verificalados();
     lado1=teste;

     printf("Digite o segundo lado do tri�ngulo\n");
     verificalados();
     lado2=teste;

     printf("Digite o terceiro lado do tri�ngulo\n");
     verificalados();
     lado3=teste;

     if ((lado1 < lado2 + lado3)&&(lado2 < lado1 + lado3)&&(lado3 < lado1 + lado2))
     {
          printf("O comprimento dos lados garante a exist�ncia de um tri�ngulo\n");
          tipo_triangulo();
     }
     else
        printf("Os lados n�o formam um tri�ngulo\n");
}


#endif // Exercicio3

#ifdef Exercicio4

//*4. Crie uma fun��o que garanta que os dois n�meros s�o negativos e receba dois n�meros utilizando esta fun��o.
//Crie a fun��o Verifcamultiplos e verifique se estes dois n�meros s�o m�ltiplos ou n�o.
//Exiba se s�o m�ltiplos ou n�o no interior da fun��o VerificaMultiplos.
//Pesquise na internet o que s�o m�ltiplos.
//Um n�mero n1 � m�ltiplo de outro n�mero n2 se o resto da divis�o inteira n1 / n2 � igual a zero.//
//Em C utiliza-se o operador % para calcular o resto da divis�o inteira, logo basta verificar se n1 % n2 � igual a zero para verificar se o n1 � m�ltiplo de n2.//

int num1, num2, multiplos;

negativos()
{
       do
        {
          printf("Digite o primeiro n�mero negativo\n");
          scanf ("%d",&num1);
          if (num1  >=0)
          printf("N�mero inv�lido, digite um n�mero menor que zero \n");
        } while (num1  >=0);

          do
        {
          printf("Digite o segundo n�mero negativo\n");
          scanf ("%d",&num2);
          if (num2  >=0)
          printf("N�mero inv�lido, digite um n�mero menor que zero \n");
        } while (num2  >=0);
}

verifmultiplos()
{
multiplos = num1%num2;

printf("O resultado da divis�o entre o primeiro e o segundo n�mero � %d\n", num1/num2);
printf("O resto da divis�o entre eles � %d, portanto,\n", multiplos);

     {
          if (multiplos == 0)
            printf("O n�mero 1 � m�ltiplo do n�mero 2 \n");
            else
                printf("O n�mero 1 n�o � m�ltiplo do n�mero 2");

     }

}

main ()
{
    setlocale(LC_ALL,"");
    printf("Um n�mero ser� m�ltiplo de outro quando o resto de sua divis�o � igual a 0\n");
    printf("Realize o teste: \n");
    negativos();
    verifmultiplos();

    return 0;
    system ("pause");

}

#endif // Exercicio3
