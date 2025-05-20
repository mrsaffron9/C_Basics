//
//  String_Compare.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/14/25.
//

#include <stdio.h>
#include <string.h>

int main() {
    
    char password[]="pass";
    char input[18];
    int match;
    
    printf("Password: ");
    scanf("%s",input);
    match=strcmp(input, password);
    if (match==0) {
        puts("Password Accepted");
    }
    else{
        puts("Invalid password. Try, again!");
    }
    return 0;
}

