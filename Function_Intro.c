//
//  Function_Intro.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/5/25.
//

#include <stdio.h>
void prompt(); //function prototype
int main() {
    
    int loop;
    char input[32];
    
    loop=0;
    while (loop < 5) {
        prompt();
        fgets(input,32,stdin);
        loop=loop+1;
        
    }
    return 0;
}

//Display the prompt
void prompt(void){
    printf("C:\\DOS> ");
}

