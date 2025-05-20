//
//  String_Change_Character_2.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/13/25.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    
    char answer;
    
    printf("Wanna blow up the crackers? ");
    scanf("%c",&answer);
    answer=toupper(answer);
    if (answer=='Y') {
        puts("BOOM!");
    }
    else if (answer=='N') {
        puts("Crackers are not working!");
    }
    else{
        puts("Error: Invalid answer.");
    }
    return 0;
}

