/*6.Write a program to sort elements of an array of size 10.
Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,j,a[10],min;
    printf("Enter 10 Numbers:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<9;i++)
        {
         for(j=i+1;j<10;j++)
         {
             if(a[i]<a[j])
              {
                 min=a[i];
                 a[i]=a[j];
                 a[j]=min;
             }    
         }
        }
     for(i=0;i<=9;i++)
     {
        printf("%d ",a[i]);
     }
     return 0;
}