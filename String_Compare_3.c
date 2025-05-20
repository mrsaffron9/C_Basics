//
//  String_Compare_3.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/14/25.
//

#include <stdio.h>
#include <string.h>

int main() {
    
    char password[]="pass";
    char input[18];
    
    printf("Password: ");
    scanf("%s",input);
    if (!strcmp(input, password)) {
        puts("Password Matched");
        
    }
    else{
        puts("Invalid password, Try again! ");
    }
    return 0;
}

