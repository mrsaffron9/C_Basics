//
//  Math_Library_Example3.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/6/25.
//

#include <stdio.h>
#include <math.h>

int main() {
    float degree,radian;
    puts("Enter the degree in radians: ");
    scanf("%f",&radian);
    degree=57.2957795*radian;
    printf("%.2f radian is %.2f degrees. \n",radian,degree);
    return 0;
}

