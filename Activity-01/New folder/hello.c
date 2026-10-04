#include <stdio.h>
#include <string.h>

void greet(char name[])
{
    printf("Welcome, %s!\n", name);
}

int main()
{
    char name[] = "Pavana";

    greet(name);

    return 0;
}