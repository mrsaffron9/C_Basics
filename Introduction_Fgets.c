//
//  Introduction_Fgets.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/2/25.
//

#include <stdio.h>

int main() {
    
    char name[10];
    
    printf("Who are you? ");
    fgets(name,10,stdin);
    printf("Glad to meet you,%s.\n",name);
    return 0;
}

