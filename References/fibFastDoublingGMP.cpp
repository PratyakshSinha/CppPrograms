// fib_fastdoubling_gmp.cpp
// run this command in terminal g++ -O3 -march=native fibFastDoublingGMP.cpp -lgmpxx -lgmp -o fib.exe
#include <iostream>
#include <gmpxx.h>

// Iterative fast-doubling using bit-walk (avoids recursion depth).
// Returns F(n).
mpz_class fib_fast_doubling(unsigned long long n) {
    if (n == 0) return 0;

    mpz_class a = 0; // F(k)
    mpz_class b = 1; // F(k+1)

    // Find the highest set bit of n
#if defined(__GNUG__)
    int msb = 63 - __builtin_clzll(n);
#else
    int msb = 0;
    for (int i = 63; i >= 0; --i) if ((n >> i) & 1ULL) { msb = i; break; }
#endif

    for (int i = msb; i >= 0; --i) {
        // Apply doubling formulas:
        // c = F(2k)   = F(k) * (2*F(k+1) - F(k))
        // d = F(2k+1) = F(k)^2 + F(k+1)^2
        mpz_class two_b_minus_a = (b << 1) - a;  // 2*F(k+1) - F(k)
        mpz_class c = a * two_b_minus_a;
        mpz_class d = a * a + b * b;

        if ((n >> i) & 1ULL) {
            // Move to (2k+1): (F(2k+1), F(2k)+F(2k+1))
            a = d;
            b = c + d;
        } else {
            // Move to (2k): (F(2k), F(2k+1))
            a = c;
            b = d;
        }
    }
    return a; // = F(n)
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned long long n;
    std::cout << "Enter n: ";
    if (!(std::cin >> n)) return 0;

    mpz_class Fn = fib_fast_doubling(n);
    std::cout << "F(" << n << ") = " << Fn << "\n";
    std::cout << "Digits: " << Fn.get_str().size() << "\n";
    return 0;
}
