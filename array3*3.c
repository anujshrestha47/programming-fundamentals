/*
name:anuj shrestha
subject:programming fundamental
program:wap to declare and print multi dimensional array.
3*3
lab sheet no:22
date:3rd feb
*/

#include<stdio.h>
int main()
{
int array [3][3]={1,2,3,4,5,6,7,8,9},i,j; 

    for (i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
  {
  printf("%d \t",array[i][j]);
  }
  printf("\n");
  }
return 0;
}

