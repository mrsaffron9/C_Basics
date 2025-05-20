//
//  Stream_Input_2.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/14/25.
//

#include <stdio.h>
char getch(void);
int main() {
    
    char first,second;
    
    printf("Type your first name here: ");
    first=getch();
    printf("Type your second name here: ");
    second=getch();
    printf("Your name is '%c' and '%c'\n",first,second);
    return 0;
}

char getch(void){
    
    char ch;
    ch=getchar();
    while (getchar()!='\n')
        ;
        return (ch);
    }


