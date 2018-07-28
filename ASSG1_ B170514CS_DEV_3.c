/*3. Write a program that finds the largest odd integer in the array of integers.
Input: 
Output: 
Size of the array  
Array Elements
The largest odd integer is   
6
3, 678, 345, 876,   29,14
345
*/
#include<stdio.h>
void f(int a[],int n);

int main()
{
int n;
printf("enter the size of array");
scanf("%d",&n);
int a[n];
	for(int k=0;k<n;k++)
	{
	printf("enter the array elements");
	scanf("%d",&a[k]);
	}
f(a,n);
	for(int x=(n-1);x>=0;x--)
	{
	if(a[x]%2!=0)
	{
	printf("largest odd integer is %d",a[x]);
	break;
	}
	}
for(int l=0;l<n;l++)
printf("%d",a[l]);
}






void f(int a[],int n)
{
int z;
for(int i=0;i<(n-1);i++)
{
	for(int j=0;j<n-(j+1);j++)
	{
	if(a[j]>a[j+1])
	{
	z=a[j];
	a[j]=a[j+1];
	a[j+1]=z;
	}
	}
}
}
