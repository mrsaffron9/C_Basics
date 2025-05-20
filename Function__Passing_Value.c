//
//  Function__Passing_Value.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/5/25.
//

#include <stdio.h>

void eggplant(int count);
int main(){
    
    int value;
    value=2;
    while (value<=64) {
        eggplant(64);
        printf("Value is %d\n",value);
        value=value*2;
    }
    return 0;
}

void eggplant(int count){
    
    int x;
    for (x=0; x<count; x=x+1) {
        putchar('*');
        
    }
    putchar('\n');
}

