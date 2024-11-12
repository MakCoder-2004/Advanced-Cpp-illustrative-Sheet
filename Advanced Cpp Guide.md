# C++ Advanced Level

**By:** Makrious Ayman

---

## Table of Contents
- **Introduction**
- **Includes and Namespace**
- **Main Code Sections**

---

### Introduction
This document describes the C++ file, providing a structured explanation of the code sections and functionalities.

### Includes and Namespace
**`#include <iostream>`**: Includes the standard input-output stream library for C++.

**`using namespace std;`**: Allows usage of standard library names without prefixing `std::`.

---

### Main Code Sections

```cpp
#include <iostream>
```
```cpp
using namespace std;
```
```cpp

```

**Comment Block:**
```
/*=======================================================================================================*/
```

**Comment Block:**
```
/*==================================|   " C++ Advanced Level"   |========================================*/
```

**Comment Block:**
```
/*======================================= By:Makrious Ayman =============================================*/
```

**Comment Block:**
```
/*=======================================================================================================*/
```
```cpp

```
**Comment:** `//------------------------- Visual Studio Tips ---------------------------`
```cpp

```
**Comment:** `//Creating A Library Using Visual Studio`

**Comment Block:**
```
/*
```
```cpp
    1- From the upper bar select view
```
```cpp

```
```cpp
    2- Choose "Selection Explorer"
```
```cpp

```
```cpp
    3- Press Right Click on the "Header File"
```
```cpp

```
```cpp
    4- Choose "Add"
```
```cpp

```
```cpp
    5- Choose "Header File(.h)"
```
```cpp

```
```cpp
    6- In this file you must include
```
```cpp
        #Pragma once
```
```cpp
        include <iostream>
```
```cpp
        namespace std;
```
```cpp
        namespace LibraryName{
```
```cpp

```
**Comment:** `// Your functions will be written here`
```cpp

```
```cpp
        }
```
```cpp

```
```cpp
    7- In the main file or in the file you will be using this library you must input
```
```cpp
    ---> #include "LibraryName.h"
```
```cpp

```
```cpp
    8- To call any fuctionn in this library :
```
```cpp
    ---> LibraryName::FunctionName();
```
```cpp

```
```cpp
    9- For making it easy we can write
```
```cpp
        => using namespace LibraryName;
```
```cpp
        instead of writing LibraryName::FunctionName(); every time you call a function
```
```cpp

```
```cpp
*/
```
```cpp

```
**Comment:** `//Function Fast access on Visual Studio`

**Comment Block:**
```
/*
```
```cpp
    => if you see a fuction call and you want to go to this function 
```
```cpp
        - press on the function
```
```cpp
        - press F12 (Go to function definition)
```
```cpp
        - press CNTRL+F12 (Go to function declaration)
```
```cpp

```
```cpp
    => if you need to see the call hierarchy
```
```cpp
        - Right click on the function
```
```cpp
        - choose "Go to call hierarchy"
```
```cpp
*/
```
```cpp

```
```cpp

```
**Comment:** `//------------------------- Ternary Operator ----------------------------`
```cpp

```
**Comment:** `//Short Hand IF`

**Comment Block:**
```
/*
```
```cpp

```
```cpp
    Syntax :-
```
```cpp
                   true            false
```
```cpp
                    |               |
```
```cpp
    condition ? value_if_true : value_if_false;
```
```cpp

```
**Comment:** `// Old Way`
```cpp
    if(condition){
```
**Comment:** `// true block`
```cpp
    }else{
```
**Comment:** `// false block`
```cpp
    }
```
```cpp

```
```cpp
*/
```
```cpp

```
**Comment:** `//Ranged Loop`

**Comment Block:**
```
/*
```
```cpp
    syntax :-
```
```cpp

```
```cpp
    for(range_declaration : range_expression){
```
**Comment:** `// code`
```cpp
    }
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp
    int main(){
```
```cpp
        int arr[] = {1,2,3,4,5};
```
```cpp

```
```cpp
        for( int i : arr){
```
```cpp
            cout << arr[i] << endl;
```
```cpp
        }
```
```cpp
    }
```
```cpp

```
```cpp
*/
```
```cpp

```
**Comment:** `//--------------------------- Validation --------------------------------`
```cpp

```
**Comment:** `//Validate Number`

