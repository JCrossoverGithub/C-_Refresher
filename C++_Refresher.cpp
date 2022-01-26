// C++_Refresher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

/*
* 
* USEFUL C++ FUNCTIONS
* 
*   setw()          // outputs format
* 
* 
*/




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
*   -Dot Operator-
*   Access member of an object
*   To assign the value "zara" to the first_name member of object emp, you would write something as follows
*   Ex: strcpy(emp.first_name, "zara");
* 
*   -Arrow Operator-
*   
*   If p_emp is a pointer to an object of type Employee, then to assign the value "zara" to the first_name member 
    of object emp, you would write something as follows:
    Ex: strcpy(p_emp->first_name, "zara");

     To access members of a structure, use the dot operator. 
     To access members of a structure through a pointer, use the arrow operator.


*   -Cast Operators-
*   Convert one data type to another
*   Ex:
*       float a = 2.8231;
*       int c = (int) a;    // turns c into an integer 2;
* 
* 
*   -Pointer Operators-
*   & is a unary operator which returns the memory address of its operand.
*   For example, if var is an integer variable, then &var is its address, the address of var.
* 
*   *, an indirection Operator, is a complement of &.
*   It is a unary operator that returns the value of the variable located at the address specified by its operand.
* 
*/


/*
* 
* LOOPS IN C++
* 
*   while()
*   for()
*   do..while()
*   nested loops
*   
*   loop conditions:
*   loop( init; condition; increment) {}
*   for(int i = 0; i<10; i++)
* 
*   LOOP CONTROL STATEMENTS:
*       break       // ends the loop or statement. Continues to statement immediately after the loop/switch.
*       continue    // causes loop to skip remainder of its body and immediately retest its condition, prior to iterating.
*       goto        // transfers control to labelled statement. NOT RECCOMENDED TO USE
* 
* 
*   INFINITE LOOP:
*       for( ; ; ) {}
*       // You can terminate an infinite loop by pressing   Ctrl+C 
* 
*/


/*
* 
* STATEMENTS IN C++
* 
*   if()
*   if..else()
*   switch()
*   nested if()
*   nested switch()
* 
*   ? operator  - COVERED ABOVE IN OPERATORS.
* 
*/


/*
* 
* FUNCTIONS IN C++
* 
*   return_type function_name( parameters )
*   {
*       body of function
*   }
* 
*   Use void as the return_type if you don't want to return anything.
* 
* 
*   FUNCTION DECLARATION:
*   Function Declaration is required when you define a function in one source file and you call the function in another file.
*   In this case you should declare the function at the top of the file that is CALLING the function.
* 
*       int max(int num1, int num2);    // function declaration
* 
*       int max(int num1, int num2)     // actual function
*       {
*          // do code
*       }
* 
*   
*   FUNCTION ARGUMENTS:
*   There are 3 ways to pass arguments into a function:
*       1. Call by value.       // Copies the actual value of an argument into the formal parameter of the function. 
                                // In this case, changes made to the parameter inside the function have no effect on the argument.

        2. Call by pointer.     // Copies the address of an argument into the formal parameter. 
                                // Inside the function, the address is used to access the actual argument used in the call. 
                                // This means that changes made to the parameter affect the argument.

        3. Call by reference    // Copies the reference of an argument into the formal parameter. 
                                // Inside the function, the reference is used to access the actual argument used in the call. 
                                // This means that changes made to the parameter affect the argument.

*   By default, C++ uses CALL BY VALUE to pass arguments.
*   This means that code within a function cannot alter the arguments used to call the function 
* 
* 
*/


