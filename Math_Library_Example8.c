//
//  Math_Library_Example8.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/6/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int secret,guess;
    srand((unsigned)time(NULL));
    secret=rand();
    printf("Can you the guess the secret number: ");
    scanf("%d",&guess);
    if (guess==secret) {
        puts("You guessed correct!");
        return 0;
    }
    else{
        puts("Your guessed wrong number....:(");
        printf("The secret number was %d\n",secret);
        return 1;
    }
}

