 AREA AND PERAMETER OF SQUARE
// // #include <stdio.h>
//  void main(){
//     int side,perimeter,area;

//     printf("Enter the two times side :");
//     scanf("%d %d",&side,&side);

//     area=side*side;
//     perimeter=4*side;

//     printf("area of square is %d \n",area);
//     printf("perimeter of square is %d",perimeter);

//  }/


/GREATEST NUMBER

// #include<stdio.h>
// void main(){
//     int num1,num2,num3;

//     printf("entre num1,num2 and num3 :");
//     scanf("%d %d %d",&num1,&num2,&num3);

// if(num1>=num2 && num1>=num3){
//     printf("num1 is greater");}
// else if(num2>=num1 && num2>=num3)
//    {printf("num2 is greater");
// }
// else{printf("num3 is greater");
// }
// }


COMPARE TWO NUMBERS GREATER OR SMALLER
// #include<stdio.h>
// void main(){
//     int num1,num2;

//     printf("entre num1 :");
//     scanf("%d",&num1);

//     printf("entre num2 :");
//     scanf("%d",&num2);

//    if(num1>=num2 ){
//     printf("num1 is greater");}

// else{printf("num2 is greater");
// }
// }

EVEN OR ODD

// #include<stdio.h>
// void main(){
//     int number;
    
//     printf("enter the number :");
//     scanf("%d",&number);

//     if(number%2==0){
//         printf("number is even");}
//          else {
//         printf("number is odd");
//     }

// }


FACTORIAL OF A NUMBER
//write a program to find out the factorial of any number
// #include <stdio.h>
// void main() {
//     int num, i;
//      long long fact = 1;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for(i = 1; i <= num; i++) {
//         fact = fact * i;
//     }

//     printf("Factorial of %d is %lld", num, fact);

// }

SUM OF ALL DIGITS

//WAP to find out the sum of all the digits of any  number
// #include <stdio.h>
// void main() {
//     int n,digit,sum=0;

//     printf("enter the n :");
//     scanf("%d",&n);
   
//     while(n!=0)
//     {
//        digit=n%10;
//        sum=sum+digit;
//        n=n/10;
//     }
//     printf("%d",sum);
// }

REVERSE OF ANY NUMBER
// WAP to find out the reverse of any number

// #include <stdio.h>
//  void main() {
//      int num, reverse = 0, remainder;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         remainder = num % 10;           // Get last digit
//         reverse = reverse * 10 + remainder; // Build reversed number
//         num = num / 10;                 // Remove last digit
//     }

//     printf("Reversed number = %d\n", reverse);
// }

 
PALLINDRONE
// WAP to check a number is pallindrone or not
//  #include <stdio.h>
// void main() {
//    int num, reversed = 0, remainder, original;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//    original = num; // store original value
//    while (num != 0) {
//        remainder = num % 10; // extract last digit
//        reversed = reversed * 10 + remainder; // build reversed number
//        num =num/10; // remove last digit
//    }
//    if (original == reversed)
//        printf("%d is a palindrome.\n", original);
//    else
//        printf("%d is not a palindrome.\n", original);
   
// }


SIMPLE CALCULATOR
// wap to create a simple calculator perform addition,subtraction,multiplication,division depending the input fro the user
// #include <stdio.h>                           
// void main(){                                
//     char operator;
//     double num1,num2;

// printf("Enter operator (+,-,*,/): ");
// scanf(" %c", &operator);

// printf("Enter two numbers: ");
// scanf("%lf %lf", &num1, &num2);

// switch (operator){

//     case '+':
//     printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
//     break;

//     case '-':
//     printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
//     break;

//     case '*':
//     printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
//     break;

//     case '/':
//     if (num 1/num2){
//     printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);}
//     else {printf("no division");}
//     break;

//     default:
//     printf("Invalid operator");
// }
// }






// WAP to find out the adition of two number with the help of functionwith parameter and with return value.
// #include <stdio.h>//if a function will return any value then return datatype of a function will be the datatype of a variable which a function will return

// int add(int , int);

// void main()
// {
//     int a,b,c;

//      printf("Enter the value of a and b :");
//       scanf("%d %d", &a , &b);

//     add(a,b);// function calling
// }

// void add() // function definition
//   {   

//     c = a + b;
     
//     printf("%d",c);
//   }




// WAP to calculate a gross salery of an employee where DA=50% of basic salery,
// HRA=35% of basic salery
// #include<stdio.h>
// void main(){
//     int BS;
//     float DA,HRA,GS; //DA=50% of basic salery  , DA=50/100*BS ,=DA=0.5*BS
//                      //HRA=35% of basic salery , HRA=35/100*BS ,= HRA=0.35*BS

//     printf("Enter the BS :");
//     scanf("%d",&BS);

//     DA=0.5*BS;
//     HRA=0.35*BS;
//     GS=BS+DA+HRA;
    
//     printf("%f",GS);

//}



// #include <stdio.h>

// void main() {
//     int a, b, temp;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
    

//     printf("Before swapping: a = %d, b = %d\n", a, b);

//     // Swapping with the help of third variable
//     temp = a;
//     a = b;
//     b = temp;

//     printf("After swapping: a = %d, b = %d", a, b);

// }


// #include <stdio.h>

// void main() {
//     int a, b;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     printf("Before swapping: a = %d, b = %d\n", a, b);

//     // Swapping without third variable (using arithmetic)
//     a = a + b;  // sum of both
//     b = a - b;  // (a+b) - b = a
//     a = a - b;  // (a+b) - a = b

//     printf("After swapping: a = %d, b = %d\n", a, b);

// }
