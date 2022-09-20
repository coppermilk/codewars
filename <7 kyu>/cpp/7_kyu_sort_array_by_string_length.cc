// [Kata] https://www.codewars.com/kata/57ea5b0b75ae11d1e800006c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sort array by string length.

#include <vector>
#include <string>
#include <algorithm>

class Kata {
public:
    static std::vector<std::string> sortByLength(std::vector<std::string> array) {
        std::sort(array.begin(), array.end(),
                  [](const std::string &a, const std::string &b) -> bool {
                      return a.size() < b.size();
                  });
        return array;
    }
};

int main() {
    /*Tests.*/
    Kata::sortByLength({"Telescopes", "Glasses", "Eyes", "Monocles"});

    return 0;
}