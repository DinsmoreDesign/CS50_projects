#include <stdio.h>
#include <cs50.h>

int main(void) {

    // Creates blank variables
        int height;
        int row;
        int spaces;
        int pound;
    
    // Initiates do loop which asks for a number between 1 and 23 and keeps running it if number is invalid
        do {
            
            printf("Please give me a whole number between 1 and 23: ");
            height = GetInt();
            
        } while (height < 1 || height > 23);
        
    // Initiates for loop which assigns row to 1 and adds 1 for each iteration until it's less than or equal to height
        for (row = 1; row <= height; row++) {
            
            // Initiates for loop which sets spaces to equal height - row, if greater than 0 and reduces by 1 each row
                for (spaces = (height - row); spaces > 0; spaces--) {
                    
                    // Prints space
                        printf(" ");
                    
                }
            
            // Initiates for loud which sets # to 1 if less than or equal to row +1 and adds 1 each time it's run
                for (pound = 1; pound <= (row + 1); pound++) {
                    
                    // Prints #
                        printf("#");
                    
                }
                
            // Prints new line once loop is done running
                printf("\n");
                
        }
        
    // Ends program
        return 0;
    
}