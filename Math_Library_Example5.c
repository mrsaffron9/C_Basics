//
//  Math_Library_Example5.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/6/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int r,a,b;
    puts("100 Random Numbers");
    for (a=0; a<20; a++) {
        for (b=0; b<5; b++) {
            r=rand();
            r%=100;
            printf("%d\t",r);
        }
        putchar('\n');
    }
    return 0;
}

