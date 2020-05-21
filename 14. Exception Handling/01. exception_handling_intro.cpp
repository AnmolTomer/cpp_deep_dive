/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{

    return 0;
}

/*
Exception handling is a feature of OOP also exists in JAVA.
Exception meaning : 
There are usually 3 kinds of errors that occur in programming
1. Syntax Error -> Programmer mistypes or skips writing something or writes it in an improper way then it leads to
syntax error. This is usually caught by compiler on the step where we build the executable file.
Examples of these types of error are (i) Variable declared but not used, used but not initialized,missing semicolon,
if-else ladder not made properly , these mostly occurs not due to wrong logic but lack of knowledge of syntax.      

2. Logical Error -> Want to do task A but what happens is something unexpected, no errors in syntax but in expected
    output. These types of errors are difficult to remove as you have to think. Compiler won't help you but Pen and Paper
    will help for sure along with debugger.

3. Run-time Error -> Occurs when user is using an application and if user mishandles the app then app may 
cause error during the runtime of program. There were no errors during development phase but there exists error during
runtime.
e.g.(i) Bad Input -> Suppose user needs to give int but is entering a string then it will mess up the program for sure.
(ii) Internet Connectivity.
(iii) Deletion of crucial files required for proper functioning of program.
(iv) Program dependent on a Printer or other hardware resource but that is not connected.

Program crashes abruptly during runtime errors. And it is users who are responsible for runtime error.

Exceptions are referred to as those inputs or cases upon entering of which program will give runtime error.
And way to address exceptions is to ask user for input until correct input is given.
Program gives meaningfull message to user so that users can remove wrong inputs themselves.

Thus, lack or inappropriate availability of resources causes Runtime errors which are external factors to the program.

What can be done in case of these run time errors ? You should raise some error or notify the user on receiving the error. This helps to guide the user so that user can troubleshoot the error.
*/