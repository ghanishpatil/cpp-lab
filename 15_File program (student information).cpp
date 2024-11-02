#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void addstudent(){
  ofstream outFile("student.txt, ios::app");   //open file in append
  
  string name;
  int rollno;
  float grade;
  
  cout<<"enter student name"<<endl;
  cin>>name;
  cout<<"enter student roll number"<<endl;
  cin>>rollno;
  cout<<"enter student grades"<<endl;
  cin>>grade;
  
  //Write to file
  outFile<<name<<""<<rollno<<""<<grade<<endl;
  outFile.close();
  cout<<"Student record added! "<<endl;
  
}

void displayInfo(){
  ifstream inFile("student.txt");
  
  string name;
  int rollno;
  float grade;
  
  cout<<"student Records: "<<endl;
  
  while(inFile>>name>>rollno>>grade){
    cout<<"Name: "<<name<<", Roll number: "<<rollno<<", Grade: "<<grade<<endl;
    
  }
  inFile.close();
  
}

void searchstudent(){
  ifstream inFile("student.txt");
  string name, searchname;
  int rollno;
  float grade;
  bool found = false;
  
  cout<<"Enter the student name to search: "<<endl;
  cin>>searchname;
  
  while(inFile>>name>>rollno>>grade){
    if(name == searchname){
      cout<<"student found! name:"<<name<<", Roll number: "<<rollno<<", Grade: "<<grade<<endl;
      found = true;
      break;
    }
  }
  
  if(!found){
    cout<<"Student not found"<<endl;
  }
  inFile.close();
}

int main(){
  int choice;
  do{
    cout<<"1. Add student"<<endl;
    cout<<"2. Display All student"<<endl;
    cout<<"3. Search for student"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice";
    cin>>choice;
    
    if(choice == 1){
      addstudent();
      
    }else if(choice == 2){
      displayInfo();
      
    }else if(choice == 3){
      searchstudent();
      }
    }while(choice != 4);
    
  
  cout<<"Program exited."<<endl;
  return 0;
}