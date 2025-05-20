//
//  Function_Example2.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/5/25.
//

#include <stdio.h>

void spinach(void);

int main(){
    
    int a = 10;
    printf("The main() function, a=%d\n",a);
    spinach();
    printf("The main() function, a=%d\n",a);
    return 0;
}

void spinach(void){
    
    int a=6;
    printf("The spinach() function, a=%d\n",a);
}

