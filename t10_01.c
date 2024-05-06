// 12S23032 - Seprian Martinus Siagian
// 12s23037 - Oracle Tio Panjaitan

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/repository.h"

int main(int _argc, char **_argv)
{
    struct dorm_t *dorms = malloc(120 * sizeof(struct dorm_t));
    struct student_t *students = malloc(120 * sizeof(struct student_t));
    char data[255];
    char id[10];
    char name[25];
    char year[5];
    char input[100];
    unsigned short capacity;
    char *word;
    int index_student, index_dorm;
    int x, j, f = 0;

    do
    {
        fflush(stdin);
        input[0] = '\0';
        int c = 0;
        while (1)
        {
            char x = getchar();
            if (x == '\r')
            {
                continue;
            }
            if (x == '\n')
            {
                break;
            }
            input[c] = x;
            input[++c] = '\0';
        }   

        word = strtok(input, "#");
        if (strcmp(word, "---")== 0)
        {
            break;
        }
        else if (strcmp(input, "dorm-print-all-detail")==0)
        {
            FILE *pF = fopen("C:\\Users\\tioor\\Documents\\GitHub\\2324-ge-t10-file-operation-OraclePanjaitan\\storage\\dorm-repository.txt", "r");
            char buffer1[255];

            while(fgets(buffer1,255,pF)!=NULL)
            {
                printf("%s",buffer1);
                
            }
            fclose(pF);
        }

        else if (strcmp(input, "student-print-all-detail")==0)
        {
            FILE *pF = fopen("C:\\Users\\tioor\\Documents\\GitHub\\2324-ge-t10-file-operation-OraclePanjaitan\\storage\\student-repository.txt", "r");
            char buffer2[255];

            while(fgets(buffer2,255,pF)!=NULL)
            {
                printf("%s|unassigned",buffer2);
            }
            fclose(pF);
        }



    } while (1==1);

    free(dorms);
    free(students);
    return 0;
    
}
