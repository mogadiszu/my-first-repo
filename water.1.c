#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int m = 0;
    printf("How long do you shower? (in minutes)\n");
    m = GetInt();
    
    int n = 0;
    n = (m * 192) / 16;
    printf("While spending %i minutes in the shower you're using %i bottles of water.\n", m, n);
    return 0;
}