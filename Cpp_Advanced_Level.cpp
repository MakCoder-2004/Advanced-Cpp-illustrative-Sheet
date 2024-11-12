#include <iostream>
using namespace std;

/*=======================================================================================================*/
/*==================================|   " C++ Advanced Level"   |========================================*/
/*======================================= By:Makrious Ayman =============================================*/
/*=======================================================================================================*/

//------------------------- Visual Studio Tips ---------------------------

//Creating A Library Using Visual Studio 
/*
    1- From the upper bar select view

    2- Choose "Selection Explorer"

    3- Press Right Click on the "Header File"

    4- Choose "Add"

    5- Choose "Header File(.h)"

    6- In this file you must include
        #Pragma once
        include <iostream>
        namespace std;
        namespace LibraryName{

            // Your functions will be written here

        }

    7- In the main file or in the file you will be using this library you must input
    ---> #include "LibraryName.h"

    8- To call any fuctionn in this library :
    ---> LibraryName::FunctionName();

    9- For making it easy we can write
        => using namespace LibraryName;
        instead of writing LibraryName::FunctionName(); every time you call a function

*/

//Function Fast access on Visual Studio
/*
    => if you see a fuction call and you want to go to this function 
        - press on the function
        - press F12 (Go to function definition)
        - press CNTRL+F12 (Go to function declaration)

    => if you need to see the call hierarchy
        - Right click on the function
        - choose "Go to call hierarchy"
*/


//------------------------- Ternary Operator ----------------------------

//Short Hand IF 
/*

    Syntax :-
                   true            false
                    |               |
    condition ? value_if_true : value_if_false;

    // Old Way
    if(condition){
        // true block
    }else{
        // false block
    }

*/

//Ranged Loop 
/*
    syntax :-

    for(range_declaration : range_expression){
        // code
    }

Example:-
---------
    int main(){
        int arr[] = {1,2,3,4,5};

        for( int i : arr){
            cout << arr[i] << endl;
        }
    }

*/

//--------------------------- Validation --------------------------------

//Validate Number 
/*
    //=> this tichnique work with numbers only

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

    int main(){
        cout << "Your Number is " << ReadNumber() << endl;
    }
*/

//------------------------ Bitwise Operators ----------------------------

//Bitwise AND "&"
/*
    => it will change the numbers to binary and make adding in binary
    (12 & 25)
    00001100  -> 12
    00001101  -> 25
    -----------------
    00001000  -> 8

    int main(){
        cout << "Bitwise & Result : " << (12 & 25) << endl;  // output will be 8
    }
*/

//Bitwise OR "|"
/*  
    => it will change the numbers to binary and make or in binary
    (12 | 25)
    00001100  -> 12
    00001101  -> 25
    -----------------
    00011101  -> 29

    int main(){
        cout << "Bitwise & Result : " << (12 | 25) << endl;  // output will be 29
    }
*/

//---------------------- More About Functions ---------------------------

//Function Declaration VS Defenition
/*
    => when making a function we must put the function above the main but if we want 
    to put it under the main we will have to declare in above the main first.

Example:-
---------

// function declaration
void add(int, int);

int main() {
    add(10, 20);
    return 0;
}

// function Definition
void add(int a, int b) {
    cout << (a + b);
} 

*/

//Optional Parameters Technique
/*
    => To make the user choose if he want to put how many parameters

Example:-
---------
int MySum(int a, int b, int c = 0, int d = 0) {
     return (a + b + c + d);
}

int main() {
    cout << MySum(10, 20) << endl;
    cout << MySum(10, 20, 30) << endl;
    cout << MySum(10, 20, 30, 40) << endl;
    return 0;
} 
*/

//---------------------- More About Variables ---------------------------

//Static Variable
/*
    => static variable will be saved in memory and will remain the same even if the function 
    is called again.

Example:-
---------
void MyFunc() {
    static int Number = 1;
    cout << "Value of Number: " << Number << "\n";
    Number ++;
}

int main()
{
    MyFunc();
    MyFunc();
    MyFunc();
    return 0;
} 
*/

