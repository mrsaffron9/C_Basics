//
//  String_Change_Character.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/13/25.
//

#include <stdio.h>
#include <ctype.h>

int main(){
    
    char answer;
    printf("Would you like to blow up the crackers? ");
    scanf("%c",&answer);
    answer=toupper(answer);
    if (answer=='Y'){
        puts("BOOM!");
    }
    else{
        puts("crackers are not working!");
    }
    return 0;
}

