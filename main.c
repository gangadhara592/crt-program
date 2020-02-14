/* removing outer elements from array */
#include<stdio.h>
void main()
{
    int i,j,row,col;
    scanf("%d%d",&row,&col);
    int arr[row] [col];
    for(i=0;i<row;i++)
    for (j=0;j<col;j++)
    scanf("%d",&arr[i] [j]);
    for(i=1;i<row-1;i++)
    {
    for(j=1;j<col-1;j++)
    printf("%d   ",arr[i] [j]);
    printf("\n");
    }
}