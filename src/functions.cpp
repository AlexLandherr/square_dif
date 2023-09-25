#include "include/functions.h"
#include <cstdint>
#include <numeric>
#include <cmath>

namespace func {
    int64_t sum_of_squares_in_range(int start, int stop) {
        int64_t sum = 0;
        for (int i = start; i <= stop; i++) {
            sum += std::pow(i, 2);
        }
        return sum;
    }

    int64_t square_of_sum_in_range(int start, int stop) {
        int64_t sum = 0;
        for (int i = start; i <= stop; i++) {
            sum += i;
        }
        return std::pow(sum, 2);
    }

    int64_t square_of_sum_sum_of_squares_difference(int start, int stop) {
        return square_of_sum_in_range(start, stop) - sum_of_squares_in_range(start, stop);
    }
}