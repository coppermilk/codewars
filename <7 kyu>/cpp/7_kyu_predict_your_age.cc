// [Kata] https://www.codewars.com/kata/5aff237c578a14752d0035ae/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Predict your age!

#include <cmath>
#include <numeric>
#include <array>

// First solution.
template <typename ... T>
int predictAge(const T ...ages){
    /*Predicted how old people.*/

    const std::array<std::common_type_t<T...>, sizeof...(T)> all_ages = { (ages*ages)... };

    const int sum = { std::accumulate(all_ages.begin(), all_ages.end(), 0) };

    const auto squared = std::sqrt(sum) / 2;

    return squared;
}

// Second solution.
int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8) {
    /*Predicted how old people.*/

    int mult = age1 * age1
                            + age2 * age2
                            + age3 * age3
                            + age4 * age4
                            + age5 * age5
                            + age6 * age6
                            + age7 * age7
                            + age8 * age8;

    return (int)sqrt(mult) / 2;
}

int main(){
    /*Tests.*/

    predictAge(65,60,75,55,60,63,64,45);
    return 0;

}