//Automatic Variable
/*
    => automaticaly recognize the type of the data .

Example:-
---------

int main()
{
    auto x = 10; //Type Integer
    auto y = 12.5; //Type Double
    auto z = "Makrious"; //Type String

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
} 
*/

//---------------------- Printing & Formatting ---------------------------

//Integer Format
/*  

Example:-
---------

int main() {

    int Page = 1, TotalPages = 10;

    // print string and int variable
    printf("The page number = %d \n", Page);
    printf("You are in Page %d of %d \n", Page, TotalPages);

    //Width specification
    printf("The page number = %0*d \n", 2, Page);
    printf("The page number = %0*d \n", 3, Page);
    printf("The page number = %0*d \n", 4 , Page);
    printf("The page number = %0*d \n", 5, Page);

    int Number1 = 20, Number2 = 30;
    printf("The Result of %d + %d = %d \n", Number1, Number2, Number1+ Number2);
    return 0;
} 
*/

//Float Format
/*

Example:-
---------

int main() {

    float PI = 3.14159265;

    //Precision specification
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
*/

//Char and String Format
/*

Example:-
---------

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
*/

//SetW (Set Width) Manipulator
/*
    => we have to implement the library called "iomanip"
        - #include <iomanip>

Example:-
---------

#include <iomanip> // this library stored the std::setw

int main()
{
    cout << "---------|--------------------------------|---------|" << endl;
    cout << "   Code  |              Name              |  Mark  |" << endl;
    cout << "---------|--------------------------------|---------|" << endl;

    cout <<setw(9) << "C101" << "|" << setw(32) << "introduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
    
    cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
    
    cout << setw(9) << "C1035243" << "|" << setw(32) << "Network"<< "|" << setw(9) <<"75" << "|" << endl;

    cout << "---------|--------------------------------|---------|" << endl;
    return 0;
} 
*/

//-------------------------- More About Arrays -----------------------------

//2D Arrays
/* 
    int x[Rows][Cols];
//OR
                        row1          row2            row3
    int x[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

Example:-
---------
  
*/

//--------------------------- Passing by Ref/Val -----------------------------

//By ref 
/* 
    => when sending data to functions for not taiking a large space in the memory we will pass it by 
    the address , so only one slot in the memory taken by two names.
    
Example:-
---------

void Function1(int &x)
{
    x++;
}
int main()
{
    int a = 10;
    Function1(a);
    cout << "\n a after calling function1 = " << a << endl;
    return 0;
}

&a => hexadecimal address.
*/

//By Value
/*
    => when sending data to functions we will take from the memory two places for the same data
    and copy it in the function , instead we should send data by reference (address).

Example:-
---------

void Function1(int x)
{
    x++;
}
int main()
{
    int a = 10;
    Function1(a);
    cout << "\n a after calling function1 = " << a << endl;
    return 0;
}
*/

//Creating Reference
/*
int main(){
    int a = 10;
    int &x = a;

    cout << &a << endl;
    cout << &x << endl;

    x = 20;
    // both x and a will be changed

    cout << a << endl;
    cout << x << endl;
}
*/

//--------------------------------- Pointers ---------------------------------

//pointer declarations
/*
    => a pointer is variable which we store in it an address of another variable.

int main() { 
    int a = 10;    
    cout <<"a value = " << a << endl;  // value
    cout << "a address = "<< & a << endl; // address

    int * p;     // declaring pointer
    p = &a;
    cout << "Pointer Value = " << p << endl;

    return 0; 
    }
*/

//Dereferencing Pointer
/*
int main(){ 
    int a = 10;
    
    cout <<"a value = " << a << endl;
    cout << "a address = "<< & a << endl;

    int * p; 
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
*/

//pointer vs refrence
/*
    => the refrence is to make another name for the value but with the same address
    => the pointer is to store the address of any value, we can change the adress of the value which
    is stored in the pointer, but the reference is fixed.

Example:-
----------
int main()
{
    int a = 10;
    int & x = a;
    cout << &a << endl;
    cout << &x << endl;
    cout << a << endl;
    cout << x << endl;

    int * p = &a;
    cout << p << endl;
    cout << *p << endl;

    int b = 20;
    p = &b;
    cout << p << endl;
    cout << *p << endl;

    return 0;

*/

