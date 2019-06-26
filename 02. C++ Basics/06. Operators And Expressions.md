# Operators And Expressions

## Arithmetic Operators :

In arithmetic operators \*,/,% have higher precedence as compared to +,-.

**%** : Gives Remainder
e.g. 34%4 = 2, 39%12 = 3

**/** : Gives Quotient
e.g. 34/4 = 8, 39/12 = 3

#### NOTE : If a = 12.5f and b = 6.1f then suppose we have c = a/b then it is correct and we will get the output but mod % operator won't work for c = a%b. % works only on int and char type data and not for float.

## Preparing Expressions using Operators

Say we have an expression k = a+b+c\*d and we want expression to be such that c and d are multiplied and then product is added with sum of a and b. Here comes the precedence rule PEMDAS :
**P** = Parentheses
**E** = Exponents
**M** = Multiplication
**D** = Division
**A** = Addition
**S** = Subtraction

So, instead it would be much better to put parentheses such as k = ((a+b)+(c*d)), but this isn't easily readable and frankly as a programmer it's really tedious and too much of a work, we try to focus our energies on doing things smart way not the hard way. So we just write k = a+b+c * d. On writing k = a+b+c * d and we think which one gets executed first, some of you might reply that well according to PEMDAS c*d gets executed first right ? No, that's not true. 

On writing the expression k = a+b+c * d without parentheses we rely upon precedence and as we know higher precedence is multiplication then addition so compiler will not write the machine code which evaluates the expression in infix form only rather it will convert it into some post-fix form and then evaluate. For converting into post-fix form compiler needs fully parenthesised expression. So compiler will consider **k = a+b+c * d** as fully parenthesised based upon PEMDAS precedence rule i.e. compiler will parenthesise the expression. It can be visualised as following steps :
Step 1 : **k = a+b+(c * d)** = Parentheses around multiplication first due to highest precedence
Step 2 : **k = (a+b)+(c * d)** Due to associativity from left to right of operators as both are + operators.
Step 3 : **k = ((a+b)+(c * d))** This is how compiler will treat the expression. Now it will evaluate addition first. So what's the use of precedence ? To apply parentheses. 

# Some other Examples :

## - Area of a Circle : 3.14 * r  *  r

## - Root of a Quadratic Equation :  Root 1 = (-b + sqrt(b * b - 4* a * c))/2*a

## Root 2 = (-b - sqrt(b * b - 4* a * c))/2*a

- ## Speed Formula, s = (v * v - u * u) /2*a









