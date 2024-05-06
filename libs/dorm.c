#include "dorm.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

struct dorm_t create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender)
{
    struct dorm_t dorm_;

    strcpy (dorm_.name,_name);
    dorm_.capacity=_capacity;  
    dorm_.gender=_gender;
    dorm_.residents_num = 0;    
    return dorm_; 
}

void print_dorm(struct dorm_t *_dorm, int size)
{
    for(int j = 0; j < size; ++j)
    {
        printf("%s|", _dorm[j].name);
        printf("%d|", _dorm[j].capacity);
        if (_dorm->gender == 0)
        {
            printf("|male");
            printf("%d\n", _dorm[j].residents_num);
        }
        else if (_dorm->gender == 1)
        {
            printf("|female");
            printf("%d\n", _dorm->residents_num);
        }
    }

}