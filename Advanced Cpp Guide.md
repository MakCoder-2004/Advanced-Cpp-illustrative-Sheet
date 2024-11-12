# C++ Advanced Level
**By: Makrious Ayman**

# Visual Studio Tips

## Creating A Library Using Visual Studio

1. From the upper bar select view
2. Choose "Selection Explorer"
3. Press Right Click on the "Header File"
4. Choose "Add"
5. Choose "Header File(.h)"
6. In this file you must include:
    ```cpp
    #pragma once
    #include <iostream>
    using namespace std;
    namespace LibraryName {
        // Your functions will be written here
    }
    ```
7. In the main file or in the file you will be using this library you must input:
    ```cpp
    #include "LibraryName.h"
    ```
8. To call any function in this library:
    ```cpp
    LibraryName::FunctionName();
    ```
9. To make it easy we can write:
    ```cpp
    using namespace LibraryName;
    ```
    instead of writing `LibraryName::FunctionName();` every time you call a function.

## Function Fast Access on Visual Studio

- If you see a function call and you want to go to this function:
    - Press on the function
    - Press `F12` (Go to function definition)
    - Press `Ctrl+F12` (Go to function declaration)

- If you need to see the call hierarchy:
    - Right-click on the function
    - Choose "Go to call hierarchy"

--------------------------------------------------------------------------------------------------

# Ternary Operator

## Short Hand IF

**Syntax:**
```cpp
                   true            false
                    |               |
    condition ? value_if_true : value_if_false;

    // Old Way
    if(condition){
        // true block
    }else{
        // false block
    }
```
## Ranged Loop
**Syntax:**
``` cpp
    for(range_declaration : range_expression){
        // code
    }
```
**Example:**
``` cpp
    int main(){
        int arr[] = {1,2,3,4,5};
    
        for(int i : arr){
            cout << arr[i] << endl;
        }
    }

```
## Validation
**Validate Number**
- This technique works with numbers only:
  ``` cpp
      int ReadNumber(){
            int num;
            cout << "Please Enter Number" << endl;
            cin >> num;
        
            while(cin.fail()) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Invalid Input! Please Enter a Number." << endl;
                cin >> num;
            }
            return num;
        }
  ```
-------------------------------------------------------------------------------------------------

# Bitwise Operators

## Bitwise AND "&"

**Explanation:**
It will change the numbers to binary and perform a bitwise AND operation.

(12 & 25) <br>
00001100  -> 12 <br>
00001101  -> 25 <br>
----------------- <br>
00001000  -> 8 <br>

```cpp
    int main(){
        cout << "Bitwise & Result : " << (12 & 25) << endl;  // output will be 8
    }
```

## Bitwise OR “|”
**Explanation:**
It will change the numbers to binary and perform a bitwise OR operation.

(12 | 25) <br>
00001100  -> 12 <br>
00001101  -> 25 <br>
----------------- <br>
00011101  -> 29 <br>

``` cpp
int main(){
    cout << "Bitwise | Result : " << (12 | 25) << endl;  // output will be 29
}
```
--------------------------------------------------------------------------------------------------

# More About Functions

## Function Declaration VS Definition
**Explanation:**
When making a function, we must put the function above the main. If we want to put it under the main, we will have to declare it above the main first.

Example:
```cpp
// function declaration
void add(int, int);

int main() {
    add(10, 20);
    return 0;
}

// function definition
void add(int a, int b) {
    cout << (a + b);
}
```

## Optional Parameters Technique
**Explanation:** 
This is to make the user choose how many parameters to provide.

Example:
``` cpp
int MySum(int a, int b, int c = 0, int d = 0) {
    return (a + b + c + d);
}

int main() {
    cout << MySum(10, 20) << endl;
    cout << MySum(10, 20, 30) << endl;
    cout << MySum(10, 20, 30, 40) << endl;
    return 0;
}
```

# More About Variables

