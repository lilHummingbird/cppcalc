//
//  main.cpp
//  cppcalc
//
//  Created by Persephone on 16/09/2023.
//

// Include
#include <iostream>
#include "main.h"

void inputText() {
    
    std::cout << "Input your number(s) one at a time pressing enter inbetween them!" << std::endl;
    
    return;
}

int main() {
start:

    std::cout << "Please enter the number corresponding to what you want to do!\n" << "1. Add\n" << "2. Subtract\n" << "3. Multiply\n" << "4. Divide\n" << "5. Power\n" << "6. Square root\n"
        << "7. Exit\n" << std::endl;

    int x;

    

    std::cin >> x;

    switch (x)
    {
        case 1:

            inputText();
            std::cout << add(input(), input()) << std::endl;
            
            goto start;
        case 2:
            
            inputText();
            std::cout << subtract(input(), input()) << std::endl;
            
            goto start;
        case 3:
            
            inputText();
            std::cout << multiply(input(), input()) << std::endl;
            
            goto start;
        case 4:
            
            inputText();
            std::cout << divide(input(), input()) << std::endl;
            
            goto start;
        case 5:
            
            inputText();
            std::cout << power(input(), input()) << std::endl;
            
            goto start;
        case 6:
            
            inputText();
            std::cout << sqre(input()) << std::endl;
            
            goto start;
        case 7:
            
            std::cout << "Thank you for using my calculator" << std::endl;
            
            break;
        default:
            std::cout << "Invalid input" << std::endl;
            
            goto start;
    }
    return 0;
}

