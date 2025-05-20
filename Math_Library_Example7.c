//
//  Math_Library_Example7.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/6/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    
    int a,r,b;
    srand((unsigned)time(NULL));
    for (a=0; a<20; a++) {
        for (b=0; b<5; b++) {
            r=rand();
            printf("%d\t",r);
        }
        putchar('\n');
    }
    return 0;
}

