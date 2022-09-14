// [Kata] https://www.codewars.com/kata/56c5847f27be2c3db20009c3/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Subtract the Sum

#include <string>
#include <map>

// First solution.
int sum_and_substract(int n) {
    /*Sum all the digits of n. And subtract the sum from n.*/

    int copy_n = n;
    int sum_numbers = 0;
    while (n) {
        sum_numbers += n % 10;
        n /= 10;
    }
    return copy_n - sum_numbers;
}

std::string SubtractSum(int n) {
/*Return the associated fruit.*/

    std::map<int, std::string> fruit = {{1,   "kiwi"},
                                        {2,   "pear"},
                                        {3,   "kiwi"},
                                        {4,   "banana"},
                                        {5,   "melon"},
                                        {6,   "banana"},
                                        {7,   "melon"},
                                        {8,   "pineapple"},
                                        {9,   "apple"},
                                        {10,  "pineapple"},
                                        {11,  "cucumber"},
                                        {12,  "pineapple"},
                                        {13,  "cucumber"},
                                        {14,  "orange"},
                                        {15,  "grape"},
                                        {16,  "orange"},
                                        {17,  "grape"},
                                        {18,  "apple"},
                                        {19,  "grape"},
                                        {20,  "cherry"},
                                        {21,  "pear"},
                                        {22,  "cherry"},
                                        {23,  "pear"},
                                        {24,  "kiwi"},
                                        {25,  "banana"},
                                        {26,  "kiwi"},
                                        {27,  "apple"},
                                        {28,  "melon"},
                                        {29,  "banana"},
                                        {30,  "melon"},
                                        {31,  "pineapple"},
                                        {32,  "melon"},
                                        {33,  "pineapple"},
                                        {34,  "cucumber"},
                                        {35,  "orange"},
                                        {36,  "apple"},
                                        {37,  "orange"},
                                        {38,  "grape"},
                                        {39,  "orange"},
                                        {40,  "grape"},
                                        {41,  "cherry"},
                                        {42,  "pear"},
                                        {43,  "cherry"},
                                        {44,  "pear"},
                                        {45,  "apple"},
                                        {46,  "pear"},
                                        {47,  "kiwi"},
                                        {48,  "banana"},
                                        {49,  "kiwi"},
                                        {50,  "banana"},
                                        {51,  "melon"},
                                        {52,  "pineapple"},
                                        {53,  "melon"},
                                        {54,  "apple"},
                                        {55,  "cucumber"},
                                        {56,  "pineapple"},
                                        {57,  "cucumber"},
                                        {58,  "orange"},
                                        {59,  "cucumber"},
                                        {60,  "orange"},
                                        {61,  "grape"},
                                        {62,  "cherry"},
                                        {63,  "apple"},
                                        {64,  "cherry"},
                                        {65,  "pear"},
                                        {66,  "cherry"},
                                        {67,  "pear"},
                                        {68,  "kiwi"},
                                        {69,  "pear"},
                                        {70,  "kiwi"},
                                        {71,  "banana"},
                                        {72,  "apple"},
                                        {73,  "banana"},
                                        {74,  "melon"},
                                        {75,  "pineapple"},
                                        {76,  "melon"},
                                        {77,  "pineapple"},
                                        {78,  "cucumber"},
                                        {79,  "pineapple"},
                                        {80,  "cucumber"},
                                        {81,  "apple"},
                                        {82,  "grape"},
                                        {83,  "orange"},
                                        {84,  "grape"},
                                        {85,  "cherry"},
                                        {86,  "grape"},
                                        {87,  "cherry"},
                                        {88,  "pear"},
                                        {89,  "cherry"},
                                        {90,  "apple"},
                                        {91,  "kiwi"},
                                        {92,  "banana"},
                                        {93,  "kiwi"},
                                        {94,  "banana"},
                                        {95,  "melon"},
                                        {96,  "banana"},
                                        {97,  "melon"},
                                        {98,  "pineapple"},
                                        {99,  "apple"},
                                        {100, "pineapple"}};

    //Might be it's possible to use this workaround like checking an iterator against a NULL value:
    auto it = --fruit.begin();

    do {
        n = sum_and_substract(n);
        it = fruit.find(n);
    } while (it == fruit.end());
    return fruit[n];
}

// Second solution.
std::string SubtractSum2(int n) {
    /*Return the associated fruit.*/

    return "apple";


    /*
    Expalantion: note that every multiple of 9 from 1-100 is paired with "apple".

    Let digits(n) be the sum of the digits of n.
    Claim: Given 10 <= n, n - digits(n) is a multiple of 9.
    Proof: Proceeds by induction. The base case is trivial; 10 - 1 = 9.
       Now, for some n greater than 10, suppose that n - digits(n) = 9 * k for some integer k.
       It suffices to show that (n + 1) - digits(n + 1) = 9 * m for some integer m.
       If n does not end in a 9, the result follows from the observation that in this case,
       digits(n + 1) = digits(n) + 1; algebra then yields that
         (n + 1) - digits(n + 1) = n - digits(n) + 1 - 1 = n + digits(n) = 9 * k.
       Suppose then that n does end in a 9. Consider the digits of n. If all are 9, the result is
       again immediate: digits(n + 1) = 1 so (n + 1) - digits(n + 1) = n + 1 - 1 = n, which of course
       is a multiple of 9 (as all its digits are 9). If at least one is *not* 9, then the lowest non-9
       digit is incremented (and all 9's before it are set to 0). This means that the relationship
         digits(n + 1) = digits(n) + 1 - 9 * s
       holds where s is an integer (the number of 9's prior to the first non-9 digit).
       Thus
          (n + 1) - digits(n + 1) = n + 1 - digits(n) - 1 + 9 * s = 9 * (k + s).
       The claim holds by induction.
*/
}

int main() {
    /*Tests.*/
    SubtractSum(25);
    SubtractSum2(999);
    return 0;
}