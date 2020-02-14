/* max elements in a row and column */
#include<stdio.h>
void main()
{
    int i,j,row,col,max;
    scanf("%d%d",&row,&col);
    int arr[row] [col];
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    scanf("%d",&arr[i][j]);
    for(i=0;i<row;i++)
    {
        max=arr[i][0];
        for(j=0;j<col;j++)
        {
            if(max<arr[i][j])
            max=arr[i][j];
        }
        printf("%d",max);
        printf("\n");
}
}