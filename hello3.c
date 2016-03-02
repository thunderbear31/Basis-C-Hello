#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Please enter your name: ");
    string name = GetString();
    if (strcmp(name, "Alice") == 0 || strcmp(name, "Bob") == 0)
    {
        printf("hello, %s /n", name);
    }
    else
    {
        printf("hello person: /n");
    }
    
}

