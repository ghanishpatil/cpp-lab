#include <iostream>
using namespace std;

class Shape{
  public :
  void shape(){
    cout << "This is a shape" << endl;
  }
};

class Polygon : public Shape{
  public :
  void polygon(){
    cout << "Polygon is a shape"<< endl;
  }
};

class Rectangle : public Polygon {
  public :
  void rectangle(){
  
  cout << "Rectangle is a polygon"<< endl;
  }
};

class Triangle : public Polygon {
  public :
  void triangle () {
    cout << "triangle is a polygon" << endl;
  }
};

class Square : public Rectangle {
  public :
  void square (){
    cout << "Square is Rectangle" << endl;
  }
};

int main (){
  Square s1;
  Triangle T1;
  
  s1.square();
  s1.rectangle();
  s1.polygon();
  s1.shape();
  T1.triangle();
  
  return 0;
}