//
//  Array_Multi.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/10/25.
//

#include <stdio.h>

int main() {
    
    char tictactoe[3] [3];
    int x,y;
    
    for (x=0; x<3; x++) {
        for (y=0; y<3; y++) {
            tictactoe[x][y]='.';
     
        }
    }
    
    puts("Ready to play Tic-Tac-Toe?");
    for (x=0; x<3; x++) {
        for (y=0; y<3; y++) {
            printf("%c",tictactoe[x][y]);
        }
        putchar('\n');
    }
    return 0;
}

