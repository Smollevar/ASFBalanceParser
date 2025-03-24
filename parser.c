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
            char *endptr = " ";

            long num = strtol(doubleDotPointer, &endptr, 10);
            if (num > 3000) {
                printf("%s", line);
            }
        }

        fclose(file);

    }
    else
    {
        fprintf(stderr, "Unable to open");
    }
  
    char *fgets(char *str, int n, FILE *stream);
    return 0;
}
