#include <iostream>

#include <vector>

long long binomialCoefficient(long long n, long long k) {
    /*Get binomial coefficient.*/
    long long ans = 1;
    if (k > n - k) {
        k = n - k;
    }
    for (int i = 0; i < k; ++i) {
        ans *= n - i;
        ans /= i + 1;
    }
    return ans;
}

std::vector<long long> pascalsTriangle(int n) {
    /* Returns n top rows of Pascal's Triangle
     * flattened into a one-dimensional array.*/
    std::vector<long long> ans;
    for (long long line = 0; line < n; ++line) {
        for (long long i = 0; i <= line; ++i) {
            ans.push_back(binomialCoefficient(line, i));
        }
    }
    return ans;
}

std::vector<long long> pascalsTriangle2(int n) {
    //your code here

    std::vector<long long> res;
    for (int i = 0; i < n; i++) {
        long long num = 1;
        for (int j = 0; j < i + 1; j++) {
            res.push_back(num);
            num = num * (i - j) / (j + 1);
        }
    }
    return res;

}

int main() {
    /*Tests.*/
    pascalsTriangle2(5);
}