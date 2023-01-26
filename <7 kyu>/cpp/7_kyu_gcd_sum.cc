// [Kata] https://www.codewars.com/kata/5dd259444228280032b1ed2a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// GCD sum

using namespace std;

pair<int, int> solve(int s, int g){  
    return (s % g == 0) ? make_pair(g, s - g) : make_pair(-1, -1);
}

pair<int, int> solve2(int s, int g) {
    for (int i = s - 1; i > 0; --i) {
        int j = s - i;
        if (j % g == 0) {
            if (i % g == 0) {
                return std::make_pair(std::min(j, i), std::max(j, i));
            }
        }
    }
    return std::make_pair(-1, -1);
}
