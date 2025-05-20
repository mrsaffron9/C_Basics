//
//  Nested_for_loop.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/3/25.
//

#include <stdio.h>

int main(){
    char alpha;
   int numeric;
    for (alpha='a'; alpha<='g'; alpha=alpha+1) {
        for (numeric=1; numeric<=7; numeric=numeric+1) {
            printf("%c%d\t",alpha,numeric);
            
        }
       putchar('\n');
    }
   
    for (alpha='A'; alpha<='Z'; alpha=alpha+1) {
        for (alpha='A'; alpha<='Z'; alpha=alpha+1) {
            for (alpha='A'; alpha<='Z'; alpha=alpha+1) {
                printf("%c%c%c\t",alpha,alpha,alpha);
            }
            putchar('\n');
        }
        
    }
    return 0;
}

