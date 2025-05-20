//
//  String_Intro.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/13/25.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    
    char sentence[]="Zinnias are hardy, sun-loving flowering plants that grow quickly and bloom profusely, making them great for pots and sunny balconies. If this was planted from a mixed wildflower or zinnia seed packet, it's very likely to be a zinnia.";
    int alpha,space,puntuations,para;
    alpha=space=puntuations=0;
    para=0;
    
    while (sentence[para]) {
        if (isalpha(sentence[para] !='\0')) {
            alpha++;
        }
        if (isspace(sentence[para])) {
            space++;
        }
        if (ispunct(sentence[para])) {
            puntuations++;
        }
        
        para++;
    }
    printf("\"%s\"\n",sentence);
    puts("Statistics: ");
    printf("%d Alphabetic characters,\n",alpha);
    printf("%d Spaces,\n",space);
    printf("%d Puntuations.\n",puntuations);
    
    return 0;
}