/*
* 
* MATH IN C++
* 
* 
*   // MATH FUNCTIONS FROM MATH HEADER FILE: <cmath>
*   #include <cmath>
* 
*   double cos(double);
*   double sin(double;
*   double tan(double);
*   double log(double);
*   double pow(double, double);     // first value is number, second value is the number you want to raise it to. (2,5) = 2^5.
*   double hypot(double, double);   // if you pass 2 sides of a right triangle, it returns the length of the hypotenuse.
*   double sqrt(double);
*   int abs(int);                   // absolute value
*   double fabs(double);            // returns absolute value of any decimal value passed into it.
*   double floor(double);           // finds the integer which is less than or equal to the argument passed into it.
* 
* 
*   Look up how to generate random numbers.
*   You have to do some steps before rand() or srand() actually give you a random number.
*   Apparently you can use time() function, logging the seconds on your system time to seed rand() for a random number.
* 
*/


/*
* 
* C++ SINGLE DIMENSION ARRAYS
* 
*   In arrays, they all have contiguous memory locations.
*   The lowest memory address corresponds to the first element, and highest address to the last element.
* 
*   SINGLE DIMENSION ARRAYS:
* 
*       DECLARING ARRAYS:
*       type array_name [ arraySize ];
*       double moneyBalance[10];
* 
*  
*       INITIALIZING ARRAYS:
*       If you want to intialize an array on declaration, you can do:
*       double moneyBalance[5] = {1000.0, 2.0, 3.0, 92.1, 27.5};
*       // You can also leave out the size of the array, and it will automatically set the size to fit whatever you intialize it with.
*       double exampleArr[] = {69.1, 2.3};    // This array will now be of size 2.
* 
* 
*       SETTING SPECIFIC/INDIVIDUAL ARRAY INDEX VALUE:
*       if you want to set a singular value of an array to a value, you can do:
*       moneyBalance[4] = 200.0;
*       // If we are using the array from the previous example, its values will now be:
*       // { 1000.0, 2.0, 3.0, 92.1, 200.0 }
*       // Remember, if the array has a size of 5, then moneyBalance[4] is actually the 5th element, because the count starts from 0: 0,1,2,3,4
*       
* 
*       ACCESSING ARRAY ELEMENTS:
*       You can assign variables the value of specific array indexes. For ex:
*       double salary = moneyBalance[1];   // salary is now equal to 2.0
*   
* 
*/


/*
* 
* C++ MULTI-DIMENSIONAL ARRAYS 
* 
*   C++ Allows multi-dimensional arrays.
*     
*   In 2d arrays it goes [row][column]
* 
*   The general form is:
* 
*       type name[size1][size2]....[sizeN];
* 
*   For example, here is a 3 dimensional array:
*   
*       int threeDim[5][10][4];
* 
*   
*   A 2d Array can be thought of as a LIST, of 1d arrays.
*   Like a table, which has X number of rows and Y number of columns.
*   For example, if we have the following 2d array named a:
*   int a[3][4];
*   It can be shown as:
*                             | Col 0   |   Col 1   |   Col 2   | Col 3   |
*                       --------------------------------------------------
*                       Row 0 | a[0][0] | a[0][1]   | a[0][2]   | a[0][3] |
*                       --------------------------------------------------
*                       Row 1 | a[1][0] | a[1][1]   | a[1][2]   | a[1][3] |
*                       --------------------------------------------------
*                       Row 2 | a[2][0] | a[2][1]   | a[2][2]   | a[2][3] |
*                       --------------------------------------------------
*                             |         |           |           |         |
* 
* 
*   INITIALIZING 2D ARRAYS:
*   int a[3][4] = 
    {  
    {0, 1, 2, 3} ,       //  initializers for row indexed by 0 
    {4, 5, 6, 7},        //  initializers for row indexed by 1 
    { 8, 9, 10, 11 }     //  initializers for row indexed by 2 
    };
* 
*   Using the nested braces as above however, is optional.
*   You can simply do:
*   int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
*   and it will all balance out the same.
* 
* 
*   ACCESSING 2D ARRAYS:
*   int val = a[2][3];  // this takes the item indexed in the 3rd row, 4th column of the array.
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
