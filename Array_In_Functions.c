//
//  Array_In_Functions.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/12/25.
//

#include <stdio.h>

void showarray(int array[]);
void arrayinc(int array[]);

int main()
{
    int n[]={2,3,5,7,11};
    
    puts("Here's the array:");
    showarray(n);
    arrayinc(n);
    puts("After calling the arrayinc()");
    showarray(n);
    return 0;
}

void showarray(int array[])
{
    int x;

    for (x=0; x<5; x++)
        printf("%d ",array[x]);
    putchar('\n');
}

void arrayinc(int array[])
{
    int x;
    for (x=0; x<5; x++) {
        array[x]++;
}
    putchar('\n');
}

