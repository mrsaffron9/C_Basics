//
//  TwoComparsion_If.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/2/25.
//

#include <stdio.h>

int main() {
    
    int coordination;
    printf("Enter the target coordination: ");
    scanf("%d",&coordination);
    
    if (coordination >= -5 && coordination <= 5) {
        puts("Close enough!");
    }
    else
    {
        puts("Target is out of range.....");
    }
    return 0;
}

