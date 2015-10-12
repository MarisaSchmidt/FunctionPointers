//FunctionPointers.cpp  
//
//  Created by Marisa Schmidt on 2/4/15.
//
//
#include<iostream>
#include<stdio.h>
using namespace std;

typedef int (* PTR_TO_FUN)(int, int); //define PTR_TO_BINARY_FUN to be a
// type which is a pointer function that takes two int parameters, and
// return an int value.
//needs to point to function

int add (int a, int b) {
    int c;
    c = a + b;
    return c;
}

int sub (int a, int b) {
    int c;
    c = a - b;
    return c;
}

int mul (int a, int b) {
    int c;
    c = a * b;
    return c;
}

int divide (int a, int b) {
    int c;
    c = a / b;
    return c;
}


int main(){

    PTR_TO_FUN func_tables[4];  //func_tables is an array of size 4 of type PTR_TO_FUN...
    
    //initialize array elements to individual functions
    func_tables[0] = &add;
    func_tables[1] = &sub;
    func_tables[2] = &mul;
    func_tables[3] = &divide;
    
     
    char answer;
    
    //enter loop that
    do {
        //1. prompt user to enter two numbers (int a, int b) and operation code (0,1,2,3)
        int num1, num2, opcode, result;
        cout << "Please enter two numbers and (0) to add, (1) to subtract, (2) to multiply, or (3) to divide. Please separate each entrance by a space." << endl;
        cin >> num1 >> num2 >> opcode;
        
        //2. use array, operation code to call function(a, b)
        result = func_tables[opcode](num1, num2);
        
        //3. display return values of functions
        cout << "Result: " << result << endl;
        
        //ask user to enter another input?
        cout << "Perform another operation? Y/N" << endl;
        cin >> answer;
        
    } while (answer=='Y'||answer=='y');
    
    
    return 0;
    
}
