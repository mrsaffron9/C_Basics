//
//  Switch_case_Experiment.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/2/25.
//

#include <stdio.h>

int main(){
    char code;
    printf("Enter the valid code (A-C): ");
    scanf("%c",&code);
    switch (code) {
        case 'A':
        case 'a':
            puts("Drive fault, not your fault");
            break;
        case 'B':
        case 'b':
            puts("Illegal format, call a lawyer");
            break;
        case 'C':
        case 'c':
            puts("Bad filename, spank it");
            break;
        default:
            puts("That's not A,B,or C");
            break;
    }
    return 0;
}

