/* rows and columns using arrays */
#include<stdio.h>
void main()
{
    int i,j,row,col;
    scanf("%d%d",&row,&col);
    int arr[row] [col];
    for(i=0;i<row;i++)
    for (j=0;j<col;j++)
    scanf("%d",&arr[i] [j]);
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    printf("%d",arr[i] [j]);
    printf("\n");
    }
}
