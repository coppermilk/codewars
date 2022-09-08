// [Kata] https://www.codewars.com/kata/5541f58a944b85ce6d00006a/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>

typedef unsigned long long ull;

class ProdFib {
public:
    static std::vector<ull> productFib(ull prod) {
        ull f1 = 0;
        ull f2 = 1;
        while(f1 * f2 < prod) {
            std::swap(f1, f2);
            f2 += f1;
        }
        return {f1, f2, f1 * f2 == prod};
    }
};

int main() {
    ProdFib::productFib(4895);      // 4895     -> {55, 89, true});
    ProdFib::productFib(5895);      // 5895     -> {89, 144, false});
    ProdFib::productFib(74049690);  // 74049690 -> {6765, 10946, 1ULL});
    ProdFib::productFib(84049690);  // 84049690 -> {10946, 17711, 0ULL});

    return 0;
}
