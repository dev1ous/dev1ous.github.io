// cours_test.h : fichier Include pour les fichiers Include système standard,
// ou les fichiers Include spécifiques aux projets.

#pragma once

/**
 * @brief Calculates the factorial of a number.
 *
 * This function computes the factorial of a given
 * non-negative integer. It uses a recursive approach to
 * calculate the factorial.
 *
 * @param n The number for which the factorial is to be
 * calculated.
 *
 * @return The factorial of the number.
 *
 * @details
 * The factorial of a non-negative integer n is the product
 * of all positive integers less than or equal to n. For
 * example, the factorial of 5 is 5 * 4 * 3 * 2 * 1 = 120.
 * This function uses recursion to compute the factorial.
 *
 *  @example cours_test.cpp
 *
 * @usage
 * int result = factorial(5); // result will be 120
 */
int factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;

    // Recursive case: n * factorial(n - 1)
    return n * factorial(n - 1);
}

// TODO: Référencez ici les en-têtes supplémentaires nécessaires à votre programme.
