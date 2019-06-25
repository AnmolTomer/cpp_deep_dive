#include <iostream>
using namespace std;
int main()
{
    int marks;         //declaration
    int assigned = 10; // Direct value assigned to variable 10 is a literal.
    //Var name should start with alphabet, can be alphanumeric and var names are case-sensitive.
    // Varname can have only special character underscore _
    int a, b1, c; // Multiple variable assignment.
                  // Different ways of assigning values to variables in C++ introduced in C++ 11
    int val_a = 1;
    int val_b1(1);
    int val_c = (1);
    int val_d{1};
    int val_e = {1};

    // Literal assignment : decimal, octal, hexadecimal number
    a = 10;   // Decimal
    b1 = 010; // Octal
    c = 0x10; // Hexa
              // For integer type of variables we can assign a literal in decimal number system, octal or hexa and these type of ints
              // can be used in short, long, long long and even for char data type.
    cout << "Showing multiple ways of printing 1 : " << endl;
    cout << val_a << " " << val_b1 << " " << val_c << " " << val_d << " " << val_e << endl
         << a << " " << b1 << " " << c << endl
         << assigned << endl;
    cout << endl;
    /* Say we declare an int type var and assign it 1.7 as value in some cases compiler gives error, while in others it can
truncate the decimal part and set the value as 1 only, it is fundamentally wrong, just don't do it.*/
    int day = 1;
    long distance = 65836; // Here variable type is long but literal is an int only so to make it long we can do so
    long dist_v2 = 65836L; // Suffix with L makes it long value, as long literals are followed by L
    float price = 25;      // An int to float allowed.
    float price_2 = 034;
    // If we want to write float as 12.98 then by default the value is double. Better to have F at the end for float literals.
    float price_3 = 12.56F;

    // When using character type variable, use '' quotes for single character and "" double for string.
    char section = 'A';
    // And this is same as
    char sec_int = 65; // As per ASCII
    char sec_octal = 0x81;
    char sec_hexa = 0x41;
    char char_decimal = 12.5; // Won't appear as doesn't exists.
    char decimal_A = 65.5;    // Depicts coercion where value is internally converted into a required data-type.
    // Float value is converted into character and this is done implicitly that's why it is called coercion.
    bool b = true; // bool b = 1; also works.
                   // String : Not a primitive data type but a class provided by C++ and we can create variables
                   // called objects.
    string name = "John";
    cout << "Printing day distance dist_v2 price price_2 price_3" << endl;
    cout << day << " " << distance << " " << dist_v2 << " " << price << " " << price_2 << " " << price_3 << endl
         << endl;
    cout << "Display A with different values being entered in int, char, octal and hexadecimal numbers systems : " << endl;
    cout << section << " " << sec_int << " " << sec_octal << " " << sec_hexa << " " << char_decimal << " " << decimal_A << endl;
    float exponent = 123e2; // Depicts usage of scientific notations.
    float exp_2 = 123e-2;
    cout << endl
         << "Print exponents using scientific notations : " << endl;
    cout << exponent << " " << exp_2 << endl;
    string test = "Yes, string printing variable works! :)";
    cout << endl
         << "Checking whether string variable prints..." << endl
         << test << endl;
    // We used to have snake_case in C but in C++ we go for camelCase though that's not necessary.
    return 0;
}