## Static Variable
- static variable will be saved in memory and will remain the same even if the function is called again.

Example:
```cpp
void MyFunc() {
    static int Number = 1;
    cout << "Value of Number: " << Number << "\n";
    Number++;
}

int main() {
    MyFunc();
    MyFunc();
    MyFunc();
    return 0;
}
```

## Automatic Variable
- Automatically recognize the type of the data.

Example:
``` cpp
int main() {
    auto x = 10; // Type Integer
    auto y = 12.5; // Type Double
    auto z = "Makrious"; // Type String

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}
```
--------------------------------------------------------------------------------------------------

# Printing & Formatting

## Integer Format

**Example:**
```cpp
int main() {
    int Page = 1, TotalPages = 10;

    // print string and int variable
    printf("The page number = %d \n", Page);
    printf("You are in Page %d of %d \n", Page, TotalPages);

    // Width specification
    printf("The page number = %0*d \n", 2, Page);
    printf("The page number = %0*d \n", 3, Page);
    printf("The page number = %0*d \n", 4, Page);
    printf("The page number = %0*d \n", 5, Page);

    int Number1 = 20, Number2 = 30;
    printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);
    return 0;
}
```

## Float Format

**Example:**
``` cpp
int main() {
    float PI = 3.14159265;

    // Precision specification
    printf("Precision specification of %.*f\n", 1, PI);
    printf("Precision specification of %.*f\n", 2, PI);
    printf("Precision specification of %.*f\n", 3, PI);
    printf("Precision specification of %.*f\n", 4, PI);

    float x = 7.0, y = 9.0;
    printf("\nThe float division is : %.3f / %.3f = %.3f \n\n", x, y, x / y);

    double d = 12.45;
    printf("The double value is : %.3f \n", d);
    printf("The double value is : %.4f \n", d);
    return 0;
}
```

## Char and String Format

**Example:**
```cpp
int main() {
    char Name[] = "Mohammed Abu-Hadhoud";
    char SchoolName[] = "Programming Advices";

    // print string and String
    printf("Dear %s, How are you?\n\n", Name);
    printf("Welcome to %s School!\n\n", SchoolName);

    char c = 'S';
    printf("Setting the width of c :%*c \n", 1, c);
    printf("Setting the width of c :%*c \n", 2, c);
    printf("Setting the width of c :%*c \n", 3, c);
    printf("Setting the width of c :%*c \n", 4, c);
    printf("Setting the width of c :%*c \n", 5, c);

    return 0;
}
```

## SetW (Set Width) Manipulator
- We have to implement the library called “iomanip”

``` cpp
#include <iomanip>
Example:

#include <iomanip> // this library stored the std::setw

int main() {
    cout << "---------|--------------------------------|---------|" << endl;
    cout << "   Code  |              Name              |  Mark  |" << endl;
    cout << "---------|--------------------------------|---------|" << endl;

    cout << setw(9) << "C101" << "|" << setw(32) << "introduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
    cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
    cout << setw(9) << "C1035243" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;

    cout << "---------|--------------------------------|---------|" << endl;
    return 0;
}
```
--------------------------------------------------------------------------------------------------
# More About Arrays

# 2D Arrays

```cpp
int x[Rows][Cols];
// OR
//                  row1          row2            row3
int x[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
```
--------------------------------------------------------------------------------------------------

# Passing by Ref/Val

## By Reference

- When sending data to functions for not taking a large space in the memory, we will pass it by the address, so only one slot in the memory is taken by two names.

Example:
```cpp
void Function1(int &x) {
    x++;
}

int main() {
    int a = 10;
    Function1(a);
    cout << "\n a after calling function1 = " << a << endl;
    return 0;
}

// &a => hexadecimal address.
```
## By Value
- When sending data to functions, we will take from the memory two places for the same data and copy it in the function. Instead, we should send data by reference (address).

