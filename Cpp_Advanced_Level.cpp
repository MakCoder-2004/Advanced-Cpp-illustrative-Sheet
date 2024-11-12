# C++ Advanced Level
**By: Makrious Ayman**

## Visual Studio Tips

### Creating A Library Using Visual Studio

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

### Function Fast Access on Visual Studio

- If you see a function call and you want to go to this function:
    - Press on the function
    - Press `F12` (Go to function definition)
    - Press `Ctrl+F12` (Go to function declaration)

- If you need to see the call hierarchy:
    - Right-click on the function
    - Choose "Go to call hierarchy"
