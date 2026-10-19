#include "include/number_theory.hpp"
#include <iostream>
#include <vector>

using namespace NumberTheory;

void printMenu() {
    std::cout << "\n==========================================" << std::endl;
    std::cout << "   NUMBER THEORY & CRYPTO ALGORITHM ENGINE" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "1. Binary Exponentiation (a^b % mod)" << std::endl;
    std::cout << "2. Modular Inverse & Combination (nCr % mod)" << std::endl;
    std::cout << "3. Prime Factorization of N" << std::endl;
    std::cout << "4. Sieve of Eratosthenes (Primes <= N)" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Select an option [1-5]: ";
}

int main() {
    int choice;
    while (true) {
        printMenu();
        if (!(std::cin >> choice)) break;
        if (choice == 5) {
            std::cout << "Exiting. Happy Coding!" << std::endl;
            break;
        }

        switch (choice) {
            case 1: {
                long long base, exp;
                std::cout << "Enter base and exponent: ";
                if (std::cin >> base >> exp) {
                    std::cout << "(" << base << "^" << exp << ") % 1000000007 = " 
                              << power(base, exp) << std::endl;
                }
                break;
            }
            case 2: {
                int n, r;
                std::cout << "Enter n and r: ";
                if (std::cin >> n >> r) {
                    std::cout << "C(" << n << ", " << r << ") % 1000000007 = " 
                              << nCr(n, r) << std::endl;
                }
                break;
            }
            case 3: {
                int n;
                std::cout << "Enter number to factorize: ";
                if (std::cin >> n) {
                    auto factors = primeFactors(n);
                    std::cout << "Distinct Prime Factors of " << n << ": ";
                    for (int f : factors) std::cout << f << " ";
                    std::cout << std::endl;
                }
                break;
            }
            case 4: {
                int n;
                std::cout << "Enter upper limit N: ";
                if (std::cin >> n) {
                    auto primes = sieve(n);
                    std::cout << "Primes up to " << n << " (" << primes.size() << " primes): ";
                    int count = 0;
                    for (int p : primes) {
                        std::cout << p << " ";
                        if (++count >= 50) {
                            std::cout << "... (truncated)";
                            break;
                        }
                    }
                    std::cout << std::endl;
                }
                break;
            }
            default:
                std::cout << "Invalid choice! Please choose 1-5." << std::endl;
        }
    }
    return 0;
}
