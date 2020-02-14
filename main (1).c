/* even and odd elements in a row */
#include<stdio.h>
void main()
{
    int i,j,row,col,even,odd;
    scanf("%d%d",&row,&col);
    int arr[row] [col];
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    scanf("%d",&arr[i][j]);
    for(i=0;i<row;i++)
    {
        even=0,odd=0;
        for(j=0;j<col;j++)
    {
        if(arr[i][j]%2==0)
        even++;
        else
        odd++;
    }
     printf("%d %d",even,odd);
     printf("\n");
    }
}
    