//
//  Math_Library_Intro.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/6/25.
//

#include <stdio.h>
#include <math.h>

int main() {
    
    float result,value;
    printf("Input a float value: ");
    scanf("%f",&value);
    result=sqrt(value);
    printf("The square root of %.2f is %.2f\n",value,result);
    result=pow(value,3);
    printf("%.2f to the 3rd power is %.2f\n ",value,result);
    result=floor(value);
    printf("The floor of %.2f is %.2f\n",value,result);
    result=ceil(value);
    printf("And the cieling of %.2f is %.2f\n",value,result);
    return 0;
}

