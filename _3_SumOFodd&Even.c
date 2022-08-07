/*3.Write a program to calculate the sum of all even numbers and
sum of all odd numbers, which are stored in an array of size 10.
Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,a[10],sumofeven=0,sumofodd=0;
    printf("Enter 10 Numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
          sumofeven=sumofeven+a[i];
        else
          sumofodd=sumofodd+a[i];
    }
    printf("Sum of Even Number is : %d\n",sumofeven);
    printf("Sum of Odd Number is : %d\n",sumofodd);
    return 0;
}