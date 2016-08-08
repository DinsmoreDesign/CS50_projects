#include <stdio.h>
#include <cs50.h>

int main(void) {

    int columns;
    int rows;
    int spaces;
    int blocks;
    
    printf("Please enter a whole number between 1 and 23: ");
    columns = GetInt();
    
    if (columns >= 1 && columns <= 23) {
        
        for (rows = 1; rows <= columns; rows++) {
            
            for (spaces = (columns - rows); spaces > 0; spaces--) {
                
                printf(" ");
                
            }
            
            for (blocks = 1; blocks <= (rows + 1); blocks++) {
                
                printf("#");
                
            }
            
            printf("\n");
                
        }
        
    } else {
        
        do {
            
            printf("Incorrect number...\nPlease enter a number between 1 and 23: ");
            columns = GetInt();
            
        } while (columns < 1 || columns > 23);
        
    }

}