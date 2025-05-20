//
//  String_Change_Character_3.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/13/25.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    
    char r[]="This is A RANdom TEXT.";
    int x;
    char c;
    printf("Original text: %s\n",r);
    x=0;
    while (r[x]) {
        c=r[x];
        if (islower(c)) {
            r[x]=toupper(c);
        }else if (isupper(c)){
            r[x]=tolower(c);
        }else{
            r[x]=c;
            
        }
        x++;
    }
    printf("Modified Text: %s\n",r);
    return 0;
    
}

