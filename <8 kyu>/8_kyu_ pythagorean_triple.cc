// [Kata] https://www.codewars.com/kata/5951d30ce99cf2467e000013/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Pythagorean Triple

bool PythagoreanTriple(const int a, const int b, const int c){
    /*Check pythagorean triple.*/

    return (a * a) + (b * b) == (c * c);
}

int main(){
    /*Tests.*/

    PythagoreanTriple(3, 4, 5);
    return 0;
}
