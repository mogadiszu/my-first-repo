#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //cough 3 times
    cough(3);
}

//Cough three times
void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        cough();
    }
}

//Coughs one time
void cough(void)
{
    printf("cough\n");
}