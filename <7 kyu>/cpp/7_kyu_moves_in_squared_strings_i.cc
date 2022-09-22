// [Kata] https://www.codewars.com/kata/5417423f9e2e6c2f040002ae/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Digitize.
// TODO: Refactor

#include <string>
#include <vector>

class Opstrings {
public:
    static std::vector<std::string> separate_lines(std::string str) {
        std::vector<std::string> lines;
        std::string line;
        str += '\n';
        for (auto ch: str) {
            if (ch == '\n') {
                lines.push_back(line);
                line.clear();
            } else {
                line += ch;
            }
        }
        return lines;
    }

public:
    static std::string horMirror(const std::string &str) {
        std::vector<std::string> lines = separate_lines(str);
        std::string ans;
        for (auto &line: lines) {
            ans = line + '\n' + ans;
        }
        ans.pop_back();
        return ans;
    }

    static std::string vertMirror(const std::string &str) {
        std::vector<std::string> lines = separate_lines(str);
        std::string ans;
        for (auto &line: lines) {
            for (unsigned long i = 0; i < line.size() / 2; ++i) {
                std::swap(line[i], line[line.size() - i - 1]);
            }
            ans += line + '\n';
        }
        ans.pop_back();
        return ans;
    }

    template<typename Func>
    static std::string oper(Func func, const std::string &s) {
        return func(s);
    }

};


int main() {
    /*Tests.*/
    Opstrings::vertMirror("QHdgSh\noaMDnH\nXxNNlC\nHxxvRi\nAvVTqb\nuRySvw");

    return 0;
}