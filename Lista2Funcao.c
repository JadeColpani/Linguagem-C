#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define Exercicio3

#ifdef Exercicio1

//*1. Crie uma função chamada Notas para garantir o recebimento de cada uma das notas//
//As notas deverão ser maiores ou iguais a zero e menores ou iguais a dez//
//Receba quatro valores referente às notas escolares de um aluno//
//Crie uma função média para calcular a média aritmética do aluno//
//Exiba a média e se o aluno foi aprovado ou não no interior da função main//
//Ele será aprovado se a média for maior ou igual a 6.0 Caso contrário, reprovado*//

int nota1, nota2, nota3, nota4, auxiliar;
int aritmetica = 0;

notas()

{
        do
     {
          scanf ("%d",&auxiliar);
          if (auxiliar < 0 || auxiliar > 10)
            printf("Número inválido, digite outro valor \n");
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
     printf("A média aritmética do aluno foi %d\n", aritmetica);

     if (aritmetica <6)
        printf("O estudante foi reprovado");
    else
        printf("O estudante foi aprovado");
}


#endif // Exercicio1


#ifdef Exercicio2

//*2. Crie uma função que garanta o recebimento de números maiores que zero e menores ou iguais a 10. //
//Receba dois números utilizando está função e o terceiro número deverá ser a soma dos dois anteriores. //
//Crie a função produto para calcular o produto destes três números.//
//No interior da função main verifique se o produto obtido for menor que 500, solicite novos dados.*//

float a, b, c, resultado, auxreal;

numero()
{
     do
     {
          scanf ("%f",&auxreal);
          if (auxreal <= 0 || auxreal > 10)
            printf("Número inválido, digite um outro valor \n");
     } while (auxreal <= 0 || auxreal > 10);
}

produto()
{
    resultado = a*b*c;
}

main ()
{
    setlocale(LC_ALL,"");
     printf("Digite o primeiro número\n");
     numero();
     a=auxreal;

     printf("Digite o segundo número\n");
     numero();
     b=auxreal;

     c=a+b;

     produto();
     printf("O produto de %.2f * %.2f * %.2f é %.2f \n", a, b, c, resultado);

}

#endif // Exercicio2

#ifdef Exercicio3

//*3. Crie uma função que garanta que cada lado deve ser maior que zero.
//Receba três números que representam os lados de um triângulo.
//Garanta no interior da função main a existência de um triângulo.
//Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.
//Observações:
//a)Garantir que cada lado é menor que a soma dos outros dois lados.
//b)O triângulo é equilátero quando todos os lados são iguais.
//c)O triângulo é isóscele quando apenas dois lados são iguais.
//d)O triângulo é escaleno quando todos os lados são diferentes.*//

int lado1, lado2, lado3, teste;

verificalados()
{
     do
     {
          scanf ("%d",&teste);
          if (teste <= 0)
            printf("Número inválido, informe um número maior que zero \n");
     } while (teste <= 0);
}

tipo_triangulo()
{
    if (lado1 == lado2 || lado2 == lado3)
    {
       printf("Todos os lados são iguais, portanto, o triângulo é equilátero\n");
    }
    else
       if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
       {
           printf("Dois lados são iguais, portanto, o triângulo é isósceles\n");
       }
    else
        if (lado1 != lado2 != lado3)
        {
           printf("Todos os lados são diferentes, portanto, o triângulo é escaleno\n");
        }
}

main()
{
     setlocale(LC_ALL,"");
     printf("Digite o primeiro lado do triângulo\n");
     verificalados();
     lado1=teste;

     printf("Digite o segundo lado do triângulo\n");
     verificalados();
     lado2=teste;

     printf("Digite o terceiro lado do triângulo\n");
     verificalados();
     lado3=teste;

     if ((lado1 < lado2 + lado3)&&(lado2 < lado1 + lado3)&&(lado3 < lado1 + lado2))
     {
          printf("O comprimento dos lados garante a existência de um triângulo\n");
          tipo_triangulo();
     }
     else
        printf("Os lados não formam um triângulo\n");
}


#endif // Exercicio3

#ifdef Exercicio4

//*4. Crie uma função que garanta que os dois números são negativos e receba dois números utilizando esta função.
//Crie a função Verifcamultiplos e verifique se estes dois números são múltiplos ou não.
//Exiba se são múltiplos ou não no interior da função VerificaMultiplos.
//Pesquise na internet o que são múltiplos.
//Um número n1 é múltiplo de outro número n2 se o resto da divisão inteira n1 / n2 é igual a zero.//
//Em C utiliza-se o operador % para calcular o resto da divisão inteira, logo basta verificar se n1 % n2 é igual a zero para verificar se o n1 é múltiplo de n2.//

int num1, num2, multiplos;

negativos()
{
       do
        {
          printf("Digite o primeiro número negativo\n");
          scanf ("%d",&num1);
          if (num1  >=0)
          printf("Número inválido, digite um número menor que zero \n");
        } while (num1  >=0);

          do
        {
          printf("Digite o segundo número negativo\n");
          scanf ("%d",&num2);
          if (num2  >=0)
          printf("Número inválido, digite um número menor que zero \n");
        } while (num2  >=0);
}

verifmultiplos()
{
multiplos = num1%num2;

printf("O resultado da divisão entre o primeiro e o segundo número é %d\n", num1/num2);
printf("O resto da divisão entre eles é %d, portanto,\n", multiplos);

     {
          if (multiplos == 0)
            printf("O número 1 é múltiplo do número 2 \n");
            else
                printf("O número 1 não é múltiplo do número 2");

     }

}

main ()
{
    setlocale(LC_ALL,"");
    printf("Um número será múltiplo de outro quando o resto de sua divisão é igual a 0\n");
    printf("Realize o teste: \n");
    negativos();
    verifmultiplos();

    return 0;
    system ("pause");

}

#endif // Exercicio3
