// [Kata] https://www.codewars.com/kata/56e9e4f516bcaa8d4f001763/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sum of numbers from 0 to N.

#include <string>
#include <iostream>

using namespace std;

class SequenceSum {
    int count;
public:
    SequenceSum(int);

    string showSequence();

};

string SequenceSum::showSequence(){
    /*Computes the series starting from 0 and ending until the given number.*/

    std::string ans;
    if (this->count < 0) {
        return to_string(this->count) + "<0";
    } else if (this->count == 0) {
        return "0=0";
    } else {
        ans += "0";
        for (int i = 1; i <= this->count; ++i) {
            ans += '+';
            ans += to_string(i);

        }
        ans += " = " + to_string(this->count * (this->count + 1) / 2);
        return ans;
    }
}

SequenceSum::SequenceSum(int c) {
    count = c;
}

int main() {
    /*Tests.*/

    SequenceSum seqsum(6);
    std::cout << seqsum.showSequence();
}