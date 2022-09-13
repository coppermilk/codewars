// [Kata] https://www.codewars.com/kata/59ca8246d751df55cc00014c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Is he gonna survive?

bool hero(const int &bullets, const int &dragons) {
    /*Is he gonna survive?*/

    return bullets / 2  >= dragons;
}

int main(){
    hero(10, 2);
    return 0;
}