//Pointers and Arrays
/*
    => the pointer points on the first element in the array

int main()
{
    int arr[4] = {10,20,30,40};

    int *ptr;
    ptr = arr;

    //ptr is equivalent to &arr[0];
    //ptr + 1 is equivalent to &arr[1];
    //ptr + 2 is equivalent to &arr[2];
    //ptr + 3 is equivalent to &arr[3];

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
*/

//pointers and structures
/*
Example:-
---------

struct stEmplyee{ 
    string Name; 
    float Salary; 
}; 
int main() { 

stEmplyee Employee1, *ptr;     

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

*/

// Pointer to Void
/*
    => when declaring a pointer as void we are making this pointer Generic
    but when printing the value of the pointer we have to recast the pointer to the data type

    - *(static_cast<DataType*>(ptr))

Example:-
---------

int main()
{
    void * ptr;
    float f1 = 10.5;
    int x = 50;

    ptr = &f1;

    cout << ptr <<endl;
    cout << *(static_cast<float*>(ptr)) <<endl;

    ptr = &x;

    cout << ptr << endl;    
    cout << *(static_cast<int*>(ptr)) << endl;

    return 0;
    }


*/

//------------------------- Dynamic Memory Allocation -------------------------

//Memory Management
/*
    => when declaring a pointer and intializing it with new statement we have to 
    do the delete statement in order to delete what we stored to reduce the memory.

Example:-
---------

int main()
{
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
*/

//Dynamic Array Management
/*

Example:-
---------

int main() {
    int num;
    cout << "Enter total number of students: ";
    cin >> num;

    float * ptr;
    // memory allocation of num number of floats
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
*/

//---------------------------- Exception Handling -----------------------------

//Error Handling 
/*  
    => it is used to handel some errors by the developer in order not to destroy the application

Example:-
----------

int main(){
    vector <int> v = {1,2,3,4,5};

    try {
        cout << v.at(5);
    }
    catch(...) {
        cout << "out of bound"<< endl;
    }
    return 0;
}
*/

//---------------------------- Dealing with Strings ----------------------------

//String Library 
/*  
    => we must include the string library
        - #include <string>

int main()
{
    string S1= "My Name is Makrious Ayman, I Love Programming.";

    //Prints the length of the string
    cout << S1.length() << endl;

    //Returns the letter at position 3
    cout << S1.at(3) << endl;

    //Adds " I am 20 Years old" to the end of string
    S1.append(" I am 20 Years old".);
    cout << S1 << endl;

    //inserts Ali at position 7
    S1.insert(7, " Ali ");
    cout << S1 << endl;

    //Prints all the next 8 letters from position 16.
    cout << S1.substr(16,8) << endl;

    //Adds one character to the end of the string
    S1.push_back('X');
    cout << S1 << endl;

    //Removes one character from the end of the string
    S1.pop_back();
    cout << S1 << endl;

    //Finds Ali in the string
    cout << S1.find("Ali") << endl;

    //Finds ali in the string
    cout << S1.find("ali") << endl;
    if (S1.find("ali") == S1.npos)
    {
        cout << "ali is not found";
    }

    //clears all string letters.
    S1.clear();
    cout << S1 << endl;
    
    return 0;
} 

*/

//ccytype Library
/*  
    => we must include the cctype library
        - #include <cctype>

int main()
{
    char x ;
    char w ;

    x = toupper('a');
    w = tolower('A');
    cout << "converting a to A: " << x << endl;
    cout << "converting A to a: " << w << endl;

    // Digits (A to Z)
    // returns zero if not, and non zero of yes
    cout << "isupper('A') " << isupper( 'A') << endl;

    // lower case (a to z)
    // returns zero if not, and non zero of yes
    cout << "islower('A') " << islower('A') << endl;

    // Digits (0 to 9)
    // returns zero if not, and non zero of yes
    cout << "isdigit('A') " << isdigit ('A') << endl;

    // punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    // returns zero if not, and non zero of yes
    cout << "ispunct('A') " << ispunct('A') << endl;

    return 0;
} 
*/

