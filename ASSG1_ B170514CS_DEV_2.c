/*2. Write   a   program   that   prints   the   element   at   k th   position   from   an  array   of   ‘n’
integers. Also, delete the element at k th  position from the array and reprint the
array.  Print ‘INVALID INDEX’ when the given position is out of array bound.  
 Input:
 
Output: 
Size of the array(n) 
 
Array Elements
Position(k)  
Element at 4 th  Position is  
Resultant array 
1
5
34, 23, 2, 5, 10
 4
 5
34, 23, 2, 10
*/
#include<stdio.h>
int main()
{
int x=0,b,c,n;
printf("enter the size of array");
scanf("%d",&n);
int a[n];
while(x<n)
{
printf("enter the array element");
scanf("%d",&a[x]);
x++;
}
printf("enter the position");
scanf("%d",&b);
printf("element at %d is %d\n",b,a[b-1]);
for(int i=0;i<n;i++)
{	if(i==(b-1)) continue;
	printf("%d,",a[i]);
}
}

