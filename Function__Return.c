//
//  Function__Return.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/5/25.
//

#include <stdio.h>

void limit(int stop);
int main(){
    int s;
    printf("Enter a stopping value(0-100): ");
    scanf("%d",&s);
    limit(s);
    return 0;
}

void limit(int stop)
{
    int x;
    for (x=0; x<=100; x=x+1) {
        printf("%d ",x);
        if (x==stop) {
            puts("You won!");
            return;
        }
    }
    puts("I won!");
}

