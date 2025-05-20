//
//  Advanced_Calculator.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/19/25.
//
/*
#include <stdio.h>

int main() {
    
    float result[100];
    int count = 0;
    while(1){
        float n1,n2;
        char operator;
        if(scanf(" %c",&operator)!=1){
             break;
        }
        if(operator=='e'){
            break;
        }
        if(scanf("%f %f", &n1, &n2)!=2){
            break;
        }
        if(operator=='+'){
            result[count++]=n1+n2;
        }
        else if(operator=='-'){
            result[count++]=n1-n2;
        }
        else if(operator=='*'){
            result[count++]=n1*n2;
        }
        else if(operator=='/'){
            if(n2==0){
                printf("Error Usage: you can't divide with zero.\n");
                continue;
            }
            result[count++]=n1/n2;
        }
        else{
            printf("Invalid operator..\n");
            continue;
        }
    }
    for(int i=0; i < count; i++){
            printf("%f\n",result[i]);
        }
        return 0 ;
}
*/
