//
//  Array_Initializing.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/9/25.
//

#include <stdio.h>
#include <math.h>
int main() {
    
    
    int first[] ={10,12,14,15,16,18,20};
    float second[7];
    int x;
    for (x=0; x<7; x++) {
        second[x]=sqrt(first[x]);
        
    }
    for (x=0; x<7; x++) {
        printf("The square of %d is %.2f\n",first[x],second[x]);
    }
    
    return 0;
}

