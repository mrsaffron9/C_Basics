//
//  Math_Library_Example6.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/6/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    unsigned seed;      //rand() values can be predictable that's why we use srand() with the unsigned integers
    int a,r,b;
    printf("input a random seed number: ");
    scanf("%u",&seed);    //unsinged  integer place holder define as %u not %d
    srand(seed);
    for (a=0; a<20; a++) {
        for (b=0; b<5; b++) {
            r=rand();
            printf("%d\t",r);
        }
        putchar('\n');
    }
    return 0;
}

