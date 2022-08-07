/*8.Write a program to find the second smallest number
 in an array.Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,a[10],small;
    printf("Enter 10 Numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=9;i>=0;i--)
         {
           if(a[i]<small)
            small=a[i+1];
         }
    printf("Second Smallest Number is : %d\n",small);
    return 0;
}