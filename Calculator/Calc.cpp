#include<iostream>  
#include<stdio.h> 
#include<math.h>  
#include<stdlib.h> 
#include "Calc.h"

/*int main()
{
    int x=0, y=0;
    int opr;
    // display different operation of the calculator  
    do
    {
        std::cout << "Select any operation from the C++ Calculator"
            "\n1 = Addition"
            "\n2 = Subtraction"
            "\n3 = Multiplication"
            "\n4 = Division"
            "\n5 = Exit"
            "\n \n Make a choice: ";
        std::cin >> opr;
        std::cout << "\n Enter the first number:";
        std::cin >> x;
        std::cout << "\n Enter the second number:";
        std::cin >> y;

        switch (opr)
        {
        case 1:
            std::cout << "\nSum of the numbers=" << add(x, y);   // call add() function to find the Addition  
            break;
        case 2:
            std::cout << "\nDifference of the numbers=" << sub(x, y);   // call sub() function to find the subtraction  
            break;
        case 3:
            std::cout << "\nProduct of the numbers=" << multiply(x, y); // call multi() function to find the multiplication  
            break;
        case 4:
            std::cout << "\nQuotient of the numbers=" << divide(x, y); // call division() function to find the division  
            break;
        case 5:
            exit(0);   // terminate the program  
            break;
        default:
            std::cout << "Something is wrong..!!";
            break;
        }
        std::cout << " \n------------------------------\n";
    } while (opr != 5);
    return 0;
}*/

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}
