#include <iostream>
using namespace std;

int main(){
  int n , sum = 0;
  
  //input the value of n from the user 
  cout << "Enter a positive integer :" << endl;;
  cin >> n;
  
  //calculate the sum of natural numbers from 1 to n
  for (int i = 1; i <=n; i++){
    sum +=i;
  }
  
  //display the result 
  cout << "The sum of natural number from 1 to"<<n<<" is:"<< sum << endl;
  
  return 0;
}