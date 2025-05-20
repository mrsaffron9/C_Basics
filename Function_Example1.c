//
//  Function_Example1.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/5/25.
//

#include <stdio.h>

void prompt(void);
void busy (void);

int main() {
    
    busy();
    return 0;
}

void busy (void){
    
    int loop = 0;
    char input[32];
    
    while (loop < 5) {
        prompt();
        fgets(input, 32, stdin);
        loop=loop+1;
    }
}

void prompt(void){
    printf("C://DOS> ");
}

