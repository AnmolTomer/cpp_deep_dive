#include <iostream> // Including library in the program
using namespace std; // Allows programmer to use anything inside std namespace without using std
// More on namespaces later
/*
int main() // Starting point of the program
{
    cout<<"Hello World!\n"; // Using << insertion operator and enclosing string in double quotes ""
    return 0; // Since written in int therefore returns 0 at the end as it shows successful completion.
    // \n and \t are esscape sequences, specifically these two for new line and tab space respectively.
}
 */

// To add two numbers
/*
int main()
{
    int a,b,sum; // Declaring 3 variables called a, b and sum
    cout<<"Enter two numbers : \t" // Prompt for user to be displayed on console window
    cin>>a>>b; // Extraction operator to read user input from keyboard and assigning it to a and b
    sum = a+b;
    cout<<"Sum is : "<<c<<endl;
    return 0;

}
*/

// To take the string input and print it
/*
int main()
{
    string str;
    cout<<"Enter your name here : ";
    cin>>str;
    cout<<"Hello "<<str<<endl;
    return 0;
}
 */

// To get the entire line input and print it

int main()
{
    string str;
    cout<<"Enter your name here : "; 
    getline(cin,str); // Function to get the entire line taking input stream and string variable.
    cout<<"Hello "<<str<<endl;
    return 0;
}