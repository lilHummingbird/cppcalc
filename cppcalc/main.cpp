//
//  main.cpp
//  cppcalc
//
//  Created by Persephone on 16/09/2023.
//

// Include
#include <iostream>
#include "main.h"




int main() {
start:

    std::cout << "Please enter the number corresponding to what you want to do!\n" << "1. Add\n" << "2. Subtract\n" << "3. Multiply\n" << "4. Divide\n" << "5. Square root\n" << "6. Power\n"
        << "7. Exit\n" << std::endl;

    int x;

    

    std::cin >> x;

    switch (x)
    {
    case 1:
       std::cout << "Input your numbers one at a time pressing enter inbetween them!" << std::endl;
       std::cout << add(input(),input()) << std::endl;

        goto start;

    default:
        break;
    }
    return 0;
}

