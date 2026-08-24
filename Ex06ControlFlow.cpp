#include<iostream>
using namespace std;

//Apps execute sequentially. Line by line, some times U have to take decisions based on value selected by the user and move to another set of statements rather than sequential execution. U control the way the program runs. C++ comes with 3 control flow statement types: Conditional, Looping and Jump. =
//Conditional: if-else, switch-case
//Loops: for, while, do-while.
//Jump: return, break, continue, goto.


void if_else_example(){
    int x = 0;
    cout<<"Enter the value for x: ";
    cin>>x;
    if(x == 5) //use {} if U want to execute multiple statements....
        cout<<"X value is 5"<<endl;
    else//else is optional
        cout<<"X value is not 5"<<endl;
}

void if_elseIf_example(){
    int x = 0;
    cout<<"Enter the value for x: ";
    cin>>x;
    if(x < 5) //use {} if U want to execute multiple statements....
        cout<<"X value is Lesser than 5"<<endl;
    else if(x > 5 && x <= 20)
        cout<<"X is within the range of 6 to 20"<<endl;
    else if(x > 20 && x <=100 )
        cout<<"X is within the range of 21 to 100"<<endl;
    else//else block if none of the above conditions are met....
        cout<<"X value is not 5"<<endl;
}
//Ternary operator is used to assign a value based on a condition. It is a simplified version of if..else condition...
void ternaryOperatorExample(){
    int x = 10;
//    if(x == 10){
//        cout<<"X value is equal to 10"<<endl;
//    }else{
//    cout<<"X value is not equal to 10"<<endl;
//    }
    cout <<(x == 10 ? "X value is equal to 10" : "X value is not equal to 10");
}
//Names of the functions are case-sensitive.
void switch_case_example(){
  //this shall execute one block of statement from multiple options based on the value of the expression. Unlike C#, string based Case is not considered in traditional C++.
  int x = 10;
  switch(x){//based on the value of x we will provide cases...
      case 5: cout<<"value of x is 5";break;
      case 10: cout<<"value of x is 10";break;
      case 15: cout<<"value of x is 15";break;
      case 20: cout<<"value of x is 20";break;
      default:
        cout<<"Not a valid value to select";
  }

//break is a jump statement that is used to exit the block after a condition is met.
}
int main(){
    //if_else_example();
    //if_elseIf_example();
    //ternaryOperatorExample();
    switch_case_example();
    return 0;
}
