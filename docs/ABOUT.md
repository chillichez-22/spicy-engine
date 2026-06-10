Documentation Main About Page.

## About

Following Divio's Documentation guideline the documentation is broken up into four sections. 

Explanations
- How the code works

Guides
- How to use the code to solve a problem

References
- What the code does
- ( Reference API ) What code there is

Tutorials
- Teaching how to use aspects of the code

These help to create better documentation and tailor the specific amount of detail / clarity / or understanding the reader needs.

## Writing Code

### Naming Conventions

##### Files

All files will be lowercase with _ to separate new words.

main.cpp
new_file.hpp
text_for_something.txt
new_file_2.md

##### Classes & Structs

All classes are structs will be PascalCase where each new word is a capital letter with no word delimiter.

class Vector
struct MyNewStruct
class LevelDataChunk

##### Methods & Variables & Everything else

Everything else will be camelCase where the first word has no capital letter at the start, but every following word has a capital start, with no word delimiter.

int add();
float subtractAllVectors();
bool isCollidingWithSomething();

int myInt;
float widthOfLine;
Vector2 screenSpaceCoord;


## Writing Docs

Doxygen will be used primarily for code ==documentation== of function, classes with "/\*\*" ending with "*/" and variables with "/**<"  "*/">.
Code ==comments== will use default c++ comments structure.


Code comments
```
// Code comment general descriptions

// Multi line comments 
// for longer description
```

Code Documentation
```
// Class, Struct, Function.... documentation

/**
* @brief For brief one line descriptions
* 
* @details For longer multi line 
* descriptions of the code
* 
* @param [Parameter] To describe the inputted parameter
* 
* @returns To describe the return case ( not needed if void )
* 
* @examples To give multi-Line code snippets giving brief examples of
* how to use the code including parameters and returns
*/ 

// Variable documentation is used with the same style of doxygen comments with an arrow afterwards

int var; /**< Single line descriptions */

int var; //!< Detailed description of the member
         //!< using more than one line
```

