#include<iostream>
using namespace std;

//Base class Vehicle
class Vehicle {
  public:
  void vehicle() {
    cout << "I am a vehicle" << endl;
  }
};

class FourWheeler : public Vehicle {
  public:
  void fourWheeler() {
    cout << "I have Four Wheels" << endl;
  }
};

class Car : public FourWheeler {
  public:
  void car() {
    cout << "I am a car" << endl;
  }
};

int main() {
  //Create an object of Class Car
  Car mycar;
  
  //Call methods of Car, FourWheeler, and Vehicle through Car object
  mycar.car();
  mycar.fourWheeler();
  mycar.vehicle();
  
  return 0;
}