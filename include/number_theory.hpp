#ifndef NUMBER_THEORY_HPP
#define NUMBER_THEORY_HPP

#include <vector>
#include <iostream>
#include <cassert>

namespace NumberTheory {

constexpr long long DEFAULT_MOD = 1000000007LL;

/**
 * @brief Computes (base^exp) % mod using binary exponentiation in O(log exp) time.
 */
long long power(long long base, long long exp, long long mod = DEFAULT_MOD);

/**
 * @brief Computes modular multiplicative inverse using Fermat's Little Theorem (mod must be prime).
 */
long long modInverse(long long n, long long mod = DEFAULT_MOD);

/**
 * @brief Precomputes factorials and inverse factorials up to maxN for O(1) nCr queries.
 */
void precomputeFactorials(int maxN, long long mod = DEFAULT_MOD);

/**
 * @brief Computes nCr % mod in O(1) after precomputation.
 */
long long nCr(int n, int r, long long mod = DEFAULT_MOD);

/**
 * @brief Finds distinct prime factors of n in O(sqrt(n)) time.
 */
std::vector<int> primeFactors(int n);

/**
 * @brief Generates all prime numbers up to n using the Sieve of Eratosthenes in O(n log log n).
 */
std::vector<int> sieve(int n);

} // namespace NumberTheory

#endif // NUMBER_THEORY_HPP
