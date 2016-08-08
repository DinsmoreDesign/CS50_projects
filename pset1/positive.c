#include <cs50.h>
#include <stdio.h>

int main(void) {
    
    int n;
    
    do {
        
        printf("Please give me a positive whole number: ");
        n = GetInt();
        
    } while (n < 1);
    
    printf("Thanks for the positive number!\n");
    
}