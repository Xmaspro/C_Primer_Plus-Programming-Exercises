#include <stdio.h>
#define SPACE ' '

int main(void){
    int blank_num, row_num, others_num;
    blank_num = row_num = others_num = 0;
    char c;

    printf("Input some chars (stopped by type #): ");
    while ((c = getchar()) != '#'){
        if (c == SPACE)
            blank_num++;
        else if (c =='\n')
            row_num++;
        else
            others_num++;
    }

    printf("%d spaces, %d rows, %d others\n", blank_num, row_num, others_num);
}





























// {
//     int n_space, n_row, n_ch;
//     char ch;

//     printf("Enter some characters: (# to quit) ");
//     while ((ch = getchar()) != '#')
//     {
//         if (ch == SPACE)
//             n_space++;
//         else if (ch  == '\n')
//             n_row++;
//         else n_ch++;
//     }

//     printf("You entered %d spaces, %d endlines and %d other characters.\n", n_space, n_row, n_ch);

//     return 0;
// }
