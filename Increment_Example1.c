//
//  Increment_Example1.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/5/25.
//

#include <stdio.h>

int main() {
    int a,b;
    b=16;
    printf("Before, a is unassigned and b=%d\n",b);
    a=++b;
    printf("After, a=%d and b=%d\n",a,b);
    const int value=144;
    int a;
    printf("Modulus %d:\n",value);
    for (a=0; a<10; a++) {
        printf("%d %% %d = %d\n",a,value,a%value);
    }
    return 0;
}
 
