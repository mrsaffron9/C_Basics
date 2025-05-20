//
//  String_Text.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/13/25.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    
    char sentence[]="Zinnias are hardy, sun-loving flowering plants that grow quickly and bloom profusely, making them great for pots and sunny balconies. If this was planted from a mixed wildflower or zinnia seed packet, it's very likely to be a zinnia.";
    int lalpha,ualpha,space,puntuations,para;
    lalpha=ualpha=space=puntuations=0;
    para=0;
    
    while (sentence[para]) {
        if (islower(sentence[para])) {
            lalpha++;
        }
        if (isupper(sentence[para])) {
            ualpha++;
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
    printf("%d Lower Case Alphabetics,\n",lalpha);
    printf("%d Upper Case Alphabetics,\n",ualpha);
    printf("%d Spaces,\n",space);
    printf("%d Punctuations.\n",puntuations);
    
    return 0;
}

