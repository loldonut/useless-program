#include <stdio.h>

void colorPrint(int colorM, char message[])
{
    printf("\033[0;%im%s\033[0m", colorM, message);
}
