//
//  math.cpp
//  cppcalc
//
//  Created by Persephone on 18/09/2023.
//
#include "main.h"

int input();

int add(int x, int y) {

	input(x, y);

	int z{ x + y };

	return z;
}