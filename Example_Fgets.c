//
//  Example_Fgets.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/2/25.
//

#include <stdio.h>

int main() {
    
    char name[30];
    printf("Enter your first and last name: ");
    fgets(name,30,stdin);
    printf("Glad to meet you,%s.\n",name);
    return 0;
}

