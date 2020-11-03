/**
 * @file aula.c
 * @author Andre mandim
 * @brief 
 * @version 0.1
 * @date 2020-10-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
//declaraçao de funcoes(assinatura ou prototipos)
int soma(int x, int y);
//tipoRetorno nomeFuncao(parametros){
#pragma region h1
int main()
{
    /*Declarar variaveis e iniciam */
    int x, y, soma1;

    //obter valores
    x=10;
    y=15;
    //calculo
    soma1 = x + y;
    //apresentar ou devolver o resultado
    printf("a soma de %d com %d = %d",x ,y , soma1);



#pragma endregion

#pragma region h2


    /*Declarar variaveis e iniciam */
    int a,b;
    int soma2;
    //obter valores
    printf("valor1:");
    scanf("%d",&a);
    printf("valor2:");
    scanf("%d",&b);
    //calculo
    soma2 = soma(a,b);
    //apresentar ou devolver o resultado
    printf("a soma de %d com %d = %d", a,b,soma2);

}

int soma(int x, int y){

    return x+y;
}
#pragma endregion