**Comment Block:**
```
/*
```
**Comment:** `//=> this tichnique work with numbers only`
```cpp

```
```cpp
    int ReadNumber(){
```
```cpp
        int num;
```
```cpp
        cout << "Please Enter Number" << endl;
```
```cpp
        cin >> num;
```
```cpp

```
```cpp
        while(cin.fail()) {
```
```cpp
            cin.clear();
```
```cpp
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
```
```cpp
            cout << "Invalid Input! Please Enter a Number." << endl;
```
```cpp
            cin >> num;
```
```cpp
        }
```
```cpp

```
```cpp
        return num;
```
```cpp
    }
```
```cpp

```
```cpp
    int main(){
```
```cpp
        cout << "Your Number is " << ReadNumber() << endl;
```
```cpp
    }
```
```cpp
*/
```
```cpp

```
**Comment:** `//------------------------ Bitwise Operators ----------------------------`
```cpp

```
**Comment:** `//Bitwise AND "&"`

**Comment Block:**
```
/*
```
```cpp
    => it will change the numbers to binary and make adding in binary
```
```cpp
    (12 & 25)
```
```cpp
    00001100  -> 12
```
```cpp
    00001101  -> 25
```
```cpp
    -----------------
```
```cpp
    00001000  -> 8
```
```cpp

```
```cpp
    int main(){
```
```cpp
        cout << "Bitwise & Result : " << (12 & 25) << endl;  // output will be 8
```
```cpp
    }
```
```cpp
*/
```
```cpp

```
**Comment:** `//Bitwise OR "|"`

**Comment Block:**
```
/*
```
```cpp
    => it will change the numbers to binary and make or in binary
```
```cpp
    (12 | 25)
```
```cpp
    00001100  -> 12
```
```cpp
    00001101  -> 25
```
```cpp
    -----------------
```
```cpp
    00011101  -> 29
```
```cpp

```
```cpp
    int main(){
```
```cpp
        cout << "Bitwise & Result : " << (12 | 25) << endl;  // output will be 29
```
```cpp
    }
```
```cpp
*/
```
```cpp

```
**Comment:** `//---------------------- More About Functions ---------------------------`
```cpp

```
**Comment:** `//Function Declaration VS Defenition`

**Comment Block:**
```
/*
```
```cpp
    => when making a function we must put the function above the main but if we want 
```
```cpp
    to put it under the main we will have to declare in above the main first.
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
**Comment:** `// function declaration`
```cpp
void add(int, int);
```
```cpp

```
```cpp
int main() {
```
```cpp
    add(10, 20);
```
```cpp
    return 0;
```
```cpp
}
```
```cpp

```
**Comment:** `// function Definition`
```cpp
void add(int a, int b) {
```
```cpp
    cout << (a + b);
```
```cpp
} 
```
```cpp

```
```cpp
*/
```
```cpp

```
**Comment:** `//Optional Parameters Technique`

**Comment Block:**
```
/*
```
```cpp
    => To make the user choose if he want to put how many parameters
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp
int MySum(int a, int b, int c = 0, int d = 0) {
```
```cpp
     return (a + b + c + d);
```
```cpp
}
```
```cpp

```
```cpp
int main() {
```
```cpp
    cout << MySum(10, 20) << endl;
```
```cpp
    cout << MySum(10, 20, 30) << endl;
```
```cpp
    cout << MySum(10, 20, 30, 40) << endl;
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//---------------------- More About Variables ---------------------------`
```cpp

```
**Comment:** `//Static Variable`

**Comment Block:**
```
/*
```
```cpp
    => static variable will be saved in memory and will remain the same even if the function 
```
```cpp
    is called again.
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp
void MyFunc() {
```
```cpp
    static int Number = 1;
```
```cpp
    cout << "Value of Number: " << Number << "\n";
```
```cpp
    Number ++;
```
```cpp
}
```
```cpp

```
```cpp
int main()
```
```cpp
{
```
```cpp
    MyFunc();
```
```cpp
    MyFunc();
```
```cpp
    MyFunc();
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//Automatic Variable`

**Comment Block:**
```
/*
```
```cpp
    => automaticaly recognize the type of the data .
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
int main()
```
```cpp
{
```
```cpp
    auto x = 10; //Type Integer
```
```cpp
    auto y = 12.5; //Type Double
```
```cpp
    auto z = "Makrious"; //Type String
```
```cpp

```
```cpp
    cout << x << endl;
```
```cpp
    cout << y << endl;
```
```cpp
    cout << z << endl;
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//---------------------- Printing & Formatting ---------------------------`
```cpp

```
**Comment:** `//Integer Format`

**Comment Block:**
```
/*
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
int main() {
```
```cpp

```
```cpp
    int Page = 1, TotalPages = 10;
```
```cpp

```
**Comment:** `// print string and int variable`
```cpp
    printf("The page number = %d \n", Page);
```
```cpp
    printf("You are in Page %d of %d \n", Page, TotalPages);
```
```cpp

```
**Comment:** `//Width specification`
```cpp
    printf("The page number = %0*d \n", 2, Page);
```
```cpp
    printf("The page number = %0*d \n", 3, Page);
```
```cpp
    printf("The page number = %0*d \n", 4 , Page);
```
```cpp
    printf("The page number = %0*d \n", 5, Page);
```
```cpp

```
```cpp
    int Number1 = 20, Number2 = 30;
```
```cpp
    printf("The Result of %d + %d = %d \n", Number1, Number2, Number1+ Number2);
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//Float Format`

