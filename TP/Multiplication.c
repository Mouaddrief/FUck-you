#include <stdio.h>

int main(){

int i,number,res;

printf("add the number you want : ");
scanf("%d",&number);



while (number <1 || number > 10)
{
    printf("Please add a number between & 1 to 10 :");
    scanf("%d",&number);
}
for ( i = 1; i < 11; i++)
{

  res = i * number  ;
  printf("%d x %d = %d\n",number,i,res);
}













    return 0;
}