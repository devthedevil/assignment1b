/*
7. Write a program that reads a two dimensional array (matrix) of integers with ‘m’
rows and ‘n’ columns. Find the transpose of the matrix and print the matrix. 
Transpose of a matrix is formed by turning all the rows of a given matrix into
columns and vice­versa.
Input: Enter the value of m
Enter the value of n
Elements of the matrix
Output:   1 4
2 5
3 6
 2
 3
1 2 3
4 5 6
 

*/#include<stdio.h>
int main()
{
int m,n;
printf("Enter the value of rows");
scanf("%d",&m);
printf("Enter the value of columns");
scanf("%d",&n);
int a[m][n];
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
	printf("Enter the elements %dth of row",(i+1));
	scanf("%d",&a[i][j]);}
printf("\n");	
}
for(int j=0;j<n;j++)
{
        for(int i=0;i<m;i++)
        {
        printf("%d ",a[i][j]);}
 printf("\n");       
}

}
