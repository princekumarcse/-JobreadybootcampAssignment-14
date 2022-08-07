/*7. Write a program to find the second Largest number
 in an array.Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,max,s_max,a[10];
    printf("Enter 10 Numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<9;i++)
         {
             if(a[i]>max)
                 max=a[i-1];  
         }
         printf("Second largest is: %d\n ",max);
     return 0;
}