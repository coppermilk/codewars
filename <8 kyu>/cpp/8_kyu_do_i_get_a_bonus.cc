// [Kata] https://www.codewars.com/kata/56f6ad906b88de513f000d96/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include<string>
using namespace std;

string bonus_time(int salary, bool bonus){
    /*If bonus is true, the salary should be multiplied by 10.
      If bonus is false, the fatcat did not make enough money
      and must receive only his stated salary.*/

    return "$" + std::to_string(bonus ? salary *= 10 : salary);
}

int main(){
    bonus_time(rand() % 10000, rand() % 2);
    return 0;
}
