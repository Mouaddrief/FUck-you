#include <stdio.h>
#include <math.h>

int main(){
//todo with for
/*int number , i,Res;

printf("Add number :");
scanf("%d",&number);

for ( i = 1; i <= 10; i++)
{
    Res = number + i;
    printf("%d ",Res);
}*/

//? with while

/*int number, i ;

printf("Add number :");
scanf("%d",&number);
i = number+1;
while (i<=number+10)
{
    
    printf("%d\n",i);
    i++;
}*/

//! Do while

/*int number,i;

printf("Add number :");
scanf("%d",&number);
i = number + 1;
do
{
    printf("%d\n",i);
    i++;
} while ( i <= number+10);*/


/*int n;
float s,i ;

    printf("Add value :");
    scanf("%d",&n);

    s = 0;
for ( i = 1; i <= n; i++)
{
    s = s + ( 1 / i) ;
}
printf("%.2f", s);*/


   /* int n, i;
    float s = 0.0;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        s += 1.0 / i;

    }

    printf("The sum S = %.4f\n", s);*/
    //-----------EX 27-----------------
    
/*int n ,i,s = 0;

    printf("Add value :");
    scanf("%d",&n);
    
for (i = 0; i <= n; i++) {
    s = s + pow(10,i);
}

    printf("the sum of s =%.2d",s);*/
    /*int i, n;
    long long s = 0, p = 1;
    printf("Add value :");
    scanf("%d",&n);
    for (i = 0; i <= n; i++) {
        s += p;
        p *= 10;
    }
    
    printf("the sum of s =%.2lld",s);*/

/*int Number, i, res = 1 ;

    printf("Add a number : ");
    scanf("%d",&Number);

    if (Number <= 0)
    {
        printf("Please add a positif number : ");
        scanf("%d",&Number);
    }

for ( i = 1; i <= Number; i++)
{
    res *= i;
}

    printf("the result is : %d", res);*/


int n ;
float i, res ,n1;
        printf("Add a number : ");
        scanf("%d",&n);

   res =0; 
   n1=1;    
for ( i = 1; i <= n; i++)
{
 res = res + pow(n1,2);
 n1+=2;
}
printf("res : %.2f",res);
















    return 0;
}