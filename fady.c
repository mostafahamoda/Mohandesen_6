#include<stdio.h>
int fact(unsigned int num_1);
int main(){
int num_1;
int sum=0;
printf("Enter The Number :");
scanf("%i",&num_1);
sum=fact(num_1);
printf("%i",sum);

}
int fact(unsigned int num_1){
    int f =1;
    for(int count =1;count <=num_1;count++){

       f=count*f;

     }
return f;
}