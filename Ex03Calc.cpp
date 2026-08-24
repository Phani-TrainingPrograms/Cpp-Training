#include<iostream>
using namespace std;

string displayMenu(){
    cout<<"Welcome to Calc Program"<<endl;//end the line.
    cout<<"Press 1 for Addition"<<endl;
    cout<<"Press 2 for Subtraction"<<endl;
    cout<<"Press 3 for Multiplication"<<endl;
    cout<<"Press 4 for Division"<<endl;
    string choice;
    cin >> choice;
    return choice;
}

//A function is typically created to segregate a block of code that is reused across the application.
int takeInputFromUser(){
    //declare a variable to tell that the input shall be stored here.
    int num1;
    cout<<"Enter the number to calculate:"<<endl;
    cin >> num1;
    return num1;//return this value to the main function.
    //NOTE: Modern C++ allows to create a variable without declaring it, It is called as auto variables.
}

int performCalc(int num1, int num2, string choice){
  int result = 0;//Its allowed in C++ to declare a variable and assign a value to it in the same line.
  if(choice == "1"){
      result = num1 + num2;
  }
  else if(choice == "2"){
      result = num1 - num2;
  }
  else if(choice == "3"){
      result = num1 * num2;
  }
  else if(choice == "4"){
      result = num1 / num2;
  }
  else{
      cout<<"Invalid choice"<<endl;
  }
  return result;
}
//This is the place where UR program starts and terminates.
int main(){
    string choice = displayMenu();
    int num1 = takeInputFromUser();
    int num2 = takeInputFromUser();

    int result = performCalc(num1, num2, choice);
    cout<<"The result is: " << result << endl;
    return 0;
}
