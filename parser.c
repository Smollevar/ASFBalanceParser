#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    FILE* file = fopen("balance.txt", "r");

    char line[128];

    if (file != NULL) 
    {
        while (fgets(line, sizeof(line), file))
        {
            char *currentLine = line;
            char *doubleDotPointer = NULL;
            doubleDotPointer = strchr(currentLine, ':');
            doubleDotPointer += 2;
            // currentLine += 3;
            char *endptr = " ";

            long num = strtol(doubleDotPointer, &endptr, 10);
            if (num > 3000) {
                printf("%s", line);
            }
            
            // printf ("digits is: %ld\n", num);
            // printf("19 line is: %c\n", *doubleDotPointer);
            // printf("%s", currentLine);
        }

        fclose(file);

/*
            1) Find pointer on symbol.
            2) Shift him on 2 forward, that he will point on first digit.
            3) Whether parse or collect digit.
            4) Decide whether print the digit if it above than 3.000 value.
            5) Iterate through all lines in file.
*/
    }
    else
    {
        fprintf(stderr, "Unable to open");
    }
  
    char *fgets(char *str, int n, FILE *stream);
    return 0;
}