**Comment Block:**
```
/*
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
int main() {
```
```cpp

```
```cpp
    float PI = 3.14159265;
```
```cpp

```
**Comment:** `//Precision specification`
```cpp
    printf("Precision specification of %.*f\n", 1, PI);
```
```cpp
    printf("Precision specification of %.*f\n", 2, PI);
```
```cpp
    printf("Precision specification of %.*f\n", 3, PI);
```
```cpp
    printf("Precision specification of %.*f\n", 4, PI);
```
```cpp
    float x = 7.0, y = 9.0;
```
```cpp
    printf("\nThe float division is : %.3f / %.3f = %.3f \n\n", x, y, x / y);
```
```cpp

```
```cpp
    double d = 12.45;
```
```cpp
    printf("The double value is : %.3f \n", d);
```
```cpp
    printf("The double value is : %.4f \n", d); 
```
```cpp
    return 0;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//Char and String Format`

**Comment Block:**
```
/*
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
int main() {
```
```cpp

```
```cpp
    char Name[] = "Mohammed Abu-Hadhoud";
```
```cpp
    char SchoolName[] = "Programming Advices";
```
```cpp

```
**Comment:** `// print string and String`
```cpp
    printf("Dear %s, How are you?\n\n", Name);
```
```cpp
    printf("Welcome to %s School!\n\n", SchoolName);
```
```cpp

```
```cpp
    char c = 'S';
```
```cpp
    printf("Setting the width of c :%*c \n", 1, c);
```
```cpp
    printf("Setting the width of c :%*c \n", 2, c);
```
```cpp
    printf("Setting the width of c :%*c \n", 3, c);
```
```cpp
    printf("Setting the width of c :%*c \n", 4, c);
```
```cpp
    printf("Setting the width of c :%*c \n", 5, c);
```
```cpp

```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//SetW (Set Width) Manipulator`

**Comment Block:**
```
/*
```
```cpp
    => we have to implement the library called "iomanip"
```
```cpp
        - #include <iomanip>
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
#include <iomanip> // this library stored the std::setw
```
```cpp

```
```cpp
int main()
```
```cpp
{
```
```cpp
    cout << "---------|--------------------------------|---------|" << endl;
```
```cpp
    cout << "   Code  |              Name              |  Mark  |" << endl;
```
```cpp
    cout << "---------|--------------------------------|---------|" << endl;
```
```cpp

```
```cpp
    cout <<setw(9) << "C101" << "|" << setw(32) << "introduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
```
```cpp
    
```
```cpp
    cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
```
```cpp
    
```
```cpp
    cout << setw(9) << "C1035243" << "|" << setw(32) << "Network"<< "|" << setw(9) <<"75" << "|" << endl;
```
```cpp

```
```cpp
    cout << "---------|--------------------------------|---------|" << endl;
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//-------------------------- More About Arrays -----------------------------`
```cpp

```
**Comment:** `//2D Arrays`

**Comment Block:**
```
/*
```
```cpp
    int x[Rows][Cols];
```
**Comment:** `//OR`
```cpp
                        row1          row2            row3
```
```cpp
    int x[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp
  
```
```cpp
*/
```
```cpp

```
**Comment:** `//--------------------------- Passing by Ref/Val -----------------------------`
```cpp

```
**Comment:** `//By ref`

**Comment Block:**
```
/*
```
```cpp
    => when sending data to functions for not taiking a large space in the memory we will pass it by 
```
```cpp
    the address , so only one slot in the memory taken by two names.
```
```cpp
    
```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
void Function1(int &x)
```
```cpp
{
```
```cpp
    x++;
```
```cpp
}
```
```cpp
int main()
```
```cpp
{
```
```cpp
    int a = 10;
```
```cpp
    Function1(a);
```
```cpp
    cout << "\n a after calling function1 = " << a << endl;
```
```cpp
    return 0;
```
```cpp
}
```
```cpp

```
```cpp
&a => hexadecimal address.
```
```cpp
*/
```
```cpp

```
**Comment:** `//By Value`

**Comment Block:**
```
/*
```
```cpp
    => when sending data to functions we will take from the memory two places for the same data
```
```cpp
    and copy it in the function , instead we should send data by reference (address).
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
void Function1(int x)
```
```cpp
{
```
```cpp
    x++;
```
```cpp
}
```
```cpp
int main()
```
```cpp
{
```
```cpp
    int a = 10;
```
```cpp
    Function1(a);
```
```cpp
    cout << "\n a after calling function1 = " << a << endl;
```
```cpp
    return 0;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//Creating Reference`

