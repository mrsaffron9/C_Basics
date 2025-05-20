//
//  Array_Sorting.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/10/25.
//

#include <stdio.h>

int main() {
    
    const int size=6;
    int trouble[]={96,61,5,88,51,25};
    int inner,outer,temp,x;
    
    puts("Original Array: ");
    for (x=0; x<size; x++)
        printf("%d\t",trouble[x]);
        putchar('\n');
   
    
    for (outer=0; outer<size-1; outer++) {
        for (inner=outer+1; inner<size; inner++) {
            if (trouble[outer] < trouble[inner]) {
                temp=trouble[outer];
                trouble[outer]=trouble[inner];
                trouble[inner]=temp;
            }
            
        }
    }
    puts("Sorted Array:");
    for(x=0;x<size;x++)
        printf("%d\t",trouble[x]);
        putchar('\n');
        return 0;
    
}



