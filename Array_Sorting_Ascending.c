//
//  Array_Sorting_2.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/10/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    const int size=40;
    int bubble[size];
    int inner,outer,temp,x;
    
    srand((unsigned)time(NULL));
    puts("Original array: ");
    for (x=0; x<size; x++) {
        bubble[x]=rand() % 100 + 1;
        printf("%d\t",bubble[x]);
        
    }
    putchar('\n');
    
    for (outer=0; outer<size-1; outer++) {
        for (inner=outer+1; inner<size; inner++) {
            if (bubble[outer]>bubble[inner]) {
                temp=bubble[outer];
                bubble[outer]=bubble[inner];
                bubble[inner]=temp;
            }
        }
    }
    puts("Sorted array:");
    for (x=0; x<size; x++) {
        printf("%d\t",bubble[x]);
       
    }
    putchar('\n');
    return 0;
}

