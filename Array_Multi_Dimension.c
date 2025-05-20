//
//  Array_Multi_Dimension.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/12/25.
//

#include <stdio.h>

int main (){
    
    int tictactoe [3][3]={ '.','.','.',
                          '.','X','.',
                          '.','.','.'
                          };
    int x,y;
   
    puts("Wanna play TicTacToe");
    for (x=0; x<3; x++) {
        for (y=0; y<3; y++) {
            printf("%c",tictactoe[x][y]);
            
        }
        putchar('\n');
    }
    return 0;
}

