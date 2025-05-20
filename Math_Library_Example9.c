//
//  Math_Library_Example9.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/6/25.
//

#include <stdio.h>
#include <math.h>

int main(){
    float expression,expression2,expression3,expression4;
    expression=(20-5*2+42/6);
    expression2=(12/3/2);
    expression3=(12-5)*2;
    expression4=(20-5)*(2+42)/6;
    printf("The result of expresion is %.2f\n",expression);
    printf("The result of expression2 is %.2f\n",expression2);
    printf("The result of expression3 is %.2f\n",expression3);
    printf("The result of expresion4 is %.2f\n",expression4);
    return 0;
}

