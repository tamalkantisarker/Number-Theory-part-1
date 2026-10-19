#include "../include/number_theory.hpp"
#include <vector>

namespace NumberTheory {

static std::vector<long long> fact;
static std::vector<long long> faci;
static bool precomputed = false;

long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    long long cur = base % mod;
    while (exp > 0) {
        if (exp & 1) {
            res = (__int128_t(res) * cur) % mod;
        }
        cur = (__int128_t(cur) * cur) % mod;
        exp >>= 1;
    }
    return res;
}

long long modInverse(long long n, long long mod) {
    // By Fermat's Little Theorem, n^(mod - 2) = n^(-1) (mod mod) when mod is prime.
    return power(n, mod - 2, mod);
}

void precomputeFactorials(int maxN, long long mod) {
    fact.assign(maxN + 1, 1);
    faci.assign(maxN + 1, 1);
    
    for (int i = 1; i <= maxN; ++i) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    
    faci[maxN] = modInverse(fact[maxN], mod);
    for (int i = maxN - 1; i >= 0; --i) {
        faci[i] = (faci[i + 1] * (i + 1)) % mod;
    }
    precomputed = true;
}

long long nCr(int n, int r, long long mod) {
    if (r < 0 || n < r) return 0;
    if (r == 0 || n == r) return 1;
    if (!precomputed || (int)fact.size() <= n) {
        precomputeFactorials(n + 100, mod);
    }
    long long num = fact[n];
    long long den = (faci[r] * faci[n - r]) % mod;
    return (num * den) % mod;
}

std::vector<int> primeFactors(int n) {
    std::vector<int> factors;
    if (n <= 1) return factors;
    
    int temp = n;
    for (int i = 2; (long long)i * i <= temp; ++i) {
        if (temp % i == 0) {
            factors.push_back(i);
            while (temp % i == 0) {
                temp /= i;
            }
        }
    }
    if (temp > 1) {
        factors.push_back(temp);
    }
    return factors;
}

std::vector<int> sieve(int n) {
    std::vector<int> primes;
    if (n < 2) return primes;
    
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int p = 2; (long long)p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}

} // namespace NumberTheory