Example:
``` cpp
void Function1(int x) {
    x++;
}

int main() {
    int a = 10;
    Function1(a);
    cout << "\n a after calling function1 = " << a << endl;
    return 0;
}
```

## Creating Reference

**Example:**
``` cpp
int main() {
    int a = 10;
    int &x = a;

    cout << &a << endl;
    cout << &x << endl;

    x = 20;
    //Both x and a will be changed

    cout << a << endl;
    cout << x << endl;
}
```
--------------------------------------------------------------------------------------------------

# Pointers

## Pointer Declarations

```cpp
// A pointer is a variable that stores the address of another variable.

int main() { 
    int a = 10;    
    cout << "a value = " << a << endl;  // value
    cout << "a address = " << &a << endl; // address

    int *p;  // declaring pointer
    p = &a;
    cout << "Pointer Value = " << p << endl;

    return 0; 
}
```

## Dereferencing Pointer

``` cpp
int main() { 
    int a = 10;
    
    cout << "a value = " << a << endl;
    cout << "a address = " << &a << endl;

    int *p; 
    p = &a;    

    cout << "Pointer Value = " << p << endl;     
    cout << "Value of the address that p is pointing to is " << *p << endl;     

    *p = 20;     
    cout << a << endl;     
    cout << *p << endl;  

    a = 30;     
    cout << a << endl;     
    cout << *p << endl;     

    return 0;
}
```

## Pointer vs Reference
- A **reference** is another name for the value but with the same address.
- A **pointer** stores the address of any value and can change the address it points to, but a reference is fixed.

``` cpp
int main() {
    int a = 10;
    int &x = a;
    cout << &a << endl;
    cout << &x << endl;
    cout << a << endl;
    cout << x << endl;

    int *p = &a;
    cout << p << endl;
    cout << *p << endl;

    int b = 20;
    p = &b;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}
```

## Pointers and Arrays
- A pointer points to the first element in the array.

``` cpp
int main() {
    int arr[4] = {10, 20, 30, 40};

    int *ptr;
    ptr = arr;

    // ptr is equivalent to &arr[0];
    // ptr + 1 is equivalent to &arr[1];
    // ptr + 2 is equivalent to &arr[2];
    // ptr + 3 is equivalent to &arr[3];

    cout << "Addresses are:\n";
    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;

    cout << "\nValues are: \n";
    cout << *(ptr) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;

    return 0;
}
```

## Pointers and Structures

``` cpp
struct stEmployee { 
    string Name; 
    float Salary; 
}; 

int main() { 
    stEmployee Employee1, *ptr;     

    Employee1.Name = "Mohammed Abu-Hadhoud";     
    Employee1.Salary = 5000;

    cout << Employee1.Name << endl;     
    cout << Employee1.Salary << endl;   

    ptr = &Employee1;    

    cout << "\nUsing Pointer:\n";     
    cout << ptr->Name << endl;     
    cout << ptr->Salary << endl; 

    return 0; 
}
```

## Pointer to Void
- When declaring a pointer as void, we make this pointer generic.
- When printing the value of the pointer, we have to recast the pointer to the data type.
  
``` cpp

int main() {
    void *ptr;
    float f1 = 10.5;
    int x = 50;

    ptr = &f1;

    cout << ptr << endl;
    cout << *(static_cast<float*>(ptr)) << endl;

    ptr = &x;

    cout << ptr << endl;    
    cout << *(static_cast<int*>(ptr)) << endl;

    return 0;
}

```
--------------------------------------------------------------------------------------------------

# Dynamic Memory Allocation

## Memory Management
- When declaring a pointer and initializing it with the new statement.
-  We have to use the delete statement to free the allocated memory.
  