**Comment Block:**
```
/*
```
```cpp
int main(){
```
```cpp
    int a = 10;
```
```cpp
    int &x = a;
```
```cpp

```
```cpp
    cout << &a << endl;
```
```cpp
    cout << &x << endl;
```
```cpp

```
```cpp
    x = 20;
```
**Comment:** `// both x and a will be changed`
```cpp

```
```cpp
    cout << a << endl;
```
```cpp
    cout << x << endl;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//--------------------------------- Pointers ---------------------------------`
```cpp

```
**Comment:** `//pointer declarations`

**Comment Block:**
```
/*
```
```cpp
    => a pointer is variable which we store in it an address of another variable.
```
```cpp

```
```cpp
int main() { 
```
```cpp
    int a = 10;    
```
```cpp
    cout <<"a value = " << a << endl;  // value
```
```cpp
    cout << "a address = "<< & a << endl; // address
```
```cpp

```
```cpp
    int * p;     // declaring pointer
```
```cpp
    p = &a;
```
```cpp
    cout << "Pointer Value = " << p << endl;
```
```cpp

```
```cpp
    return 0; 
```
```cpp
    }
```
```cpp
*/
```
```cpp

```
**Comment:** `//Dereferencing Pointer`

**Comment Block:**
```
/*
```
```cpp
int main(){ 
```
```cpp
    int a = 10;
```
```cpp
    
```
```cpp
    cout <<"a value = " << a << endl;
```
```cpp
    cout << "a address = "<< & a << endl;
```
```cpp

```
```cpp
    int * p; 
```
```cpp
    p = &a;    
```
```cpp

```
```cpp
    cout << "Pointer Value = " << p << endl;     
```
```cpp
    cout << "Value of the address that p is pointing to is " << *p << endl;     
```
```cpp

```
```cpp
    *p = 20;     
```
```cpp
    cout << a << endl;     
```
```cpp
    cout << *p << endl;  
```
```cpp

```
```cpp
    a = 30;     
```
```cpp
    cout << a << endl;     
```
```cpp
    cout << *p << endl;     
```
```cpp

```
```cpp
    return 0;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//pointer vs refrence`

**Comment Block:**
```
/*
```
```cpp
    => the refrence is to make another name for the value but with the same address
```
```cpp
    => the pointer is to store the address of any value, we can change the adress of the value which
```
```cpp
    is stored in the pointer, but the reference is fixed.
```
```cpp

```
```cpp
Example:-
```
```cpp
----------
```
```cpp
int main()
```
```cpp
{
```
```cpp
    int a = 10;
```
```cpp
    int & x = a;
```
```cpp
    cout << &a << endl;
```
```cpp
    cout << &x << endl;
```
```cpp
    cout << a << endl;
```
```cpp
    cout << x << endl;
```
```cpp

```
```cpp
    int * p = &a;
```
```cpp
    cout << p << endl;
```
```cpp
    cout << *p << endl;
```
```cpp

```
```cpp
    int b = 20;
```
```cpp
    p = &b;
```
```cpp
    cout << p << endl;
```
```cpp
    cout << *p << endl;
```
```cpp

```
```cpp
    return 0;
```
```cpp

```
```cpp
*/
```
```cpp

```
**Comment:** `//Pointers and Arrays`

**Comment Block:**
```
/*
```
```cpp
    => the pointer points on the first element in the array
```
```cpp

```
```cpp
int main()
```
```cpp
{
```
```cpp
    int arr[4] = {10,20,30,40};
```
```cpp

```
```cpp
    int *ptr;
```
```cpp
    ptr = arr;
```
```cpp

```
**Comment:** `//ptr is equivalent to &arr[0];`
**Comment:** `//ptr + 1 is equivalent to &arr[1];`
**Comment:** `//ptr + 2 is equivalent to &arr[2];`
**Comment:** `//ptr + 3 is equivalent to &arr[3];`
```cpp

```
```cpp
    cout << "Addresses are:\n";
```
```cpp
    cout << ptr << endl;
```
```cpp
    cout << ptr + 1 << endl;
```
```cpp
    cout << ptr + 2 << endl;
```
```cpp
    cout << ptr + 3 << endl;
```
```cpp

```
```cpp
    cout << "\nValues are: \n";
```
```cpp
    cout << *(ptr) << endl;
```
```cpp
    cout << *(ptr + 1) << endl;
```
```cpp
    cout << *(ptr + 2) << endl;
```
```cpp
    cout << *(ptr + 3) << endl;
```
```cpp

```
```cpp
    return 0;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//pointers and structures`

