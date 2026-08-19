#include<iostream>//As libraries are included in the std namespace, we can use the using directive to avoid prefixing std:: before every standard library object or function. This makes the code cleaner and easier to read.
//namespace is a conceptual grouping of related classes, functions and variables. 
#include<string>//contain the definition of a string type that can store alphanumeric characters. 

using namespace std;
int main(){
    string name;//U R trying to store the input value entered by the user into a variable called name.U must declare the variable before using it. 

    cout<<"Enter the name:"<<endl;
    cin >> name;//cin is used to read input from the standard input device (keyboard) and store it in the variable name. The >> operator is used to extract the input value from the input stream and assign it to the variable.
    cout<<"Hai Mr. " << name << endl;
    return 0;
}