#include<stdio.h>
void pattern1(int n){
    for (int row = 1 ; row <= n;  row++){
        // for every row, run col
        for( int col=1; col <= row; col++){
            printf("* ");
        }
        printf("\n");
    }
} 
void pattern2(int n){
    for (int row = 1 ; row <= n;  row++){
        // for every row, run col
        for( int col=1; col <= n; col++){
            printf("* ");
        }
        printf("\n");
    }
}
void pattern3(int n){
    for (int row = 1 ; row <= n;  row++){
        //Here the loop runs for 4 times then the value of row becomes 4
        //here 4 
        for( int col=1; col <= n-row+1; col++){
            printf("* ");
        }
        printf("\n");
    }
}
void pattern4(int n){
    for (int row = 1 ; row <= n;  row++){
        for( int col=1; col <= row; col++){
            int val = col;
            printf( "%d ",val);
        }
        printf("\n");
    }
}
void pattern5(int n){
    for (int row = 0 ; row < 2*n;  row++){
        int totalColsInRow = row > n ? 2*n -row : row;
        for( int col=0; col < totalColsInRow; col++){
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    int n = 4;
    //pattern1(n);
    //pattern2(n);
    //pattern3(n);
    //pattern4(n);
    pattern5(n);
    return 0;
}