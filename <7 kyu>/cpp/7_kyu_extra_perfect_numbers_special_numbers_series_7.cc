// [Kata] https://www.codewars.com/kata/5a662a02e626c54e87000123/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Extra Perfect Numbers (Special Numbers Series #7)

using namespace std; 

vector <int> extraPerfect(int number){
    /* Return the extra perfect numbers in range from 1 to N .*/
    std::vector<int> extra_perfect;
    for (int i = 1; i <= number; i+=2) {
        extra_perfect.push_back(i);
    }
    return extra_perfect;
}