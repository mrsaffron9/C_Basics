//
//  Math_Library_Example.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/6/25.
//

#include <stdio.h>
#include <math.h>

int main() {
    
    float value;
   
    for (value=0.0; value<=10.0; value++) {
       printf("The power value 2^%.0f is %.0f\n",value,pow(2.0, value));
    }
    return 0;
}

