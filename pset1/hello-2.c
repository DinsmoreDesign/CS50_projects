#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    printf("What's your name?\n");
    string name = GetString();
    printf("Hello, %s\n", name);
    
}