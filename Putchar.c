//
//  Putchar.c
//  Basics_C
//
//  Created by mrsaffron9 on 4/30/25.
//

#include <stdio.h>
int main() {
    
    int ch;
    printf("Press Enter : ");
    getchar();
    ch='H';
    putchar(ch);
    ch ='i';
    putchar(ch);
    putchar('!');
    putchar('\n');
    return 0;
    
}

