/*1.Write a program to calculate the sum of numbers stored
in an array of size 10. Take array values from the user.
*/

#include<stdio.h>
int main()
{
    int i,sum=0,a[10];
    printf("Enter 10 Numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum is : %d",sum);
    return 0;
}
/*

#include<stdio.h>
int main()
{
    int i,sum=0,a[10];
    printf("Enter 10 Numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum is : %d",sum);
    return 0;
}
*/
