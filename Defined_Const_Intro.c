//
//  Defined_Const_Intro.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/5/25.
//

#include <stdio.h>
#define STEPS 5

void forward(void);
void backward(void);

int main(){
    
    puts("STEPS forward");
    forward();
    puts("STEPS backward");
    backward();
    return 0;
}
void forward(void){
    
    int x,y;
    for (x=0; x<STEPS; x++) {
        for (y=0; y<STEPS; y++) {
            printf("%d:%d\t",x,y);
           
        }
        putchar('\n');
    }
}
void backward(void){
    int x,y;
    for (x=STEPS-1; x>=0; x--) {
        for (y=STEPS-1; y>=0; y--) {
            printf("%d:%d\t",x,y);
            
        }
        putchar('\n');
    }
}

