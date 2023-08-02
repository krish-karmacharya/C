#include<stdio.h>
int main(){
    int i,j,A[10][10],B[10][10],r,c,sum;
    printf("Enter the number of rows and columns of the matrix A\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of A; \n");
    for (i=0;i<r;i++){
    	for(j=0;i<c;i++){
    		scanf("%d",&A[i][j]);
		}
	}
	printf("Matrix A is \n");
	 for (i=0;i<r;i++){
    	for(j=0;i<c;i++){
    		printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	//for matrix b
	printf("Enter the number of rows and columns of the matrix B\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of B; \n");
    for (i=0;i<r;i++){
    	for(j=0;i<c;i++){
    		scanf("%d",&B[i][j]);
		}
	}
	printf("Matrix B is \n");
	 for (i=0;i<r;i++){
    	for(j=0;i<c;i++){
    		printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	sum=A[i][j]+B[i][j];
	printf(sum);
}