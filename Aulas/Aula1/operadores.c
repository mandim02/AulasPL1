/**
 * @file operadores.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-10-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int y;


    x=7;
    y= x*2;

    x=y++; //x=14; y =15
    x=++y; //x=16; y= 16

    x+=1; //x=17
    x-=y; // x= x- y =1

    printf("%d\n", x>y); //falso ou zero?
    printf("X=%d, X= %d", x++, --x); // ?



    return 0;
}
