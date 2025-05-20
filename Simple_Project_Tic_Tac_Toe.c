//
//  Tic_Tac_Toe.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/19/25.
//

#include <stdio.h>

int main() {
    
    char a1,a2,a3;
    char b1,b2,b3;
    char c1,c2,c3;
    scanf("%c %c %c\n", &a1, &a2, &a3);
    scanf("%c %c %c\n", &b1, &b2, &b3);
    scanf("%c %c %c\n", &c1, &c2, &c3);
    if(a1==a2 && a2==a3){
        printf("%c is the winner\n",a1);
        return 0;
    }
    if(b1==b2 && b2==b3){
        printf("%c is the winner\n",b1);
        return 0;
    }
    if(c1==c2 && c2==c3){
        printf("%c is the winner\n",c1);
        return 0;
    }
    if(a1==b1 && b1==c1){
        printf("%c is the winner\n",a1);
        return 0;
    }
    if(a2==b2 && b2==c2){
        printf("%c is the winner\n",a2);
        return 0;
    }
    if(a3==b3 && b3==c3){
        printf("%c is the winner\n",a3);
        return 0;
    }
    if(a1==b2 && b2==c3){
        printf("%c is the winner\n",a1);
        return 0;
    }
    if(a3==b2 && b2==c1){
        printf("%c is the winner\n",a3);
        return 0;
    }
    printf("Draw\n");
    return 0;
};


