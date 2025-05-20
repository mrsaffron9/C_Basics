//
//  Endless_Loop_2.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/4/25.
//

#include <stdio.h>

int main() {
    
    int count ;
    count=0;
    while (1)
    {
        printf("%d ",count);
        count=count+1;
        if (count>50) {
            break;
        }
    }
    putchar('\n');
    return 0;
}

