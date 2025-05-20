//
//  Switch_case.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/2/25.
//

#include <stdio.h>

int main () {
    
    int code;
    printf("Enter the error code(1-3): ");
    scanf("%d",&code);
    switch (code) {
        case 1:
            puts("Drive fault, not your fault.");
            break;
        case 2:
            puts("Illegal format, call a lawyer.");
            break;
        case 3:
            puts("Bad filename, spank it.");
            break;
        default:
            puts("Thats not 1,2,or 3");
    }
    return 0;
}

