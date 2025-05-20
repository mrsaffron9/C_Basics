//
//  Array_Initializing2.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/9/25.
//

#include <stdio.h>

int main() {
    const int nochange=5;
    float marks[]={241.65,241.70,246.43,244.93,237.28};
    int x;
    puts("The marks are");
    for (x=0; x<nochange; x++) {
        
        printf("Day %d: %.2f\n",x+1,marks[x]);
    }
    return 0;
}

