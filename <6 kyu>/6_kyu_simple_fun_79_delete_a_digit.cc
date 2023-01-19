// [Kata] https://www.codewars.com/kata/5894318275f2c75695000146/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Simple Fun #79: Delete a Digit
// [Note] Exist non readable another fast solution.

int creatDigitFromReverseVector(std::vector<int> v) {
    for (unsigned long i = 0; i < v.size() / 2; ++i) {
        std::swap(v[i], v[v.size() - 1 - i]);
    }
    int digit = 0;
    for (auto& i : v) {
        digit *= 10;
        digit += i;
    }
    return digit;
}

int deleteDigit(int n)
{

    std::vector<int> split_ditits;
    do {
        split_ditits.push_back(n % 10);
        n /= 10;
    } while (n);

    std::vector<std::vector<int>> all_split_reverse_nums;
    for (unsigned long skip_i = 0; skip_i < split_ditits.size(); ++skip_i) {
        std::vector<int> current_split_reverse_num;
        for (unsigned long i = 0; i < split_ditits.size(); ++i) {
            if (i != skip_i) {
                current_split_reverse_num.push_back(split_ditits[i]);
            }
        }
        all_split_reverse_nums.emplace_back(current_split_reverse_num);
    }
    int max = 0;
    for (auto& i : all_split_reverse_nums) {
        max = std::max(max, creatDigitFromReverseVector(i));
    }

    return max;
}
