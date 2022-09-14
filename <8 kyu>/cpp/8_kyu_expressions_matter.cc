// [Kata] https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Expressions Matter.

#include <vector>
#include <algorithm>

// First solution.
unsigned short int expressionsMatter (const unsigned short int &a ,const unsigned short int &b ,const unsigned short int &c){
    /*Try every combination of a,b,c with [*+()] , and return the Maximum Obtained.*/

    return std::max({a + b + c, a * (b + c), (a + b) * c, a * b * c});
}

// Second solution.
unsigned short int expressionsMatter2 (const unsigned short int &a ,const unsigned short int &b ,const unsigned short int &c){
    /*Try every combination of a,b,c with [*+()] , and return the Maximum Obtained.*/

    std::vector<unsigned short int> v;
    v.push_back(a * (b + c));
    v.push_back(a * b * c);
    v.push_back(a + (b * c));
    v.push_back((a * b) + c);
    v.push_back((a + b) * c);
    v.push_back(a + b + c);
    return *std::max_element(v.begin(), v.end());
}

int main(){
    /*Tests.*/

    expressionsMatter(1, 2, 3);
    expressionsMatter2(1, 2, 3);
}