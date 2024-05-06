#include "repository.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

void readFile()
{
    FILE *pF = fopen("C:\\Users\\tioor\\Documents\\GitHub\\2324-ge-t10-file-operation-OraclePanjaitan\\storage\\dorm-repository.txt", "r");
    char buffer[255];

    while(fgets(buffer,255,pF)!=NULL)
    {
        printf("%s",buffer);
    }
    fclose(pF);

}
    