**Comment Block:**
```
/*
```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
struct stEmplyee{ 
```
```cpp
    string Name; 
```
```cpp
    float Salary; 
```
```cpp
}; 
```
```cpp
int main() { 
```
```cpp

```
```cpp
stEmplyee Employee1, *ptr;     
```
```cpp

```
```cpp
Employee1.Name = "Mohammed Abu-Hadhoud";     
```
```cpp
Employee1.Salary = 5000;
```
```cpp

```
```cpp
cout << Employee1.Name << endl;     
```
```cpp
cout << Employee1.Salary << endl;   
```
```cpp

```
```cpp
ptr = &Employee1;    
```
```cpp

```
```cpp
cout << "\nUsing Pointer:\n";     
```
```cpp
cout << ptr->Name << endl;     
```
```cpp
cout << ptr->Salary << endl; 
```
```cpp

```
```cpp
return 0; 
```
```cpp

```
```cpp
}
```
```cpp

```
```cpp
*/
```
```cpp

```
**Comment:** `// Pointer to Void`

**Comment Block:**
```
/*
```
```cpp
    => when declaring a pointer as void we are making this pointer Generic
```
```cpp
    but when printing the value of the pointer we have to recast the pointer to the data type
```
```cpp

```
```cpp
    - *(static_cast<DataType*>(ptr))
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
int main()
```
```cpp
{
```
```cpp
    void * ptr;
```
```cpp
    float f1 = 10.5;
```
```cpp
    int x = 50;
```
```cpp

```
```cpp
    ptr = &f1;
```
```cpp

```
```cpp
    cout << ptr <<endl;
```
```cpp
    cout << *(static_cast<float*>(ptr)) <<endl;
```
```cpp

```
```cpp
    ptr = &x;
```
```cpp

```
```cpp
    cout << ptr << endl;    
```
```cpp
    cout << *(static_cast<int*>(ptr)) << endl;
```
```cpp

```
```cpp
    return 0;
```
```cpp
    }
```
```cpp

```
```cpp

```
```cpp
*/
```
```cpp

```
**Comment:** `//------------------------- Dynamic Memory Allocation -------------------------`
```cpp

```
**Comment:** `//Memory Management`

**Comment Block:**
```
/*
```
```cpp
    => when declaring a pointer and intializing it with new statement we have to 
```
```cpp
    do the delete statement in order to delete what we stored to reduce the memory.
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
int main()
```
```cpp
{
```
**Comment:** `// declare an int pointer`
```cpp
    int* ptrX;
```
```cpp

```
**Comment:** `// declare a float pointer`
```cpp
    float* ptrY;
```
```cpp

```
**Comment:** `// dynamically allocate memory`
```cpp
    ptrX = new int;
```
```cpp
    ptrY = new float;
```
```cpp

```
**Comment:** `// assigning value to the memory`
```cpp
    *ptrX = 45;
```
```cpp
    *ptrY = 58.35f;
```
```cpp

```
```cpp
    cout << *ptrX << endl;
```
```cpp
    cout << *ptrY << endl;
```
```cpp

```
**Comment:** `// deallocate the memory`
```cpp
    delete ptrX;
```
```cpp
    delete ptrY;
```
```cpp

```
```cpp
    return 0;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//Dynamic Array Management`

**Comment Block:**
```
/*
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
int main() {
```
```cpp
    int num;
```
```cpp
    cout << "Enter total number of students: ";
```
```cpp
    cin >> num;
```
```cpp

```
```cpp
    float * ptr;
```
**Comment:** `// memory allocation of num number of floats`
```cpp
    ptr = new float[num];
```
```cpp

```
```cpp
    cout << "Enter grades of students." << endl;
```
```cpp
    for (int i = 0; i < num; i++) {
```
```cpp
        cout << "Student" << i + 1 << ": ";
```
```cpp
        cin >> *(ptr + i);
```
```cpp
    }
```
```cpp

```
```cpp
    cout << "\nDisplaying grades of students." << endl;
```
```cpp
    for (int i = 0; i < num; i++) {
```
```cpp
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
```
```cpp
    }
```
```cpp
    
```
**Comment:** `// ptr memory is released`
```cpp
    delete[] ptr;
```
```cpp

```
```cpp
    return 0;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//---------------------------- Exception Handling -----------------------------`
```cpp

```
**Comment:** `//Error Handling`

