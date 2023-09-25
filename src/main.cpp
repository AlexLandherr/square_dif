#include "include/functions.h"
#include <iostream>

/*
The sum of the squares of the first ten natural numbers is: 1^2+2^2+...+10^2 = 385
The square of the sum of the first ten natural numbers is:  (1+2+...+10)^2 = 3025
And the difference between them is 3025 - 385 = 2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int main() {
    std::cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum:" << '\n';
    std::cout << func::square_of_sum_sum_of_squares_difference(1, 100) << '\n';

    return 0;
}