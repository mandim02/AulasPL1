/**
 * @file main.c
 * @author André Mandim
 * @brief Este programa faz as quatro operaçoes basicas, a partir de dois numeros introduzidos pelo utilizador
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    printf("Introduza o primeiro numero:");
    scanf("%f", &num1);

    printf("Introduza o segundo numero:");
    scanf("%f", &num2);

    printf("A soma de %.2f com %.2f e %.2f\n",num1, num2, num1+num2);
    printf("A subtraçao de %.2f com %.2f e %.2f\n",num1, num2, num1-num2);
    printf("A multiplicacao de %.2f com %.2f e %.2f\n",num1, num2, num1*num2);
    /**
     * @brief na divisao nao está previsto o caso do segundo numero introduzido ser 0
     * 
     */

    printf("A divisao de %.2f com %.2f e %.2f",num1, num2, num1/num2);
    
    getchar();
    return 0;
}
