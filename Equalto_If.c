//
//  Equalto_If.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/2/25.
//

#include <stdio.h>

int main() {
    
    const int secret=17;
    int guess;
    printf("Can you guess the secret number: ");
    scanf("%d",&guess);
    if (guess==secret) {
    
        puts("You guessed it!");
        return 0;
    }
    if (guess!=secret) {
        puts("You failed to guess....");
        return 1;
    }
}

