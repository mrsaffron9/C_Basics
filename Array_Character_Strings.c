//
//  Array_Character_Strings.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/9/25.
//

#include <stdio.h>

int main() {
    
    char statement[]= "Some text";
    int content;
    content=0;
    while (statement[content] !='\0') {
       putchar(statement[content]);
        content++;
    }
    putchar('\n');
    return 0;
}

