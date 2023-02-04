#include <stdio.h>
const int Dunbar_Number = 150;
int friend_number(int start, int num);

int main(void)
{
    int initial = 5;
    int week_num = 0;
    int result = 0;

    do {
    result = friend_number(initial, week_num);
    week_num++;
    } while (result <= Dunbar_Number);

    printf("Week %d: %d friends\n", week_num, result);
}

int friend_number(int start, int num){
    int sum = start;
    for (int i = 1; i < num; i++){
        sum = (sum - i) + 2 * (sum - i);
    }

    return sum;
}