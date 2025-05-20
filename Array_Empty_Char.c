//
//  Array_Empty_Char.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/10/25.
//

#include <stdio.h>

int main() {
    
    char name[16];
    
    printf("What is your name? ");
    fgets(name, 16, stdin);
    printf("Please to meet you, %s\n",name);
    return 0;
}

