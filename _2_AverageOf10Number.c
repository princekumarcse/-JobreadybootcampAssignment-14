/*2.Write a program to calculate the average of numbers
stored in an array of size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,sum=0,a[10];
    float avg;
    printf("Enter 10 Numbers:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("Average is : %f",avg);
    return 0;
}