class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; // Prevents overflow for -2147483648

        if (N < 0) {
            x = 1 / x;
            N = -N; // Direct reassignment (no type declaration)
        }

        if (N == 0) {
            return 1.0;
        }

        double half = myPow(x, N / 2);

        if (N % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
};