//
//  Array_Sorting_String.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/10/25.
//

#include <stdio.h>

int main() {
    
    const int size=21;
    char bubble[]="C Programming is fun!";
    char temp;
    int inner,outer,x;
    
    puts("Original Array: ");
    for (x=0; x<size; x++) {
        printf("%c",bubble[x]);
    }
    putchar('\n');
    
    for (outer=0; outer<size-1; outer++) {
        for (inner=outer+1; inner<size; inner++) {
            if (bubble[outer]>bubble[inner]) {
                temp = bubble[outer];
                bubble[outer]=bubble[inner];
                bubble[inner]=temp;
            }
        }
    }
    puts("Sorted Array: ");
    for (x=0; x<size; x++) {
        printf("%c",bubble[x]);
    }
    putchar('\n');
    return 0;
    
}

