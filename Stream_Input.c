//
//  Stream_Input.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/14/25.
//

#include <stdio.h>

int main(){
    
    int i;
    do {
        i=getchar();
        putchar(i);
    } while (i != '.');
    putchar('\n');
    return 0;
}

