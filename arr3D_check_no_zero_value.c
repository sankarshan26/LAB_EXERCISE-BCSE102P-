
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int b,r,c;
    printf("Enter the number of blocks for 3D array : ");scanf("%d",&b);
    printf("\nEnter the number of rows for 3D array : ");scanf("%d",&r);
    printf("\nEnter the number of columns for 3D array : ");scanf("%d",&c);
   int sum=0,a[b][r][c];

   // taking 3D array as input from user 
   for(int i=0; i<b; i++) // for controling the number of blocks 
      for(int j=0;j<r;j++) // for controling the number of rows
      	for(int k=0;k<c;k++)
          {
              printf("\nEnter value for a[%d][%d][%d] :",i+1,j+1,k+1); 
              scanf("%d",&a[i][j][k]);
          }
//Checking whether the array has non zero values in a position and printing accordingly
    for(int i=0; i<b; i++)  
      for(int j=0;j<r;j++) 
      	for(int k=0;k<c;k++)
          {
              if(a[i][j][k]==0) printf("\nAt position (%d,%d,%d) array has : non-zero value",i+1,j+1,k+1);
            else printf("\nAt position (%d,%d,%d) array has : zero value",i+1,j+1,k+1);
          }
   
   return 0;
}