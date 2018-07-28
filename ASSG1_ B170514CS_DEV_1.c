/*1. Write a C program that reads an array of n integers and counts the frequency of
each element in the array. Print the frequency of each element in the array.
Input:
Output:
Size of the array(n)
Array Elements 
Frequency of elements 
 
5
2, 4, 2, 5, 4, 2
2   3
4   2
5   1*/
#include<stdio.h>
int main()
{
int n,count,x=0,c;
	printf("enter the size of array");
	scanf("%d",&n);
		long int a[n];
		while(x<n)
		{
		printf("enter the array elements");
		scanf("%ld",&a[x]);x++;}
		for(int i=0;i<n;i++)
		{
			count=0;c=0;
				for(int j=0;j<n;j++)
				{
				if(a[j]==a[i]) count++;
				}
				for(int k=0;k<i;k++)
				{
				if(a[i]==a[k]) c=1;
				}
					if(c==1) continue;
				printf("%ld %d\n",a[i],count);
				}
}

