/**
 * @file cours_test.h
 * @brief Main header file for the cours_test project
 * @author dev1ous
 * @date 2025-01-19
 */

#pragma once

/**
 * @brief Calculates the factorial of a number.
 *
 * @param n The non-negative integer for which to calculate the factorial
 * @return int The factorial of n
 * @throws std::overflow_error If the result exceeds the maximum value of int
 * 
 * @note Time complexity: O(n)
 * @warning Input must be non-negative
 *
 * @details
 * The factorial of a non-negative integer n (written as n!) is the product of all
 * positive integers less than or equal to n. For example:
 * - 5! = 5 * 4 * 3 * 2 * 1 = 120
 * - 0! is defined to be 1
 *
 * The function uses a recursive implementation.
 *
 * @code{.cpp}
 * int result = factorial(5); // Returns 120
 * int zero_factorial = factorial(0); // Returns 1
 * @endcode
 */
int factorial(int n);
