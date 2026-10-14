// Copyright 2026 Fomin Egor

#include <stdexcept>
#include "../Algorithms/Algorithms.h"

float division(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Input Error: can't divide by zero!");
    }
    return static_cast<float>(a) / b;
}
