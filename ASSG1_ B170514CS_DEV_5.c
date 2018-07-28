/*
5. Write a C program that splits the array of integers at k th   position. Append the
first part of the array to the end of the array and print the resultant array.  Print
‘INVALID INDEX’ if the given position is outside the array index bound.
Input:
Output:
Input: 
Output:
Size of the array
Array Elements
  
Enter the position of the element
to split the array   
Resultant array is      
Size of the array
Array Elements
 
Enter the position of the element
to split the array  
INVALID INDEX   
 6
 3, 678, 345, 876, 29, 14
4
876, 29, 14, 3, 678, 345
6
3, 678, 345, 876, 29,14
10*/
int main()
{
int n,b;
printf("enter Size of the array");
scanf("%d",&n);
int a[n],c[n];
for(int i=0;i<n;i++)
{
printf("enter array elements");
scanf("%d",&a[i]);
}
printf("Enter the position of the element to split the array");
scanf("%d",&b);   
if(b<=n)
{
for(int j=(b-1),k=0;j<n;j++,k++)
c[k]=a[j];
for(int j=0,k=(n-b+1);j<(b-1);j++,k++)
c[k]=a[j];

for(int x=0;x<n;x++)
printf("%d ,",c[x]);
}
else
printf("invalid index");
}
