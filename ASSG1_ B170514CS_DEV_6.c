/*6. Write a program that reads two one dimensional arrays of ‘n’ integers and two
additional integers ‘x’ and ‘y’.  Replace each occurrence of ‘x’ with ‘y’ in the given
array.  Print the resultant array. Print ‘NOT FOUND’ if ‘x’ is not present in the
given array.
Input:
Output:
Size of the array
Array Elements
 
Enter the element to be replaced  
Enter the element to be inserted  
Resultant array is  

 
5
345, 234, 678, 987, 234
234
593
345, 593, 678, 987, 593Input:
Output: 
Size of the array
Array Elements
 
Enter the element to be replaced
Enter the element to be inserted
230 is ‘NOT FOUND’ in the array.
5
345, 234, 678, 987, 234
230
593
*/#include<stdio.h>
int main()
{
int n,b,c,d,e;
printf("enter Size of the array");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
printf("enter array elements");
scanf("%d",&a[i]);
}
printf("Enter the element to be replaced ");
scanf("%d",&c);

e=0;

for(int j=0;j<n;j++)
{
	if(c==a[j])
{a[j]=d;e=1;}
}
if(e!=1)
printf("%d is NOT FOUND in the array",c);
else
{
for(int k=0;k<n;k++)
printf("%d ,",a[k]);
}

}
