#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main()
{
 // calculate the distance between a & b

 /*int Power,squar,A;
    A = 6;
    Power = pow(A,2);
    squar = sqrt(Power);
    printf("%d\n",Power);
    printf("%d",squar);*/




    /*int Xa,Xb,Ya,Yb,Distance;
    // Interface code
    printf("Please add the Xa value: ");
    scanf("%d",&Xa);
    printf("Please add the Xb value: ");
    scanf("%d",&Xb);
    printf("Please add the Ya value: ");
    scanf("%d",&Ya);
    printf("Please add the Yb value: ");
    scanf("%d",&Yb);

    // Calculation code

    Distance = sqrt (pow((Xb - Xa),2) + pow((Yb - Ya),2));
    printf("La distance enter a et b equal : %d ",Distance);*/

    //---------------------------------------------------------
    // Exrecice de Air

    /*const float Pi = 3.14;
    int Rayon , Puissance;
    float Air;
    // interface
    printf("Please add the Rayon :");
    scanf("%d",&Rayon);
    printf("Please add the Puissace :");
    scanf("%d",&Puissance);


    // Calcule code

    Air = (4 * Pi *  pow(Rayon,Puissance)) / 3 ;
    printf("l\'Air egual a : %d",Air);*/
    //---------------------------------------

    //Exrecice Change les places

   /* int a , b , c;

printf("Please add the value of A");
scanf("%d",&a);
printf("Please add the value of B");
scanf("%d",&b);
    c = a;
    a = b;
    b = c;
printf("%d,%d",a,b);*/

 //----------------------------------
 //Excrice Change value without using third partie

 /*int a,b;

    printf("Please add the value of A & B : ");
    scanf("%d %d",&a,&b);

    a = (a + b);
    b = (a - b);
    a = (a - b);

    printf("The value of A: %d \n The value of B : %d",a,b);*/

 //-----------------------------------------------------------
 //Exercice : the user will give a number and up to us to give if possitif or negative$*

 /*int Number;

 printf("Add a number :");
 scanf("%d",&Number);

 if(Number> 0){

    printf("Positif");
}else if(Number == 0){
    printf("Null");

}else
    printf("Negative");*/

//---------------------------
//Exrecice = check if the values a & b are both have the same sign


/*int a,b;

    printf("Please add the value of a :");
    scanf("%d",&a);
     printf("Please add the value of b :");
    scanf("%d",&b);

    //code

    if(a * b > 0){
       printf("the value have same sign");


    }else

    printf("Sohail");*/
    //------------------------------
    //ex: the same as the previous only this time if it they have same sing ,
    //change places if not a should equal a+b & b = a*b

/*int a,b ;
    printf("Please add the value of a : ");
    scanf("%d",&a);
    printf("Please add the value of b : ");
    scanf("%d",&b);
    // code

    if(a * b > 0){

      a = a + b;
      b = a - b;
      a = a - b;
       printf("new value of \n A : %d \n B : %d",a,b);

    }else{

      printf("Calculated value of A : %d\n ",a+b);
      printf("Calculated value of B : %d",a*b);
    }*/
//---------------------------------------------------
//Exrecice :
    // create a login interface
    // mail : Maaz@gmail.com  , password : 1234
//exemple of the declaration of a charectere and a  chain of characteres
/*char Sexe = 'h';
        printf("Your gender is: %c\n",Sexe);


char Name[150] = "Mouad";
        printf("Your name is: %s",Name);*/


        //interface :
   /* char Mail[20],password[10],Mailuser[20],passworduser[10];
        Mail[20] ="Maaz@gmail.com";
        password[10] ="1234";
            printf("Please add your mail :");
            scanf("%s",Mailuser);
            printf("Please add your Password :");
            scanf("%s",passworduser);


        // Backend code


   if("Maaz@gmail.com" == Mailuser[20]) {
     //if (strcmp(Mail, Mailuser) == 0 && strcmp(password, passworduser) == 0) {
        printf("Login in succesefully");

    }else{
        printf("User or password are wrong");

    }*/


    //-------------------------------------
    // exercice 14 Liberary photocopie

    //interface
    /*int Nombre_des_copies;
    float Prix_a_paye;

    printf("Add Nobmre des copies : ");
    scanf("%d",&Nombre_des_copies);

    //Condition code
    if(Nombre_des_copies <= 10){
        Prix_a_paye = Nombre_des_copies * 0.30;
        printf("Prix a paye : %.2f dh",Prix_a_paye);

    }else if ((Nombre_des_copies <= 20) && (Nombre_des_copies > 10) ){
        Prix_a_paye = Nombre_des_copies * 0.25;
        printf("Prix a paye : %.2f dh ",Prix_a_paye);

    }else{
        Prix_a_paye = Nombre_des_copies * 0.20;
        printf("Prix a paye : %.2f dh",Prix_a_paye);

    }*/

//------------------------------
// exercice : Programm that solves the delta equation
            // Delta = b² - 4ac


 /*int a,b,c;
 float Delta,x1,x2,res;

        printf("Add A value :");
        scanf("%d",&a);
        printf("Add B value :");
        scanf("%d",&b);
        printf("Add C value :");
        scanf("%d",&c);

// COde of calcule
   Delta = pow(b,2) - (4*a*c);

if(Delta < 0){
    printf("Delta equal %.2f,solution \n Ensseble vide ",Delta);


   }else if(Delta == 0){
       res = (-b / 2*a);
       printf("Delta equal %.2f, alors res = \n %.2f",Delta,res);



   }else{
        x1 = (-b - sqrt(Delta)) / 2*a;
        x2 = (-b + sqrt(Delta)) / 2*a;
        printf("Delta equal%.2f, solution \n x1 = %.2f \nx2 = %.2f ",Delta,x1,x2);

   }*/

    //---------------------------------

    /*int a,b;
    int res;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
       res = a%b;
      printf("a %% b = %d \n",res);


  printf("a+b =%d\n",a+b);
  printf("a-b =%d\n",a-b);
    printf("a*b =%d\n",a*b);
      printf("a/b =%d",a/b);*/


// -----------------------
/*int a;
printf("value a =");
scanf("%d",&a);
 //a = a%2;
 if(a%2){

    printf("fardi");
 }else{
 printf("zawji");
 }*/

 // ------------------------------------------

 // example for switch with souhail


/*swtich(example_swtching){
    case example_number : Example_result;
                            break;
                        ..ect
    default : example;
            break;
}*/

// -------------------------------
/*int Number_of_week;

printf("add number of the day = ");
scanf("%d",&Number_of_week);

switch(Number_of_week){

    case 1 : printf("Lundi");
                    break;
    case 2 : printf("Mardi");
                    break;
    case 3 : printf("Mer");
                    break;
    case 4 : printf("Jeu");
                    break;
    case 5 : printf("VEn");
                    break;
    case 6 : printf("Sam");
                    break;
    case 7 : printf("Di");
                    break;

    default : printf("Out of week range");
            break;



}*/

//---------------------
//ex : Create a simple calculator


/*int First_number,Second_number;
char Adding;

    printf("Add First number = ");
    scanf("%d",&First_number);
    printf("Add Second number = ");
    scanf("%d",&Second_number);
    printf("choose calculation = ");
    scanf(" %c",&Adding);


  if(Adding =='+' ) {

       printf("Result is  = %d",First_number+Second_number);
    }else if(Adding == '-'){
    printf("Result is  = %d",First_number-Second_number);
    }else if(Adding == '/'){
    printf("Result is  = %d",First_number/Second_number);
} else if (Adding == '*'){
    printf("Result is  = %d",First_number*Second_number);

}else   {
    printf("Please choose a valid operation");
}*/


/*int  First_number,Second_number;
char Adding;

    printf("Add First number = ");
    scanf("%d",&First_number);
    printf("choose calculation = ");
    scanf(" %c",&Adding);
    printf("Add Second number = ");
    scanf("%d",&Second_number);


    switch (Adding){

        case '+' : printf("Value of + is = %d",First_number+Second_number);
            break;
        case '-' : printf("Value - is = %d",First_number-Second_number);
            break;
        case '*' : printf("Value * is = %d",First_number*Second_number);
            break;
        case '/' : if(Second_number != 0) {
             printf("Value / is = %d",First_number/Second_number);

        } else{
        printf("Impossible to devide on 0");

        }
                    break;

            default : printf("Sign is out of rang");
                        break;
}*/

//----------------------------------------------
//EX = Import

/*int Age;
char Sexe;


        printf("Please add your age : ");
        scanf("%d",&Age);
        printf("Please add your Sexe : ");
        scanf(" %c",&Sexe);

  if    ((Age > 20 && Sexe == 'h') || (Age > 18 && Age < 38) && Sexe == 'f')   {

            printf("Your Need to pay Impo");

  }else {
        printf("Out of rang of application");

  }*/


  char  student_name[10];
  char Answer ;
  int Result,Ready;
  //char Answer;

      //printf("Student name : ");
      //scanf("%s",student_name);
      //printf("your name is %s",student_name);

      //If student ready

    printf("Are you ready, 1/yes or 2/no : ");
    scanf("%d",&Ready);
    if  (Ready == 2){
            printf("See you next time");
}else{
      // The Questions part
    // question 1
      printf("Question 1 :\nwhat is 1 + 1 :\n");
      printf(" a:2\n b:0\n c:5\n d:3\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);



      if(Answer == 'a'){

        Result =  5;
        printf("your res %d\n",Result);

      }else{
          Result =  0;
       printf("your res %d\n",Result);
      }
    // question 1
      printf("Question 2 :\nwhat is 2 + 1 :\n");
      printf(" a:2\n b:0\n c:5\n d:3\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);
            if(Answer == 'd'){

        Result = Result + 5;
        printf("your res %d\n",Result);

      }else{
          Result = Result + 0;
       printf("your res %d\n",Result);
      }

// question 3

      printf("Question 3 :\nwhat is 2 + 3 :\n");
      printf(" a:2\n b:0\n c:5\n d:3\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);
            if(Answer == 'c'){

        Result = Result + 5;
        printf("your res %d\n",Result);

      }else{
          Result = Result + 0;
       printf("your res %d\n",Result);

        }
// question 4

      printf("Question 4 :\nwhat is 3 - 3 :\n");
      printf(" a:2\n b:0\n c:5\n d:3\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);
            if(Answer == 'b'){

        Result = Result + 5;
        printf("your res %d\n",Result);

      }else{
          Result = Result + 0;
       printf("your res %d\n",Result);

        }

// question 5

      printf("Question 5 :\nwhat is 3 + 3 :\n");
      printf(" a:2\n b:0\n c:6\n d:3\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);
            if(Answer == 'c'){

        Result = Result + 5;
        printf("your res %d\n",Result);

      }else{
          Result = Result + 0;
       printf("your res %d\n",Result);

        }
// question 6

      printf("Question 6 :\nwhat is 1 + 3 :\n");
      printf(" a:2\n b:0\n c:5\n d:4\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);
            if(Answer == 'd'){

        Result = Result + 5;
        printf("your res %d\n",Result);

      }else{
          Result = Result + 0;
       printf("your res %d\n",Result);

        }
// question 7

      printf("Question 7 :\nwhat is 2 - 3 :\n");
      printf(" a:-1\n b:0\n c:5\n d:3\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);
            if(Answer == 'a'){

        Result = Result + 5;
        printf("your res %d\n",Result);

      }else{
          Result = Result + 0;
       printf("your res %d\n",Result);

        }
// question 8

      printf("Question 8 :\nwhat is 2 + 4 :\n");
      printf(" a:2\n b:6\n c:5\n d:3\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);
            if(Answer == 'b'){

        Result = Result + 5;
        printf("your res %d\n",Result);

      }else{
          Result = Result + 0;
       printf("your res %d\n",Result);

        }
// question 9

      printf("Question 9 :\nwhat is 2 + 0 :\n");
      printf(" a:2\n b:0\n c:5\n d:3\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);
            if(Answer == 'a'){

        Result = Result + 5;
        printf("your res %d\n",Result);

      }else{
          Result = Result + 0;
       printf("your res %d\n",Result);

        }
// question 10

      printf("Question 10 :\nwhat is 0 + 3 :\n");
      printf(" a:2\n b:0\n c:5\n d:3\n");
      printf("Choose one answer : ");
      scanf(" %c",&Answer);
            if(Answer == 'd'){

        Result = Result + 5;
        printf("your res %d\n",Result);

      }else {
          Result = Result + 0;
       printf("your res %d\n\n",Result);

        }

      if(Result >= 25){

        printf("Congradulation you succeded");


        }else
        printf("Better luck next time");


}
    return 0;

}



