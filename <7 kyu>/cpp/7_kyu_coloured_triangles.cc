// [Kata] https://www.codewars.com/kata/5a25ac6ac5e284cfbe000111
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Coloured Triangles

#include<string>
#include <iostream>

std::string next_row(std::string &row_str) {
    /*Construction next_row.*/

    std::string next_row;
    int pair_char_id;
    for (unsigned long i = 1; i < row_str.size(); ++i) {
        if (row_str[i] == row_str[i - 1]) {
            next_row += row_str[i];
            continue;
        }
        pair_char_id = row_str[i] + row_str[i - 1];
        switch (pair_char_id) {
            // RGB
            case 'R' + 'G':
                next_row += 'B';
                break;
            case 'G' + 'B':
                next_row += 'R';
                break;
            case 'B' + 'R':
                next_row += 'G';
                break;
            default:
                break;
        }
    }
    return next_row;
}

std::string triangle(std::string row_str) {
    /*Return the final colour which would appear in the bottom row as a string.*/

    while (row_str.size() != 1) {
        row_str = next_row(row_str);
    }
    return row_str;
}

int main() {
    /*Tests.*/
    std::string test = "RGBG";
    std::cout << triangle(test);
    return 0;
}