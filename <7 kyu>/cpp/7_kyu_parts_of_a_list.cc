// [Kata] https://www.codewars.com/kata/56f3a1e899b386da78000732/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Parts of a list

#include <string>
#include <vector>

class PartList {
public:
    static std::vector<std::pair<std::string, std::string>> partlist(std::vector<std::string> &arr) {
        /*Gives all the ways to divide a list (an array) of at least two elements into two non-empty parts.*/

        std::vector<std::pair<std::string, std::string>> ans;
        for (unsigned long i = 1; i < arr.size(); ++i) {
            std::string s1;
            std::string s2;

            for (unsigned long k = 0; k < i; ++k) {
                s1 += arr[k] + " ";
            }
            for (unsigned long j = i; j < arr.size(); ++j) {
                s2 += arr[j] + " ";
            }
            s1.pop_back();
            s2.pop_back();

            ans.emplace_back(s1, s2);
        }
        return ans;
    }
};

int main() {
    std::vector<std::string> test = {"I", "wish", "I", "hadn't", "come"};
    PartList::partlist(test);
}