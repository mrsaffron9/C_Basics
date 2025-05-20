//
//  Array_Empty_Char2.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/10/25.
//

#include <stdio.h>

int main() {
    
    char fname[16];
    char lname[16];
    
    puts("Please Enter your first name:");
    scanf("%15s",fname);
    puts("Please Enter your last name: ");
    scanf("%15s",lname);
    printf("Please to meet you, %s %s\n",fname,lname);
    return 0;
}

