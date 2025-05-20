//
//  Array_Understanding.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/9/25.
//

#include <stdio.h>

int main() {
    
    int Highest_marks[4];
    int x;
    int result;
    result=0;
    for (x=0; x<4; x++) {
        printf("Your #%d marks: ",x+1);
        scanf("%d",&Highest_marks[x]);
        
    }
    puts("Here are your Higest marks");
    for (x=0; x<4; x++) {
        printf("#%d %d\n",x+1,Highest_marks[x]);
        result+=Highest_marks[x];
    }
    
    printf("The result is : %d\n",result);
    return 0;
}


