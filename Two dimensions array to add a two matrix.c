#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,n,m;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the limit:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the value a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the value b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
           printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    /*output
    Enter the limit:2
Enter the limit:2

Enter the value a[0][0]:10

Enter the value a[0][1]:20

Enter the value a[1][0]:30

Enter the value a[1][1]:40

Enter the value b[0][0]:10

Enter the value b[0][1]:20

Enter the value b[1][0]:30

Enter the value b[1][1]:40
        20      40
        60      80
*/
}
