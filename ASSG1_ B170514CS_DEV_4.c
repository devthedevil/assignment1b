/*4. Write a C program that reads an array of n integers and finds the sum of the
contiguous subarray, which has the largest sum in the array. Print the largest
sum, start index and end index of the contiguous subarray.  Contiguous subarray
is a continuous series of elements in the array.
Input:       Size of the array(n)   
       8
        Array Elements
       10, ­2, 15, 9, ­8, 12, 20, ­5
Output:    The Largest sum is 56 and the subset index begins at 0 and ends at 6
Input:       Size of the array(n)  
       6
        Array Elements
 
        3, 34, ­4, 12, ­5, 2
Output:    The Largest sum is 42 and the subset index begins at 1 and ends at 3 
*/
#include<stdio.h>
int main()
{
int n,j,sum1,sum,maxsum,final,initial;
printf("enter the size of array");
scanf("%d",&n);
int a[n];
for(int k=0;k<n;k++)
{
printf("enter the array elements");
scanf("%d",&a[k]);
}
maxsum=0;
for(int i=0;i<n;i++)
{sum=0;
	for(int j=i;j<n;j++)
	{
	sum=sum+a[j];
	if(sum1<sum)
	{
	sum1=sum;
	initial=i;final=j;
	}
	}
	if(maxsum<sum1)
	{
	maxsum=sum1;
	initial=i;final=j;
	}
	}
printf("The Largest sum is %d and the subset index begins at %d and ends at %d",sum1,initial,final);
	
	
}
