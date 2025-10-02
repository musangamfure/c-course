#include<stdio.h>

int main(void){
    int i = 0;
    while(i <= 20){
        if(i > 10 &&  i % 2 == 1){
            printf("The value of i is %d\n", i);
        }
        i += 1;
    }
        
    return 0;
}