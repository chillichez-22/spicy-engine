Reference About Page

### About

References - What does the code do.
Reference API - What code is there.

It describes information about the code, what is does, where its used.
It answers " what does this code do ?" and " what parameters does the code need ?".

It ==IS== a general detailed description of ==what== the code does.
It is ==NOT== a detailed description of ==how== it works.

A Reference API ==IS== a list of all functions, methods, classes; and its information.
It is ==NOT== a description of how the code fits together.


Good references explain what the code does clearly and completely.
It should be simple and to the point.
It should not explain how the code functions or any concept.
It assumes you don't need to know how the code works.

It should provide information about the code. ( How it behaves, basic facts )
It should explain what parameters the code takes.
It should explain what returns the code gives.

It should provide potential problems that may arise, if applicable.

It should give examples of how to use the code.

### Writing

References should be broken into sections using the headers file.
Each new folder in the headers folder gets its own markdown script.

The name of this folder is the " # " header level 1.
More subfolders use the " ## " header level 2.

From here group similar concepts using " ### " header level 3 ( or omit this level if not needed ).
Each file in the respective folder gets its own " #### " heading level 4.

Each struct, public variable & function gets is put in a list using " - " markdown notation for a list, following the order of structs, variables, functions. Only the function name is provided, not the parameters or the return type. Struct should include its type "struct" before its name.

Classes using one header level higher than the current header level. ( Typically " ##### " header level 5)
Classes should include its type "class" before its name.
Class's variables are put in new lists, with the private going first, followed by protected variables, then public variables.
Class's methods are also put in a new lists with private going first followed by protected, then public. 
Class's constructors should go before every methods and variable, to make it easy to find

Example ( not reflective of current api ):

````
# Maths  <- Folder


### Vectors   <- Grouping

#### Vector2  <- File name

- struct Vector2  <- Struct

- add()  <- Functions
- sub()

#### Vector3 

- struct Vector3

- divide()
- multiply()


#### Matrix  <- File name

- projectionMatrix  <- Variables
- identity4x4 

##### class Matrix  <- Class name

- Matrix()  <- Constructor

- identity  <- Variables

- add()     <- Methods
- multiply()

````
