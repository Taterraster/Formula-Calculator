#include <iostream>
#include <cmath>
void standardCalculator(char op,int num1, int num2);
int main(){
  int operation;
  std::cout<<"1. Standard Calculator\n";
  std::cin>>operation;
  switch(operation){
    case 1:
      int num1;
      int num2;
      char op;
      std::cout<<"Enter first number: ";
      std::cin>>num1;
      std::cout<<"Enter second number: ";
      std::cin>>num2;
      std::cout<<"Enter operator(+,-,/,*): ";
      std::cin>>op;
      standardCalculator(op,num1,num2);
    break;
  }
}
void standardCalculator(char op,int num1, int num2){
  switch(op){
    case'+':
       std::cout<<"Result: "<<num1+num2;
    break;
    case'-':
       std::cout<<"Result: "<<num1-num2;
    break;
    case'*':
       std::cout<<"Result: "<<num1*num2;
    break;
    case'/':
       std::cout<<"Result: "<<num1/num2;
    break;
    default:
      std::cout<<"Error";
    break;
  }
}