```cpp
int main() {
    // declare an int pointer
    int* ptrX;

    // declare a float pointer
    float* ptrY;

    // dynamically allocate memory
    ptrX = new int;
    ptrY = new float;

    // assigning value to the memory
    *ptrX = 45;
    *ptrY = 58.35f;

    cout << *ptrX << endl;
    cout << *ptrY << endl;

    // deallocate the memory
    delete ptrX;
    delete ptrY;

    return 0;
}
```

## Dynamic Array Management

``` cpp
int main() {
    int num;
    cout << "Enter the total number of students: ";
    cin >> num;

    float *ptr;
    // memory allocation of the number of floats
    ptr = new float[num];

    cout << "Enter grades of students." << endl;
    for (int i = 0; i < num; i++) {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying grades of students." << endl;
    for (int i = 0; i < num; i++) {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }
    
    // ptr memory is released
    delete[] ptr;

    return 0;
}
```
--------------------------------------------------------------------------------------------------

# Exception Handling

## Error Handling
- It is used by the developer to handle some errors and prevent the application from crashing.

```cpp
int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    try {
        cout << v.at(5);
    }
    catch(...) {
        cout << "out of bound" << endl;
    }
    return 0;
}
```
--------------------------------------------------------------------------------------------------

# Dealing with Strings

## String Library

```cpp
// We must include the string library
// #include <string>

int main() {
    string S1 = "My Name is Makrious Ayman, I Love Programming.";

    // Prints the length of the string
    cout << S1.length() << endl;

    // Returns the letter at position 3
    cout << S1.at(3) << endl;

    // Adds " I am 20 Years old" to the end of string
    S1.append(" I am 20 Years old.");
    cout << S1 << endl;

    // Inserts "Ali" at position 7
    S1.insert(7, " Ali ");
    cout << S1 << endl;

    // Prints all the next 8 letters from position 16
    cout << S1.substr(16, 8) << endl;

    // Adds one character to the end of the string
    S1.push_back('X');
    cout << S1 << endl;

    // Removes one character from the end of the string
    S1.pop_back();
    cout << S1 << endl;

    // Finds "Ali" in the string
    cout << S1.find("Ali") << endl;

    // Finds "ali" in the string
    cout << S1.find("ali") << endl;
    if (S1.find("ali") == S1.npos) {
        cout << "ali is not found";
    }

    // Clears all string letters
    S1.clear();
    cout << S1 << endl;

    return 0;
}
```

## CCtype Library
- We must include the cctype library #include <cctype>

```cpp
#include <cctype>

int main() {
    char x;
    char w;

    x = toupper('a');
    w = tolower('A');
    cout << "converting a to A: " << x << endl;
    cout << "converting A to a: " << w << endl;

    // Digits (A to Z)
    // returns zero if not, and non-zero if yes
    cout << "isupper('A') " << isupper('A') << endl;

    // Lower case (a to z)
    // returns zero if not, and non-zero if yes
    cout << "islower('A') " << islower('A') << endl;

    // Digits (0 to 9)
    // returns zero if not, and non-zero if yes
    cout << "isdigit('A') " << isdigit('A') << endl;

    // Punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    // returns zero if not, and non-zero if yes
    cout << "ispunct('A') " << ispunct('A') << endl;

    return 0;
}

```
--------------------------------------------------------------------------------------------------

# Saving Data in txt Files

## Out Mode

```cpp
// We must include the fstream library
// #include <fstream>

int main() {
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out); // Write Mode

    if (MyFile.is_open()) {
        MyFile << "Hi, this is the first line\n";
        MyFile << "Hi, this is the second line\n";
        MyFile << "Hi, this is the third line\n";

        MyFile.close();
    }
    return 0;
}
```

## Append Mode
- We use the out mode and append (app) mode together

``` cpp
int main() {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out | ios::app); // Append Mode
    if (MyFile.is_open()) {
        MyFile << "Hi, this is a new line\n";
        MyFile << "Hi, this is another new line\n";
        MyFile.close();
    }
    return 0;
}
```

