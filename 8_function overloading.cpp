#include <iostream>
using namespace std;

//function to add two intergerss
int add (int a , int b){
  return a+b;
}

//overloading function to add two double values
double add(double a , double b){
  return a + b;
}

int main (){
  //using the add functions with integer arguments 
  int intResult = add(10,20);
  cout <<"sum of intergers 10 and 20:"<<intResult << endl;

//using the add function with double arguments 
double doubleResult = add(5.5 , 7.8);
cout << "sum of double 5.5 and 7.8 : "<< doubleResult<< endl;

return 0 ;
}