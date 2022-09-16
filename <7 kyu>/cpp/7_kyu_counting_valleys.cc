// [Kata] https://www.codewars.com/kata/5da9973d06119a000e604cb6/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Counting Valleys.

#include <string>

int countValleys(const std::string& s){
    /*Count how many valleys will pass.*/

    int level = 0;
    int valleys = 0;

    for(auto ch : s){
        switch(ch){
            case 'U':
                if(level == -1){
                    // Back to level 0.
                    ++valleys;
                }
                ++level;
                break;
            case 'D':
                --level;
                break;
            default:
                break;
        }
    }
    return valleys;
}

int main() {
    /*Tests.*/

    countValleys("UFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFU"); // Equals(6));
    return 0;
}