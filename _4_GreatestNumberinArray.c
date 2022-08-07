/*4.Write a program to find the greatest number stored in an
 array of size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,a[10],max=1;//let greatest number is 1;
    printf("Enter 10 Numbers:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        max=a[i];
    }
    printf("Greatest Number is: %d",max);
    return 0;
}