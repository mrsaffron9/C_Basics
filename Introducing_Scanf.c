//
//  Introducing_Scanf.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/2/25.
//

#include <stdio.h>

int main() {
    
    char firstname[15];
    char lastname[15];
    printf("Enter your firstname : ");
    scanf("%s",firstname);
    printf("Enter your lastname : ");
    scanf("%s",lastname);
    printf("Pleased to meet you, %s %s.\n",firstname,lastname);
    return 0;
}