**Comment Block:**
```
/*
```
```cpp
    => it is used to handel some errors by the developer in order not to destroy the application
```
```cpp

```
```cpp
Example:-
```
```cpp
----------
```
```cpp

```
```cpp
int main(){
```
```cpp
    vector <int> v = {1,2,3,4,5};
```
```cpp

```
```cpp
    try {
```
```cpp
        cout << v.at(5);
```
```cpp
    }
```
```cpp
    catch(...) {
```
```cpp
        cout << "out of bound"<< endl;
```
```cpp
    }
```
```cpp
    return 0;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//---------------------------- Dealing with Strings ----------------------------`
```cpp

```
**Comment:** `//String Library`

**Comment Block:**
```
/*
```
```cpp
    => we must include the string library
```
```cpp
        - #include <string>
```
```cpp

```
```cpp
int main()
```
```cpp
{
```
```cpp
    string S1= "My Name is Makrious Ayman, I Love Programming.";
```
```cpp

```
**Comment:** `//Prints the length of the string`
```cpp
    cout << S1.length() << endl;
```
```cpp

```
**Comment:** `//Returns the letter at position 3`
```cpp
    cout << S1.at(3) << endl;
```
```cpp

```
**Comment:** `//Adds " I am 20 Years old" to the end of string`
```cpp
    S1.append(" I am 20 Years old".);
```
```cpp
    cout << S1 << endl;
```
```cpp

```
**Comment:** `//inserts Ali at position 7`
```cpp
    S1.insert(7, " Ali ");
```
```cpp
    cout << S1 << endl;
```
```cpp

```
**Comment:** `//Prints all the next 8 letters from position 16.`
```cpp
    cout << S1.substr(16,8) << endl;
```
```cpp

```
**Comment:** `//Adds one character to the end of the string`
```cpp
    S1.push_back('X');
```
```cpp
    cout << S1 << endl;
```
```cpp

```
**Comment:** `//Removes one character from the end of the string`
```cpp
    S1.pop_back();
```
```cpp
    cout << S1 << endl;
```
```cpp

```
**Comment:** `//Finds Ali in the string`
```cpp
    cout << S1.find("Ali") << endl;
```
```cpp

```
**Comment:** `//Finds ali in the string`
```cpp
    cout << S1.find("ali") << endl;
```
```cpp
    if (S1.find("ali") == S1.npos)
```
```cpp
    {
```
```cpp
        cout << "ali is not found";
```
```cpp
    }
```
```cpp

```
**Comment:** `//clears all string letters.`
```cpp
    S1.clear();
```
```cpp
    cout << S1 << endl;
```
```cpp
    
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp

```
```cpp
*/
```
```cpp

```
**Comment:** `//ccytype Library`

**Comment Block:**
```
/*
```
```cpp
    => we must include the cctype library
```
```cpp
        - #include <cctype>
```
```cpp

```
```cpp
int main()
```
```cpp
{
```
```cpp
    char x ;
```
```cpp
    char w ;
```
```cpp

```
```cpp
    x = toupper('a');
```
```cpp
    w = tolower('A');
```
```cpp
    cout << "converting a to A: " << x << endl;
```
```cpp
    cout << "converting A to a: " << w << endl;
```
```cpp

```
**Comment:** `// Digits (A to Z)`
**Comment:** `// returns zero if not, and non zero of yes`
```cpp
    cout << "isupper('A') " << isupper( 'A') << endl;
```
```cpp

```
**Comment:** `// lower case (a to z)`
**Comment:** `// returns zero if not, and non zero of yes`
```cpp
    cout << "islower('A') " << islower('A') << endl;
```
```cpp

```
**Comment:** `// Digits (0 to 9)`
**Comment:** `// returns zero if not, and non zero of yes`
```cpp
    cout << "isdigit('A') " << isdigit ('A') << endl;
```
```cpp

```
**Comment:** `// punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~`
**Comment:** `// returns zero if not, and non zero of yes`
```cpp
    cout << "ispunct('A') " << ispunct('A') << endl;
```
```cpp

```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//-------------------------- Saving Data in txt files ----------------------------`
```cpp

```
**Comment:** `//Out mood`

**Comment Block:**
```
/*
```
```cpp
    => we must include the fstream library
```
```cpp
        - #include <fstream>
```
```cpp

```
```cpp
Example:-
```
```cpp
---------
```
```cpp

```
```cpp
int main() {
```
```cpp
    fstream MyFile;
```
```cpp

```
```cpp
    MyFile.open("MyFile.txt", ios::out) ;//Write Mode
```
```cpp

```
```cpp
    if (MyFile.is_open())
```
```cpp
    {
```
```cpp
        MyFile << "Hi, this is the first line\n";
```
```cpp
        MyFile << "Hi, this is the second line\n";
```
```cpp
        MyFile << "Hi, this is the third line\n";
```
```cpp

```
```cpp
        MyFile.close();
```
```cpp
    }
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//Append mood`

