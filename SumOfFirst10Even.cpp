#include<stdio.h>
int main(){
    int sum = 0 , count = 0 ,number = 2;
    while (count<10)
    {
        sum+=number;
        number+=2;
        count++;
    }
   printf("The sum of first 10 even number is : %d\n",sum);
   return 0; 
}