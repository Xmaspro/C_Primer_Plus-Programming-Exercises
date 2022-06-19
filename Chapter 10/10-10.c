#include <stdio.h>
#define INDEX 4

void add(int n, int t[n], const int s1[n], const int s2[n]);


 int main(void)
{
   int sum[INDEX];
   int s1[INDEX] = { 5,7,8,9};
   int s2[INDEX] = {10, 5,6,3};

   add(INDEX, sum,s1,s2);
   printf("New array:");
   for (int i = 0; i < INDEX; i++)
        printf("%d,", sum[i]);

}


void add(int n, int t[n], const int s1[n], const int s2[n])
{
    for (int i = 0; i < n; i++)
        *(t + i) = *(s1 + i) + *(s2 + i);
}