**Comment Block:**
```
/*
```
```cpp
    => we use the out mode and append (app) mode together
```
```cpp

```
```cpp
int main() {
```
```cpp
    fstream MyFile;
```
```cpp
    MyFile.open("MyFile.txt", ios::out | ios::app );//append Mode
```
```cpp
    if (MyFile.is_open())
```
```cpp
    {
```
```cpp
        MyFile << "Hi, this is a new line\n";
```
```cpp
        MyFile << "Hi, this is another new line\n";
```
```cpp
        MyFile.close();
```
```cpp
    }
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//Print File Content`

**Comment Block:**
```
/*
```
```cpp

```
```cpp
void PrintFileContent(string FileName) {
```
```cpp
    fstream MyFile;
```
```cpp
    MyFile.open( FileName, ios::in );//append Mode
```
```cpp

```
```cpp
    if (MyFile.is_open())
```
```cpp
    {
```
```cpp
        string line;
```
```cpp

```
```cpp
        while(getline(MyFile,line)){
```
```cpp
            cout << line << endl;
```
```cpp
        }   
```
```cpp

```
```cpp
        MyFile.close();
```
```cpp
    }
```
```cpp
} 
```
```cpp

```
```cpp
int main() {
```
```cpp
    PrintFileContent("MyFile.txt");
```
```cpp
    return 0;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//Load File content to vector`

**Comment Block:**
```
/*
```
```cpp
void LoadDataFromFileToVector(string FileName, vector <string> &vFileContent)
```
```cpp
{
```
```cpp
    fstream MyFile;
```
```cpp

```
```cpp
    MyFile.open(FileName, ios::in);//read Mode
```
```cpp

```
```cpp
    if (MyFile.is_open())
```
```cpp
    {
```
```cpp
        string Line;
```
```cpp
        while (getline(MyFile, Line))
```
```cpp
        {
```
```cpp
            vFileContent.push_back(Line);
```
```cpp
        }
```
```cpp
        MyFile.close();
```
```cpp
    }
```
```cpp
}
```
```cpp
int main() {
```
**Comment:** `// Load data from file to vector and print it out.`
```cpp
    vector <string> vFileContenet;
```
```cpp
    
```
```cpp
    LoadDataFromFileToVector("MyFile.txt", vFileContenet);
```
```cpp
    for (string &Line : vFileContenet)
```
```cpp
    {
```
```cpp
        cout << Line << endl;
```
```cpp
    }
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//Save Vector Data to File`

**Comment Block:**
```
/*
```
```cpp

```
```cpp
void SaveVectorToFile(string FileName, vector <string> &vFileContent)
```
```cpp
{
```
```cpp
    fstream MyFile;
```
```cpp
    MyFile.open("MyFile.txt", ios::out);
```
```cpp
    if (MyFile.is_open()){
```
```cpp
        for (string &Line : vFileContent)
```
```cpp
        {
```
```cpp
            if (Line != ""){
```
```cpp
                MyFile << Line << endl;
```
```cpp
            }
```
```cpp
        }
```
```cpp
        MyFile.close();
```
```cpp
    }
```
```cpp
}
```
```cpp
int main()
```
```cpp
{
```
```cpp
    vector <string> vFileContenet{"Ali","Shadi","Maher","Fadi","Lama"};
```
```cpp
    SaveVectorToFile("MyFile.txt", vFileContenet);
```
```cpp
    return 0;
```
```cpp
} 
```
```cpp
*/
```
```cpp

```
**Comment:** `//Delete Data from File`

