#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How long do you take in the shower?\n");
    int m = GetInt();
    int o = m * 192;
    int b = o / 16;
    printf("minutes: %i\n", m);
    printf("bottles: %i\n", b);
}