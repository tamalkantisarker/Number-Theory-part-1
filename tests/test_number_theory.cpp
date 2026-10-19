#include "../include/number_theory.hpp"
#include <iostream>
#include <cassert>
#include <algorithm>

using namespace NumberTheory;

void testPower() {
    std::cout << "[RUNNING] Testing Binary Exponentiation..." << std::endl;
    assert(power(2, 0) == 1);
    assert(power(2, 1) == 2);
    assert(power(2, 10) == 1024);
    assert(power(3, 5) == 243);
    assert(power(10, 9, 1000000007LL) == 1000000000LL % 1000000007LL);
    std::cout << "[PASS] Binary Exponentiation verified!" << std::endl;
}

void testModularInverseAndCombinations() {
    std::cout << "[RUNNING] Testing Modular Inverse & nCr..." << std::endl;
    long long mod = 1000000007LL;
    long long inv2 = modInverse(2, mod);
    assert((inv2 * 2) % mod == 1);

    precomputeFactorials(1000, mod);
    assert(nCr(5, 0) == 1);
    assert(nCr(5, 1) == 5);
    assert(nCr(5, 2) == 10);
    assert(nCr(5, 5) == 1);
    assert(nCr(5, 6) == 0);
    assert(nCr(10, 3) == 120);
    std::cout << "[PASS] Modular Inverse & nCr verified!" << std::endl;
}

void testPrimeFactors() {
    std::cout << "[RUNNING] Testing Prime Factorization..." << std::endl;
    std::vector<int> f60 = primeFactors(60);
    std::vector<int> expected60 = {2, 3, 5};
    assert(f60 == expected60);

    std::vector<int> f13 = primeFactors(13);
    std::vector<int> expected13 = {13};
    assert(f13 == expected13);

    std::vector<int> f1 = primeFactors(1);
    assert(f1.empty());
    std::cout << "[PASS] Prime Factorization verified!" << std::endl;
}

void testSieve() {
    std::cout << "[RUNNING] Testing Sieve of Eratosthenes..." << std::endl;
    std::vector<int> primes30 = sieve(30);
    std::vector<int> expected = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    assert(primes30 == expected);

    std::vector<int> primes1 = sieve(1);
    assert(primes1.empty());
    std::cout << "[PASS] Sieve of Eratosthenes verified!" << std::endl;
}

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "  Number Theory Automated Test Suite    " << std::endl;
    std::cout << "========================================" << std::endl;
    testPower();
    testModularInverseAndCombinations();
    testPrimeFactors();
    testSieve();
    std::cout << "========================================" << std::endl;
    std::cout << "  ALL TESTS PASSED SUCCESSFULLY! (100%) " << std::endl;
    std::cout << "========================================" << std::endl;
    return 0;
}
