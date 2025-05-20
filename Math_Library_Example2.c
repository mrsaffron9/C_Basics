//
//  Math_Library_Example2.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/6/25.
//

#include <stdio.h>
#include <math.h>

int main() {
    float radian,degree;
    printf("Enter an angle in degrees: ");
    scanf("%f",&degree);
    radian=0.0174533*degree;
    printf("%.2f degrees is %.2f radians.\n",degree,radian);
    return 0;
}

