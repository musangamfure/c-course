#include <stdio.h>

void Greet(char name[]);

int main( void ) {
    
    Greet( "Emmanuel");
    return 0;
}
 
void Greet(char name[]) {
    printf("Hello %s\n", name);
}

