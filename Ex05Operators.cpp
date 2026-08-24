//In C++, we use operators to perform operations on variables and values.
// They are sp symbols that inform the compiler to perform a specific mathematical or logical manipulation.
//Arithematic operators: Addition(+), Subtraction(-), Multiplication(*), Division(/), Modulus(%) returns the remainder of an integer division, Increment(++) increases the value of the variable by 1, Decrement(--) decreases the value of the variable by 1.
/*
Relational operators is to compare the values of 2 operands. They evaluate true(1) or false(0).
=, >, <, <=, >=, != (Not Equals)

Logical operators used to combine 2 or more conditions or constraints to complement the evaluation
of a original condition. Here too, the operators evaluate to true or false.
LOGICAL AND : &&: Returns true only if all the operands are true/1.
LOGICAL OR : || : Returns true if either of the operands is true/1
LOGICAL NOT: !  : Returns true if the operand is false or 0.

Bitwise operators work at the bit level. Compiler converts UR value to a bit-level and then
the calculation is performed.
Bitwise operators can work on only int and char data types.
Todo: Explore the bitwise operators and its usage in real world.
*/


#include<iostream>
using namespace std;

void basicArithematicOperations(){
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
    cout<<"The incremented value should be pre-incremented: " << ++value1 << endl; //Pre increment: The value of the variable is incremented by 1 first and then it is used.
    }
void UnderstandingRelationalOperators()//U cannot have space in b/w while naming a function.
{
    int a = 6, b = 4;
    cout<<"a == b is: "<<(a ==b) <<endl; //This is false, as a not equal to b. == means "is equal to".
    //this expression always evaluates to boolean(true or false).
    cout<<"a > b is : " <<(a > b)<<endl;
    cout<<"a < b is : " <<(a < b)<<endl;
    cout<<"a >= b is : " <<(a >= b)<<endl;
    cout<<"a <= b is : " <<(a <= b)<<endl;
    cout<<"a != b is : " <<(a != b)<<endl;

    //Check for logical operands:
    cout<<"a && b is : " <<(a && b) <<endl;
    cout<<"a || b is : " <<(a || b) <<endl;
    cout<<"!b is : " <<(!b) <<endl;


}


int main(){
    //basicArithematicOperations();
    UnderstandingRelationalOperators();
    return 0;
}
