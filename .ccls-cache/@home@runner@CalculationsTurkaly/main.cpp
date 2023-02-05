/*
Trevor
Turkaly
COSC1436
replit
This program is used to use and understand labeling double and int variables along with running all of the basic mathematical processes in c++ and using if statements
*/

#include <iostream>

int main() {
    //making variables
    double number1,number2;
    int number3,number4;
    
    double addition,subtraction,multiplication,division;
    
    int modulus;
    //input
std::cout<<"Enter number 1 : ";
std::cin>>number1;
std::cout<<std::endl;

std::cout<<"Enter number 2 : ";
std::cin>>number2;
std::cout<<std::endl;


std::cout<<"Enter number 3 : ";
std::cin>>number3;
std::cout<<std::endl;

std::cout<<"Enter number 4 : ";
std::cin>>number4;
std::cout<<std::endl;

//mathematic processes
//add 
addition = number1 + number2;
std::cout<<"The addition of the number 1 and number 2 is = "<<addition<<std::endl;

//subtract 
subtraction = number1 - number2;
std::cout<<"The difference between the number 1  number 2 is = "<<subtraction<<std::endl;

//Multiply 
multiplication = number1 * number2;
std::cout<<"The product of  number 1 and number 2 is = "<<multiplication<<std::endl;

//Divide 
// run if statement before 
if (number2 == 0) {
  std::cout<<"Division by 0 is not permitted in math";
}

division = number1 / number2;
std::cout<<"The quotient of number 1 and number 2 is = "<<division<<std::endl;


//Modulus
//run if statement before
if (number4 == 0) {
  std::cout<<"Division by 0 is not permitted in math";
}
modulus = number3 % number4;
std::cout<<"The modulo of number 3 and number 4 is = "<<modulus<<std::endl;

    return 0;
}
