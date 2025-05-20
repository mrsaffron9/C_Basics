//
//  Array_Intro.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/9/25.
//

#include <stdio.h>

int main() {
    
    int Highestmarks1;
    int Highestmarks2;
    int Highestmarks3;
    int result;
    printf("Your Highest marks in History: ");
    scanf("%d",&Highestmarks1);
    printf("Your Highest marks in Economics: ");
    scanf("%d",&Highestmarks2);
    printf("Your Highest marks in Civics: ");
    scanf("%d",&Highestmarks3);
    result=Highestmarks1+Highestmarks2+Highestmarks3;
    puts("Here your highest marks");
    printf("#1 %d\n",Highestmarks1);
    printf("#2 %d\n",Highestmarks2);
    printf("#3 %d\n",Highestmarks3);
    printf("Sum of all your marks in all course work are : %d\n ",result);
    
    return 0;
}

