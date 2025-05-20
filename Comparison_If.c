//
//  Comparison_If.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/2/25.
//

#include <stdio.h>

int main() {
    int first,second;
    
    printf("Enter the first number: ");
    scanf("%d",&first);
    printf("Enter the second number: ");
    scanf("%d",&second);
    puts("Evaluating.....");
    if (first>second) {
        
        printf("%d is greater than %d.\n",first,second);
    }
    else if (first<second)
    {
        printf("%d is less than %d.\n",first,second);
    }
    else if (first==second)
    {
        printf("both are equal numbers.\n",first,second);
    }
    else{
        printf("Error: Usage is not valid. can you provide numbers.\n");
    }
    return 0;
}

