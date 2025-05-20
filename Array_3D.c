//
//  Array_3D.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/10/25.
//

#include <stdio.h>

int main(){
    
    char tictactoe [3] [3] [3];
    int x,y,z;
    
    for (x=0; x<3; x++) {
        for (y=0; y<3; y++) {
            for (z=0; z<3; z++) {
                tictactoe[x][y][z]='.';
                tictactoe[0][1][0]='X';
            }
        }
    }
    
    puts("Wanna play 3D tictactoe?");
    for (z=0; z<3; z++) {
        printf("Level %d\n",z+1);
        for (x=0; x<3; x++) {
            for (y=0; y<3; y++) {
                printf("%c ",tictactoe[x][y][z] );
                
            }
            putchar('\n');
        }
    }
    return 0;
}

