#include<bits/stdc++.h>
using namespace std;

const int MODULO = 1e9 + 7;

class Solution {
public:
    long long modularExponentiation(long long base, long long power) {
        long long result = 1;
        base %= MODULO;
        while (power > 0) {
            if (power & 1) {
                result = (result * base) % MODULO;
            }
            base = (base * base) % MODULO;
            power >>= 1;
        }
        return result;
    }

    long long modularInverse(long long number) {
        return modularExponentiation(number, MODULO - 2);
    }

    long long binomialCoefficient(long long total, long long selection) {
        if (selection > total) return 0;
        long long numerator = 1, denominator = 1;
        for (long long i = 0; i < selection; i++) {
            numerator = (numerator * (total - i)) % MODULO;
            denominator = (denominator * (i + 1)) % MODULO;
        }
        return (numerator * modularInverse(denominator)) % MODULO;
    }

    int countGoodArrays(int n, int m, int k) {
        if (k >= n) return 0;
        long long chooseK = binomialCoefficient(n - 1, k);
        long long remainingCombinations = modularExponentiation(m - 1, n - k - 1);
        long long result = (chooseK * m) % MODULO;
        result = (result * remainingCombinations) % MODULO;
        return static_cast<int>(result);
    }
};


int main() {
    
    return 0;
}
