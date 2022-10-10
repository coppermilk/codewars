// [Kata] https://www.codewars.com/kata/54dc6f5a224c26032800005c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Help the bookseller !

#include <string>
#include <vector>
#include <map>
#include <iostream>

class StockList {
public:
    static std::string
    stockSummary(const std::vector<std::string> &lstOfArt, const std::vector<std::string> &categories) {

        if (lstOfArt.empty() || categories.empty()) {
            return "";
        } else {
            // Create map for needed category's.
            std::map<char, int> stock_sum;
            for (const auto &c: categories) {
                stock_sum[c[0]] = 0;
            }

            // Summation needed category's.
            char categorie[8];
            int stock = 0;
            for (auto &s: lstOfArt) {
                std::sscanf(s.c_str(), "%s %d", categorie, &stock);
                if (stock_sum.find(categorie[0]) != stock_sum.end()) {
                    stock_sum[categorie[0]] += stock;
                }

            }

            // Construct answer.
            std::string ans;
            for (auto &c: categories) {
                ans += "(" + c + " : " + std::to_string(stock_sum[c[0]]) + ") - ";
            }
            ans.erase(ans.size() - 3);
            return ans;
        }
    }
};

int main() {
    std::vector<std::string> art = {"BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600"};
    std::vector<std::string> cd = {"A", "B", "C", "D"};
    std::cout << StockList::stockSummary(art, cd);
    return 0;
}