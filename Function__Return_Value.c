//
//  Function__Return_Value.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/5/25.
//

#include <stdio.h>

float convert(float f);
int main() {
    float temp_f,temp_c;
    printf("Temperate in Fahrenheit: ");
    scanf("%f",&temp_f);
    printf("%.1fF is %.1fC\n",temp_f,convert(temp_f));
    return 0;
}

float convert(float f)
{
    
    return (f-32)/1.8;
    
}

