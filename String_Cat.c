//
//  String_Cat.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/14/25.
//

#include <stdio.h>
#include <string.h>

int main() {
   
   char first[40];
    char last[40];
    char full[100];
    printf("Enter your first name: ");
    scanf("%s",first);
    printf("Enter your last name: ");
    scanf("%s",last);
    strcat(full, first);
    strcat(full, " ");
    strcat(full, last);
    printf("Please to meet you,%s!\n",full);
    return 0;
}
 
