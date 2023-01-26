// [Kata] https://www.codewars.com/kata/5b728f801db5cec7320000c7/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Simple letter removal GCD sum

std::string solve(const std::string& s, unsigned k) {
    std::string cur = s;
    //k += 1;
    for (char ch = 'a'; k > 0 && ch <= 'z'; ++ch) {
        for (unsigned long i = 0; i < cur.size(); ++i) {
            if (cur[i] == ch) {
                if (k > 0) {
                    std::cout << (cur[i] == ch) << std::endl;
                    cur[i] = 0;
                    --k;
                }
            }
           // std::cout << cur << std::endl;
        }
    }
    std::string ans;
    for (auto ch : cur) {
        if (ch) {
            ans += ch;
        }
    }
    return ans;
}
