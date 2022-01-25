// C++_Refresher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

/*
* Global Variables
* 
*   Created by declaring a variable outside of any functions, typically at the top of the file. Visible from all files.
*   To reference from another file, simply add extern to the variable/function you are calling in a different file:
*       
*       File 1:
*       int count; // global variable declaration
* 
*       File 2:
*       extern int count // Now we can reference the global variable in file 2.
*       std::cout << "Count is " << count << std::endl;
* 
*/

/*
* 
* QUALIFERS IN C++
* 
*   Constants
*   Declare by:
*   const type variable = value;
*   const int CASHBONUS = 1000;
* 
*   Volatile
*   Tells compiler that a variables value may change in ways not explicitly specified by the program.
* 
*   Restrict
*   A pointer qualified by RESTRICT, is initially the only way the object the pointer points to can be accessed.
* 
*/



/*
* 
* STORAGE CLASSES IN C++
* 
*   -Auto-
*   Default storage class for LOCAL variables.
* 
*   -Register-
*   Used to define local variables that should be stored in a register, instead of RAM.
*   This means that the variable has a maximum size equal to the register size (usually one word) 
*   and can't have the unary '&' operator applied to it (as it does not have a memory location).
*   // Should only be used for variables requiring quick access, such as counters.
*   It is also not guarenteed the variable will be stored in a register. It depends on the hardware and implementation restrictions.
*
*   -Static-
*   Instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating 
*   and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them 
*   to maintain their values between function calls.
*   // Can be applied to global variables too. That causes the variables scope to be restricted to the file in which it is declared.
*   MAYBE REMOVE THIS?
*   In C++, when static is used on a class data member, it causes only one copy of that member to be shared by all objects of its class.
* 
*   -Extern-
*   Used to give a reference of a global variable (visible to all files) located in a different file.
*   Cannot be initialized, because all it contains is a pointer to the variable name at a storage location previously defined.
*   
*   -Mutable-
*   Only applies to class objects.
*   Allows member of an object to override const member function.
*   A mutable member can be modified by a const member function.
* 
*/


/*
*       Under Operators in the tutorial, take a picture of the BitWise Operators Info and save those pics to the folder (on laptop).
*/


/*
* 
* OPERATORS IN C++
* 
*   -SizeOf-
*   sizeof(datatype)
*   Returns the size of a variable.
* 
*   -Condition ? X:Y-
*   Exp1 ? Exp2 : Exp3;
*   Exp1 is evaluated. If it is true, then
*   Exp2 is evaluated and becomes the value of the entire ? expression. 
*   If Exp1 is false, then Exp3 is evaluated and its value becomes the value of the expression.
* 
*      The following code:
*      if(y < 10) { 
            var = 30;
        } else {
            var = 40;
        }

        Can be re-written as:
        var = (y < 10) ? 30 : 40;
* 
* 
*/


















// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
