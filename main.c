#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_CHARS 50

int main()
{
    char msg[MAX_CHARS];

    printf("Enter some text below:\n");
    gets(msg);

    int filler;
    int countUp;
    int countDown;

    for (countUp = 0, countDown = strlen(msg) - 1; countUp < countDown; countUp++, countDown--)
    {
        filler = msg[countUp];
        msg[countUp] = msg[countDown];
        msg[countDown] = filler;
    }

    printf("%s", msg);

    return 0;
}
