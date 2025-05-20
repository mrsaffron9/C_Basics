//
//  For_loop_two_count.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/3/25.
//

#include <stdio.h>

int main() {
    
    int two;
    char two;
    for (two=2; two<=100; two=two+2) {
        printf("%d\t",two);
    }
    for (two=3; two<100; two=two+3) {
        printf("%d\t",two);
    }
    for (two=25; two>=0; two=two-1) {
        printf("%d\t",two);
    }
    for (two='A'; two<='Z'; two=two+1) {
        printf("%d\t",two);
    }
    for (two='z'; two>='a'; two=two-1) {
        printf("%c\t",two);
    }
    putchar('\n');
    return 0;
}

