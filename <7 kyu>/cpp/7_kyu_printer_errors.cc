// [Kata] https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Printer Errors.

#include <string>

class Printer {
public:
    static std::string printerError(const std::string &s) {
        /*Return the error rate of the printer as a string representing
          a rational whose numerator is the number of errors and the
          denominator the length of the control string.*/

        int errors = 0;
        for (auto ch: s) {
            if(ch > 'm'){
                ++errors;
            }
        }
        return std::to_string(errors) + '/' + std::to_string(s.size());
    }
};

int main() {
    /*Tests.*/

    Printer::printerError("kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyzuuuuu"); // "11/65"
}