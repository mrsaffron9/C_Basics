//
//  For_loop_Intro.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/3/25.
//

#include <stdio.h>

int main() {
    
    int x;
    for (x=1; x<=10; x++) {
        
        puts("Print this one ten times in the console.");
    }
    for (x=0; x<10; x=x+1) {
        puts("Build the should stronger");
    }
    for (x=-5; x<6; x++) {
        printf("%d\n",x);
    }
    for (x=11; x<=19; x++){
        printf("%d \t",x);
    }
    putchar('\n');
    return 0;
}

