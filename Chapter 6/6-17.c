#include <stdio.h>
float calculateSum(float initial,int rate, int year);

int main(void){
     float initial = 100;
     int rate = 8;
     int year = 0;
     float sum =calculateSum(initial,rate,year);

     while (sum >= 0){
          printf("Year %d balance: %.2f\n", year, sum);
          year++;
          sum =calculateSum(initial,rate,year);
     }

     printf("In %dth year,Chuckie Lucky will withdraw all of balance.\n", year);
}

float calculateSum(float initial,int rate, int year){
     float sum = initial;
     for (int i = 1; i <= year; i++){
          sum = sum + sum * rate / 100.0 - 10;
     }
     return sum;
}





// {
// int year = 0;


//    float money = 100;
//    while (money > 0)
//    {
//         money = money * 1.08 -10;
//         year++;
//    }
//     printf("It takes %d years to withdrall all money.\n", year);

//     return 0;
// }
