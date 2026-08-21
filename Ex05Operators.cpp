//In C++, we use operators to perform operations on variables and values. 
// They are sp symbols that inform the compiler to perform a specific mathematical or logical manipulation.
//Arithematic operators: Addition(+), Subtraction(-), Multiplication(*), Division(/), Modulus(%) returns the remainder of an integer division, Increment(++) increases the value of the variable by 1, Decrement(--) decreases the value of the variable by 1.
#include<iostream>
using namespace std;
int main(){
    int value1 = 10, value2 = 20;//recommended practice to declare the variable in a meaningful way. The variable name should be self explanatory.
    auto result = 0.0f;
    result = value1 + value2;
    cout<<"The added value is: " << result << endl;

    result = value1 - value2;
    cout<<"The subtracted value is: " << result << endl;

    result = value1 * value2;
    cout<<"The multiplied value is: " << result << endl;

    result = (float)value1 / value2; //type casting is used to convert the value to the specific type. 
    cout<<"The divided value is: " << result << endl;
  
    cout<<"The incremented value is " <<value1++ << endl; //Post increment: The value of the variable is used first and then it is incremented by 1.
    cout<<"The incremented value should be pre incremented: " << ++value1 << endl; //Pre increment: The value of the variable is incremented by 1 first and then it is used. 
}