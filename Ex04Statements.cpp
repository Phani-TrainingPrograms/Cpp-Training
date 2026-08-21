#include<iostream>
using namespace std;

//statements are the building blocks of any program. 
//A statement in C++ is an instruction that is given to the computer to perform a specific action. 
//Every statement in C++ ends with a semicolon (;)
//C++ gives different kinds of statements: declarations, jump, expression, compound, selection,iteration and try-catch statements.
//statements are grouped into functions. Functions can be called from other functions to perform a task. 
//U create a function if U want to reuse a block of code across the application.
//For better readability, U also provide comments to explain the reason for creating a function.
int main(){
    //when U want to store a value in UR program, U need a place to store it. This is called as variable. the value of the variable can be changed during the execution of the program.
    //declare the variable with the kind of data that U want to store in it. 
    int var = 100;
    cout<<"The value of the variable is: " << var << endl;
    //From C++14, U can declare a variable without specifying the type which is more convenient. They are called auto variables. Type inference is done where the compiler automatically deduces the type of the variable from its initializer.
    auto apple ="This is an auto variable";
    cout<<"The value of the variable apple is " << apple << endl;
    char c = 'A';//char is a data type that can store a single character.
    cout<<"The value of the variable c is " << c << endl;

    //for storing true or false, we store it as bool data type.
    bool isTrue = true; //the data is stored as 1 byte. 1 Byte is equal to 8 bits. The value of the variable isTrue is true which is represented as 1 in binary. 0 means false. 
    cout<<"The value of the variable isTrue is " << isTrue << endl;

    //Store decimal values in float and double. 
    //Float stores 4bytes of data and double stores 8 bytes of data.
    float pi = 3.14;
    cout<<"The value of the variable pi is " << pi << endl;
    auto e = 3.45f;//if f is not specified, the value is stored as double.
    cout<<"The value of the variable e is " << e << endl;

    //Derived data types are created by combining the primitive data types.
    //Arrays, Pointers, References, Functions and Classes are derived data types.
    //UDTs include structures, unions, classes and enumerations.
    //Modifiers are used to alter the range of representation of existing data types. short, long, signed and unsigned are the modifiers.

    short int smallNum = 10;
    cout<<"The value of the variable smallNum is " << smallNum << endl;
    return 0;
}

