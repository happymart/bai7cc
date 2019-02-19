/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on February 19, 2019, 10:15 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int r ;
    printf("Nhập bán kính đường tròn r : "); scanf("%d", &r);
     
    printf("\n Chu vi hình tròn có bán kính =%d",3.141592*2*r);
    printf("\n Diện tích hình  tròn có bán kính =%d \n",3.141592*r*r);
    
    return (EXIT_SUCCESS);
}

