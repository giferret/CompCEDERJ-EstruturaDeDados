#include <stdio.h>
#include <stdlib.h>
void main() {
    /*Python tem um tratamento diferente para suas variaveis.
    Elas s�o objetos imut�veis que se referenciam a um determinado espa�o da mem�ria.
    Quando eu fa�o x = x + 1 em python, eu estou referenciando x a um novo
    espa�o de mem�ria com o valor de x + 1.
    Por exemplo, x = 42 (x aponta para um espa�o de mem�ria com valor = 42).
    Quando  eu fa�o x = x + 1, eu crio um novo espa�o de mem�ria e este passa a ter o valor 43.
    O espa�o de mem�ria com o valor 42 perde a refer�ncia ent�o que ele tinha de x que passa a apontar outro
    espa�o de mem�ria.

    Sendo assim, torna-se imposs�vel trabalhar com ponteiros como usado na aula 11A.
    Por esse motivo preferi usar C para escrever o c�digo da aula por se tratar de uma
    linguagem que eu conhe�o e sei utilizar ponteiros.

    PARA ENTENDER O C�DIGO:
    *p em C � semelhante ao p^ em pascal
    &x em C � semelhante ao @x em pascal*/

    int i, x;
    int *p;
    p = &i; // Para que se possa atribuir um valor a *p � preciso declarar uma vari�vel e apontar o p para este endere�o

    x = 19;
    *p = 34;
    //x = *p;
    printf("X = %d\n", x);

    printf("\n==================================\n\n");

    x = 19;
    p = &x;
    printf("Valor referenciado por P = %d\n", *p);
    printf("Endereco apontado por P = %d\n", p);
    printf("Endereco de X = %d\n", &x);


}