## Print File Content
``` cpp
void PrintFileContent(string FileName) {
    fstream MyFile;
    MyFile.open(FileName, ios::in); // Read Mode

    if (MyFile.is_open()) {
        string line;

        while (getline(MyFile, line)) {
            cout << line << endl;
        }

        MyFile.close();
    }
}

int main() {
    PrintFileContent("MyFile.txt");
    return 0;
}
```

## Load File Content to Vector
``` cpp
void LoadDataFromFileToVector(string FileName, vector<string> &vFileContent) {
    fstream MyFile;

    MyFile.open(FileName, ios::in); // Read Mode

    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}

int main() {
    // Load data from file to vector and print it out.
    vector<string> vFileContent;

    LoadDataFromFileToVector("MyFile.txt", vFileContent);
    for (string &Line : vFileContent) {
        cout << Line << endl;
    }
    return 0;
}
```

## Save Vector Data to File
``` cpp
void SaveVectorToFile(string FileName, vector<string> &vFileContent) {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out);
    if (MyFile.is_open()) {
        for (string &Line : vFileContent) {
            if (Line != "") {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
}

int main() {
    vector<string> vFileContent{"Ali", "Shadi", "Maher", "Fadi", "Lama"};
    SaveVectorToFile("MyFile.txt", vFileContent);
    return 0;
}
```

## Delete Data from File
``` cpp
void LoadDataFromFileToVector(string FileName, vector<string> &vFileContent) {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::in); // Read Mode
    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}

void SaveVectorToFile(string FileName, vector<string> vFileContent) {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out);
    if (MyFile.is_open()) {
        for (string Line : vFileContent) {
            if (Line != "") {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
}

void DeleteRecordFromFile(string FileName, string Record) {
    vector<string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);

    for (string &Line : vFileContent) {
        if (Line == Record) {
            Line = "";
        }
    }

    SaveVectorToFile(FileName, vFileContent);
}

void UpdateDataInFile(string FileName, string Record, string UpdateTo) {
    fstream MyFile;
    vector<string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);

    for (string &Line : vFileContent) {
        if (Line == Record) {
            Line = UpdateTo;
        }
    }

    SaveVectorToFile(FileName, vFileContent);
}

void PrintFileContent(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode
    if (MyFile.is_open()){
        string Line;
        while (getline(MyFile, Line)){
            cout << Line << endl;
        }
        MyFile.close();
    }
}

int main() {
    cout << "File Content Before Delete.\n";
    PrintFileContent("MyFile.txt");

    DeleteRecordFromFile("MyFile.txt", "Ali");
    cout << "\n\nFile Content After Delete.\n";

    PrintFileContent("MyFile.txt");

    return 0;
} 
```
--------------------------------------------------------------------------------------------------

# Local Date Time

## Standard Library Date and Time

```cpp
// We must include the ctime library
// #include <ctime>

#pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    time_t t = time(0); // get time now

    char* dt = ctime(&t); // convert to string form

    cout << "Local date and time is: " << dt << "\n";

    // converting now to tm struct for UTC date/time
    tm* gmtm = gmtime(&t);
    dt = asctime(gmtm);

    cout << "UTC date and time is: " << dt;
}
```

## Datetime Structure
``` cpp
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    time_t t = time(0);
    tm* now = localtime(&t);

    cout << "Year: " << (now->tm_year + 1900) << endl; 
    cout << "Month: " << (now->tm_mon + 1) << endl; 
    cout << "Day: " << now->tm_mday << endl; 
    cout << "Hour: " << now->tm_hour << ":"; 
    cout << "Minutes: " << now->tm_min << ":"; 
    cout << "Second: " << now->tm_sec << endl;
    cout << "Weekday: " << now->tm_wday << endl;
    cout << "Day of Year: " << now->tm_yday << endl;
    cout << "Daylight Saving Time: " << now->tm_isdst << endl;
}
```

--------------------------------------------------------------------------------------------------

Happy Learning!
