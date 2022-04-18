#include <stdio.h>
#include <string.h>

void colorPrint(int colorM, char message[])
{
    printf("\033[0;%im%s\033[0m", colorM, message);
}

void printC()
{
    colorPrint(32, "Very C ->\n");
    printf(" ▁▁▁▁▁▁▁▁▁▁▁▁\n");
    printf("/             \\\n");
    printf("|              |\n");
    printf("|       _______/\n");
    printf("|      /\n");
    printf("|      |\n");
    printf("|      |\n");
    printf("|      |\n");
    printf("|      |\n");
    printf("|      |\n");
    printf("|      \\_______\n");
    printf("|              \\\n");
    printf("|              |\n");
    printf("\\_____________/\n");
}

void printHouse()
{
    colorPrint(32, "\nVery House -> 🏡 \n");
    printf(" ▁▁▁▁▁▁▁▁▁▁\n");
    printf("/          \\\n");
    printf("▒          ▒\n");
    printf("▒   ▁▁▁▁   ▒\n");
    printf("▒   |  |   ▒  \n");
    printf("▒   |  |   ▒\n");
    printf("▒   |  |   ▒  \n");
    printf("▒▒▔▔▔▒▒▔▔▔▒▒\n");
}

int main()
{
    colorPrint(32, "Useless Program In C !\n\n");
    printC();
    printf("\n\n\n");
    printHouse();
    
    return 0;
}
