#include <cs50.h>
#include <stdio.h>

int main(void) {
    
    printf("Please give me a whole number between 1 and 10: ");
    int n = GetInt();
    
    if (n >= 0 && n <= 3) {
        
        printf("You picked a small number!\n");
        
    } else if (n >= 4 && n <= 7 ) {
        
        printf("You picked a medium number!\n");
        
    } else if ( n >= 8 && n <= 10 ) {
        
        printf("You picked a large number!\n");
        
    } else {
        
        printf("You picked an invalid number\n");
        
    }
    
}