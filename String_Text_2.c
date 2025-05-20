//
//  String_Text_2.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/13/25.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    
    char sentence[]="Zinnias are hardy, sun-loving flowering plants that grow quickly and bloom profusely, making them great for pots and sunny balconies. If this was planted from a mixed wildflower or zinnia seed packet, it's very likely to be a zinnia.";
    int result;
    int alpha,lapha,ualpha,space,punctuation,para;
    alpha=lapha=ualpha=space=punctuation=0;
    para=0;
    
    while (sentence[para]) {
        if (isalpha(sentence[para])) {
            alpha++;
        }
        if (islower(sentence[para])) {
            lapha++;
        }
        if (isupper(sentence[para])) {
            ualpha++;
        }
        if (isspace(sentence[para])) {
            space++;
        }
        if (ispunct(sentence[para])) {
            punctuation++;
        }
        para++;
    }
    result=alpha+lapha+ualpha+space+punctuation+para;
    puts(sentence);
    puts("Statistics : ");
    printf("%d Alphabetics,\n",alpha);
    printf("%d Lower Case Alphabetics,\n",lapha);
    printf("%d Upper Case Alphabetics,\n",ualpha);
    printf("%d Spaces,\n",space);
    printf("%d Punctuations,\n",punctuation);
    printf("%d Characters Total.\n ",para);
    printf("%d+%d+%d+%d+%d+%d=%d Alltogether.\n",alpha,lapha,ualpha,space,punctuation,para,result);
    
    return 0;
}

