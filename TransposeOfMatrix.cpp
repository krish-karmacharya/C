#include<stdio.h>
int main(){
	int A[3][3],T[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf ("The matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d \t",A[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		T[i][j]=A[j][i];
		}
		printf("\n");
	}
	printf("The transpose of the givenmatrix is : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d \t",T[i][j]);
		}
		printf("\n");
	}
	return 0;
}
