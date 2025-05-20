//
//  Letter_Counter.c
//  Basics_C
//
//  Created by mrsaffron9 on 5/19/25.
//

#include <stdio.h>

int main() {
    // Write code here
   char c;
   int count=0;
   while(c!='$'){
    scanf("%c",&c);
    if(c!='$'&& c!=' '){
        count++;
    }
   }
   printf("%d\n",count);
   return 0;
}