**Comment Block:**
```
/*
```
```cpp

```
```cpp
void LoadDataFromFileToVector(string FileName, vector <string> &vFileContent)
```
```cpp
{
```
```cpp
    fstream MyFile;
```
```cpp
    MyFile.open("MyFile.txt", ios::in);//read Mode
```
```cpp
    if (MyFile.is_open())
```
```cpp
    {
```
```cpp
        string Line;
```
```cpp
        while (getline(MyFile, Line)){
```
```cpp
            vFileContent.push_back(Line);
```
```cpp
        }
```
```cpp
        MyFile.close();
```
```cpp
    }
```
```cpp
}
```
```cpp

```
```cpp
void SaveVectorToFile(string FileName, vector <string> vFileContent)
```
```cpp
{
```
```cpp
    fstream MyFile;
```
```cpp
    MyFile.open("MyFile.txt", ios::out);
```
```cpp
    if (MyFile.is_open()){
```
```cpp
        for (string Line : vFileContent){
```
```cpp
            if (Line != ""){
```
```cpp
                MyFile << Line << endl;
```
```cpp
            }
```
```cpp
        }
```
```cpp
        MyFile.close();
```
```cpp
    }
```
```cpp
} 
```
```cpp

```
```cpp
void DeleteRecordFromFile(string FileName, string Record)
```
```cpp
{
```
```cpp
    vector <string> vFileContent;
```
```cpp
    LoadDataFromFileToVector(FileName, vFileContent);
```
```cpp

```
```cpp
    for (string &Line : vFileContent){
```
```cpp
        if (Line == Record){
```
```cpp
            Line = "";
```
```cpp
        }
```
```cpp
    }
```
```cpp

```
```cpp
    SaveVectorToFile(FileName, vFileContent);
```
```cpp
}
```
```cpp

```
```cpp
void UpdateDataInFile(string FileName, string Record, string UpdateTo){
```
```cpp
    fstream MyFile;
```
```cpp
    vector <string> vFileContent;
```
```cpp
    LoadDataFromFileToVector(FileName, vFileContent);
```
```cpp

```
```cpp
    for (string &Line : vFileContent){
```
```cpp
        if (Line == Record){
```
```cpp
            Line = UpdateTo;
```
```cpp
        }
```
```cpp
    }
```
```cpp

```
```cpp
    SaveVectorToFile(FileName, vFileContent);
```
```cpp
}
```
```cpp

```
```cpp
void PrintFileContent(string FileName)
```
```cpp
{
```
```cpp
    fstream MyFile;
```
```cpp
    MyFile.open(FileName, ios::in);//read Mode
```
```cpp
    if (MyFile.is_open()){
```
```cpp
        string Line;
```
```cpp
        while (getline(MyFile, Line)){
```
```cpp
            cout << Line << endl;
```
```cpp
        }
```
```cpp
        MyFile.close();
```
```cpp
    }
```
```cpp
}
```
```cpp

```
```cpp
int main() {
```
```cpp
    cout << "File Content Before Delete.\n";
```
```cpp
    PrintFileContent("MyFile.txt");
```
```cpp

```
```cpp
    DeleteRecordFromFile("MyFile.txt", "Ali");
```
```cpp
    cout << "\n\nFile Content After Delete.\n";
```
```cpp

```
```cpp
    PrintFileContent("MyFile.txt");
```
```cpp

```
```cpp
    return 0;
```
```cpp
} 
```
```cpp

```
```cpp
*/
```
```cpp

```
**Comment:** `//------------------------------- Local Date Time ---------------------------------`
```cpp

```
**Comment:** `// Standard Library Date and Time`

**Comment Block:**
```
/*
```
```cpp
    => we must include the ctime library
```
```cpp
        - #include <ctime>
```
```cpp

```
```cpp
#pragma warning(disable : 4996)
```
```cpp
#include <ctime>
```
```cpp
#include <iostream>
```
```cpp
using namespace std;
```
```cpp
int main()
```
```cpp
{
```
```cpp
    time_t t = time(0); // get time now
```
```cpp

```
```cpp
    char* dt = ctime(&t); // convert in string form
```
```cpp

```
```cpp
    cout << "Local date and time is: " << dt << "\n";
```
```cpp

```
**Comment:** `// converting now to tm struct for UTC date/time`
```cpp

```
```cpp
    tm* gmtm = gmtime(&t);
```
```cpp

```
```cpp
    dt = asctime(gmtm);
```
```cpp

```
```cpp
    cout << "UTC date and time is: " << dt;
```
```cpp

```
```cpp
}
```
```cpp
*/
```
```cpp

```
**Comment:** `//Datetime Structure`

**Comment Block:**
```
/*
```
```cpp

```
```cpp
#include <ctime>
```
```cpp
int main(){
```
```cpp
    time_t t= time(0);
```
```cpp
    tm* now = localtime(&t);
```
```cpp

```
```cpp
    cout << "Year :" << (now->tm_year + 1900) << endl; 
```
```cpp
    cout << "Month :" << (now->tm_mon + 1) << endl; 
```
```cpp
    cout << "Day :" << now->tm_mday << endl; 
```
```cpp
    cout << "Hour :" <<now->tm_hour << ":" 
```
```cpp
    cout << "Minutes :" << now->tm_min << ":" 
```
```cpp
    cout << "second :" << now->tm_sec << endl;
```
```cpp
    cout << "Weekday :" << now->tm_wday << endl;
```
```cpp
    cout << "Day of Year :" << now->tm_yday << endl;
```
```cpp
    cout << "Daylight Saving Time : " << now->tm_isdst << endl;
```
```cpp
}
```
```cpp
*/
```
```cpp

```
```cpp

```

**Comment Block:**
```
/*=======================================================================================================*/
```

**Comment Block:**
```
/*=============================================== THE END ===============================================*/
```

**Comment Block:**
```
/*=======================================================================================================*/
```
