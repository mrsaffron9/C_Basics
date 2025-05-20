//
//  Array_String.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/10/25.
//


#include <stdio.h>

int main(){
    
    int const size=3;
    char caeser[size][9]={"Julius","Augustus","Nero"};
    int x,index;
    for (x=0; x<size; x++) {
        index = 0;
        while (caeser[x] [index] !='\0') {
            putchar(caeser[x] [index]);
            index++;
        }
        putchar('\n');
        
    }
    return 0;
}

