// [Kata] https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Shortest Word.

#include <string>

int find_short(std::string str) {
    /*Bug fix.*/
    /*Given a string of words, return the length of the shortest word(s).*/

    int cont_letter_in_min_word = 2147483647; // INT_MAX.
    int cont_letter_in_current_word = 0;

    /*-----*/
    str += " "; // <--- Add separator.
    /*-----*/

    for (char& c : str) {
        if (c == ' ') {
            if (cont_letter_in_current_word < cont_letter_in_min_word) {
                cont_letter_in_min_word = cont_letter_in_current_word;
            }
            cont_letter_in_current_word = 0;
        }
        else {
            ++cont_letter_in_current_word;
            if(c == '\'' || c == '-'|| c == '.' || c == ','|| c == '!'|| c == '?'){
                --cont_letter_in_current_word;
            }
        }

    }
    return cont_letter_in_min_word;
}

int main() {
    /*Tests.*/

    find_short("bitcoin take over the world maybe who knows perhaps");
    return 0;
}