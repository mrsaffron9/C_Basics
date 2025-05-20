//
//  Do_While_Loop_Intro.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/4/25.
//

#include <stdio.h>

int main(){
    
    int fibo,nacci;
    fibo=0;
    nacci=1;
    
    do {
        printf("%d ",fibo);
        fibo=fibo+nacci;
        printf("%d ",nacci);
        nacci=nacci+fibo;
    } while (nacci < 300);
    putchar('\n');
    return 0;
}

