// [Kata] https://www.codewars.com/kata/56dbe7f113c2f63570000b86/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Moves in squared strings (II)

#include <sstream>
#include <functional>
class Opstrings1
{
public:
    static std::string rot(const std::string& strng) {
        std::stringstream ss(strng);
        std::string word;
        std::vector<std::string> words;

        // Split words.
        while (ss >> word) {
            // Rewerse word.
            for (unsigned long i = 0; i < word.size() / 2; ++i) {
                std::swap(word[i], word[word.size() - 1 - i]);
            }
            words.push_back(word);
        }

        /* Format to answer. */
        std::string ans;
        for (int i = words.size() - 1; i >= 0; --i) {
            ans += words[i] + '\n';
        }
        ans.pop_back();
        return ans;
    }
  
    static std::string selfieAndRot(const std::string& strng) {
        std::stringstream ss(strng);
        std::string word;
        std::vector<std::string> words;

        // Split words.
        while (ss >> word) {
            // Rewerse word.
            word += std::string(word.size(), '.');
            words.push_back(word);
        }

        /* Format to answer. */
        std::string first_part;
        for (auto& w : words) {
            first_part += w + '\n';
        }
        std::string second_part = first_part;
        for (unsigned long i = 0; i < second_part.size() / 2; ++i) {
            std::swap(second_part[i], second_part[second_part.size() - 1 - i]);
        }
        return first_part + second_part.substr(1, second_part.size() - 1);
    }
    
    static std::string oper(std::function<std::string(const std::string& strng)> func, const std::string& s) {
        return func(s);
    }
};
