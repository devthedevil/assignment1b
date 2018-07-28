
/*
8. 
Write   a   program   that   reads   two   integer   arrays   A   and   B   of   size   ‘m’   and   ‘n’
respectively.   Merge   arrays   A   and   B   into   a   single   array   by   avoiding   repeated
elements. Print the resultant array.
Input:
Output: 
Size of the first array
Array Elements 
 
Size of the second array  
Array Elements
Merged array 
5
5, 15, 8, 50, 40
7
8, 50, 10, 2, 15, 5, 7
5, 15, 8, 50, 40, 10, 2, 7
*/#include<stdio.h>


	
int main()

{
	int  n  , i , m , j , countb=0 , counta=0;
 
	printf("\nPlease enter the size of first array\nn=");
	scanf("%d",&n);
	int A[n];

        if(n>0)
        {
		

		printf("\nPlease enter the elements of the array\n");
		for(i=0 ; i<n ;i++)
		scanf("%d",&A[i]);
       }
        else
   	printf("error!!\nArray size should be positive number \n");
		printf("\nPlease enter the size of second array\nn=");
		scanf("%d",&m);
		int B[m];
		if(m>0)
		{
			
			printf("\nPlease enter the elements of the array\n");
			for(i=0 ; i<m ;i++)
			scanf("%d",&B[i]);
			
		
			for(i=0;i<n;i++)
				for(j=0;j<m;j++)
				{
					if(A[i]==B[j])
					{
						B[j]=-32474;
						countb++;
					}
				}

			for(i=0;i<n;i++)
				for(j=i+1;j<n;j++)
				{
					if(A[i]==A[j])
					{
						A[j]=-32474;
						counta++;
					}
				}
				int C[m+n];
			for(i=0 ,j=0; i<(n-counta) ;j++,i++)
				if(A[i]!=-32474)
					C[j]=A[i];
				else
					j--;


			for(i=n-counta,j=0;j<m;i++,j++)
				if(B[j]!=-32474)	
					C[i]=B[j];
				else
					i--;
			
                        for(int x=0;x<(m+n-counta-countb) ;x++)
				for(int y=(x+1);y<(m+n-counta-countb) ;y++)
				{
				if(C[x]==C[y])
					C[x]=-42474;
				}
			for(i=0 ; i<(m+n-counta-countb) ;i++)
			{if(C[i]!=-42474)
			printf("%8d",C[i]);}
			printf("\n");
			


		}
        else
   		printf("error!!\nArray size should be positive number \n");
	return 0;
	}
	

	
      
