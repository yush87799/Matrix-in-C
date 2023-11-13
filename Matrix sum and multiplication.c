#include<stdio.h>

int main()
{
	int aditya[3][3], genin[3][3], sum[3][3], multiply[3][3];
	int i, j, k;
	//m(Rows) *n (Column)

	//input matrix1
	printf("Enter values for matrix 1: ");
	            //rows
				for(i=0;i<3;i++)
				  {
				  	//columns
				  	for(j=0; j<3;j++)
				  	{
				  	  scanf("%d", &aditya[i][j]);
				    }
				  }
				  
	//input matrix1
	printf("Enter values for matrix 2: ");
	            //rows
				for(i=0;i<3;i++)
				  {
				  	//columns
				  	for(j=0; j<3;j++)
				  	{
				  	  scanf("%d", &genin[i][j]);
				    }
				  }

    //sum
    for(i=0;i<3;i++)
      {
      	for(j=0;j<3;j++)
      	  {
      	  	sum[i][j]=aditya[i][j]+genin[i][j];
		  }
	  }
	  
    //multiply
    for(i=0;i<3;i++)
      {
      	for(j=0;j<3;j++)
      	  {
      	  	for(k=0;k<3;k++)
      	  	  {
      	  	  	multiply[i][j]=0; 
      	  	    multiply[i][j]=multiply[i][j]+aditya[i][k]*genin[k][j];
      	      }
		  }
	  }
	  
    printf("\n");
			  
    //show sum of matrix
    printf("Sum of Matrix:\n");
			//rows
			for(i=0;i<3;i++)
			  {
			  	//columns
			  	for(j=0; j<3;j++)
			  	{
			  	  printf("%d ", sum[i][j]);
			    }
			    printf("\n");
			  }
			  
    printf("\n");

    //show multplication of matrix
    printf("Multiplication of Matrix:\n");
			//rows
			for(i=0;i<3;i++)
			  {
			  	//columns
			  	for(j=0; j<3;j++)
			  	{
			  	  printf("%d ", multiply[i][j]);
			    }
			    printf("\n");
			  }
	  
	return 0;
}