//-------------------------- Saving Data in txt files ----------------------------

//Out mood
/*
    => we must include the fstream library
        - #include <fstream>

Example:-
---------

int main() {
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out) ;//Write Mode

    if (MyFile.is_open())
    {
        MyFile << "Hi, this is the first line\n";
        MyFile << "Hi, this is the second line\n";
        MyFile << "Hi, this is the third line\n";

        MyFile.close();
    }
    return 0;
} 
*/

//Append mood
/*
    => we use the out mode and append (app) mode together

int main() {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out | ios::app );//append Mode
    if (MyFile.is_open())
    {
        MyFile << "Hi, this is a new line\n";
        MyFile << "Hi, this is another new line\n";
        MyFile.close();
    }
    return 0;
} 
*/

//Print File Content
/*

void PrintFileContent(string FileName) {
    fstream MyFile;
    MyFile.open( FileName, ios::in );//append Mode

    if (MyFile.is_open())
    {
        string line;

        while(getline(MyFile,line)){
            cout << line << endl;
        }   

        MyFile.close();
    }
} 

int main() {
    PrintFileContent("MyFile.txt");
    return 0;
}
*/

//Load File content to vector
/*
void LoadDataFromFileToVector(string FileName, vector <string> &vFileContent)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}
int main() {
    // Load data from file to vector and print it out.
    vector <string> vFileContenet;
    
    LoadDataFromFileToVector("MyFile.txt", vFileContenet);
    for (string &Line : vFileContenet)
    {
        cout << Line << endl;
    }
    return 0;
} 
*/

//Save Vector Data to File
/*

void SaveVectorToFile(string FileName, vector <string> &vFileContent)
{
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out);
    if (MyFile.is_open()){
        for (string &Line : vFileContent)
        {
            if (Line != ""){
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
}
int main()
{
    vector <string> vFileContenet{"Ali","Shadi","Maher","Fadi","Lama"};
    SaveVectorToFile("MyFile.txt", vFileContenet);
    return 0;
} 
*/

//Delete Data from File
/*

void LoadDataFromFileToVector(string FileName, vector <string> &vFileContent)
{
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::in);//read Mode
    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line)){
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out);
    if (MyFile.is_open()){
        for (string Line : vFileContent){
            if (Line != ""){
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
} 

void DeleteRecordFromFile(string FileName, string Record)
{
    vector <string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);

    for (string &Line : vFileContent){
        if (Line == Record){
            Line = "";
        }
    }

    SaveVectorToFile(FileName, vFileContent);
}

void UpdateDataInFile(string FileName, string Record, string UpdateTo){
    fstream MyFile;
    vector <string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);

    for (string &Line : vFileContent){
        if (Line == Record){
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

*/

//------------------------------- Local Date Time ---------------------------------

// Standard Library Date and Time
/*
    => we must include the ctime library
        - #include <ctime>

#pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    time_t t = time(0); // get time now

    char* dt = ctime(&t); // convert in string form

    cout << "Local date and time is: " << dt << "\n";

    // converting now to tm struct for UTC date/time

    tm* gmtm = gmtime(&t);

    dt = asctime(gmtm);

    cout << "UTC date and time is: " << dt;

}
*/

//Datetime Structure
/*

#include <ctime>
int main(){
    time_t t= time(0);
    tm* now = localtime(&t);

    cout << "Year :" << (now->tm_year + 1900) << endl; 
    cout << "Month :" << (now->tm_mon + 1) << endl; 
    cout << "Day :" << now->tm_mday << endl; 
    cout << "Hour :" <<now->tm_hour << ":" 
    cout << "Minutes :" << now->tm_min << ":" 
    cout << "second :" << now->tm_sec << endl;
    cout << "Weekday :" << now->tm_wday << endl;
    cout << "Day of Year :" << now->tm_yday << endl;
    cout << "Daylight Saving Time : " << now->tm_isdst << endl;
}
*/


/*=======================================================================================================*/
/*=============================================== THE END ===============================================*/
/*=======================================================================================================*/