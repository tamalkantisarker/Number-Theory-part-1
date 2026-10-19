# Number Theory & Cryptographic Primitives 🔢

[![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg?style=flat-square)](LICENSE)
[![Build Status](https://img.shields.io/badge/Tests-Passing_100%25-brightgreen?style=flat-square)]()

A high-performance, production-grade computational number theory library implemented in modern C++ (C++17). Designed for competitive programming, algorithmic research, and foundational cryptography.

---

## 🚀 Features & Algorithmic Complexities

| Algorithm | Method / Theorem | Time Complexity | Space Complexity |
|---|---|---|---|
| **Binary Exponentiation** | Divide & Conquer (`base^exp % mod`) | $O(\log \text{exp})$ | $O(1)$ |
| **Modular Multiplicative Inverse** | Fermat's Little Theorem ($a^{p-2} \equiv a^{-1}$) | $O(\log \text{mod})$ | $O(1)$ |
| **Modular Combinations ($nCr$)** | Factorial + Inverse Factorial Precomputation | $O(1)$ per query | $O(N)$ table |
| **Prime Factorization** | Trial division with $O(\sqrt{N})$ bound | $O(\sqrt{N})$ | $O(\text{factors})$ |
| **Sieve of Eratosthenes** | Prime generation up to $N$ | $O(N \log \log N)$ | $O(N)$ bits |

---

## 📂 Project Architecture

```
Number-Theory-part-1/
├── include/
│   └── number_theory.hpp     # Declarations with doxygen-style documentation
├── src/
│   └── number_theory.cpp     # Optimized implementations
├── tests/
│   └── test_number_theory.cpp# Unit test suite with strict assertions
├── NumberTheory.cpp          # Interactive command-line driver
└── README.md                 # Documentation
```

---

## 🛠️ Build & Run

### 1. Run Automated Test Suite
```bash
g++ -O2 -std=c++17 -Iinclude src/number_theory.cpp tests/test_number_theory.cpp -o test_suite.exe
./test_suite.exe
```

### 2. Run Interactive CLI Application
```bash
g++ -O2 -std=c++17 -Iinclude src/number_theory.cpp NumberTheory.cpp -o NumberTheory.exe
./NumberTheory.exe
```

---

## 👨‍💻 Author
**Tamal Kanti Sarker**  
Department of Computer Science and Engineering, University of Dhaka  
GitHub: [@tamalkantisarker](https://github.com/tamalkantisarker)
