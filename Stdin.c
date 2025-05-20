//
//  Stdin.c
//  Basics_C
//
//  Created by mrsaffron9 on 4/30/25.
//

#include <stdio.h>

int main(){
    
    int c;
    printf("Waiting for the stdinput : ");
    c=getc(stdin);
    printf("Printing the character is %d\n",c);
    return 0;
}

