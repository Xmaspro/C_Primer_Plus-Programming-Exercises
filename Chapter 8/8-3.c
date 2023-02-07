#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char ch;
    int count_lower = 0;
    int counter_upper = 0;
    printf("Enter some characters:(# to quit)");
    while ((ch = getchar())!= EOF){
        if(islower(ch)){
            count_lower += 1;
        }
        else if (isupper(ch)){
            counter_upper += 1;
        }
        else if (ch == '#')
            break;
    }
    printf("You input %d times lower case and %d times upper case.\n", count_lower, counter_upper);
}