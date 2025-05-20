//
//  Increment_For_Loop.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/5/25.
//

#include <stdio.h>

int main(){
    
    int x;
   for (x=0; x<10; x++) {
        puts("Get off my lawn,you kids!");
    }
    x=0;
    while (x<10) {
        puts("Get off my lawn,you kids!");
        x++;
    }
   for (x=-5; x<=5; x++) {
        printf("%d\t",x);
    }
    for (x=4; x>=-5; x--) {
        printf("%d\t",x);
    }
    x=-10;
    while (x<10) {
        printf("%d\t",x);
        x++;
        
    }
    while (x>=-10) {
        printf("%d\t",x);
        x--;
    }
  
    putchar('\n');
    return 0;
}

