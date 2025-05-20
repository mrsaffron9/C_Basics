//
//  While_Loop_example.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/4/25.
//

#include <stdio.h>

int main() {
    
    float addhalf;
    addhalf=-5.0;
    while (addhalf<=5.0) {
        printf("%.1f\n",addhalf);
        addhalf=addhalf+0.5;
    }
    return 0;
}

