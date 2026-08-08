class Solution {
    long long modPow(long long base, long long exp) {
        long long res = 1;
        while (exp > 0) {
            if (exp & 1) res = (res * base) % 1000000007;
            base = (base * base) % 1000000007;
            exp >>= 1;
        }
        return res;
    }

public:
    int countGoodNumbers(long long n) {
        return (modPow(5, (n + 1) / 2) * modPow(4, n / 2)) % 1000000007;
    }
};