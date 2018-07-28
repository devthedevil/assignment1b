/*
10. Write a program that cyclically permutes the elements of an array of integers. In
the   Cyclic   Permutation   of   an   array,   the   first   element   becomes   last   element,
second element becomes first element, third element becomes second element,
and so on.
Input:
Output: 
Size of the array              5
Array Elements			 3, 40, 100, 68, 25
Cyclically Permuted array is	40, 100, 68, 25, 3
*/
#include<stdio.h>
int main()
{
int n,temp;
printf("enter Size of the array");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
	printf("enter array elements");
	scanf("%d",&a[i]);
}
temp=a[0];
for(int i=0;i<(n-1);i++)
{
	
	a[i]=a[i+1];
	
}
a[n-1]=temp;
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
