// [Kata] https://www.codewars.com/kata/59c633e7dcc4053512000073/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Consonant value.

#include <string>

#include <vector>

std::vector<std::vector<int> > matrixAddition(std::vector<std::vector<int> > a, std::vector<std::vector<int> > b) {
    /* Take each cell [n][m] from the first matrix, and add it with the same [n][m]
       cell from the second matrix. This will be cell [n][m] of the solution matrix.*/
    std::vector<std::vector<int>> res;
    for (unsigned long i = 0; i < a.size(); ++i) {
        std::vector<int> current_row;
        for (unsigned long j = 0; j < a[0].size(); ++j) {
            current_row.push_back(a[i][j] + b[i][j]);
        }
        res.push_back(current_row);
    }
    return res;
}

int main() {
    matrixAddition({{1, 2, 3}, {3, 2, 1}, {1, 1, 1}}, {{2, 2, 1}, {3, 2, 3}, {1, 1, 3}});
}