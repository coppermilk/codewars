// [Kata] https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <set>

int solution(int number)
{
 std::set<int> s;
 for(int i = 3; i < number; i+=3){
     s.insert(i);
 }
 for(int i = 5; i < number; i+=5){
     s.insert(i);
 }

 int sum = 0;
 for(auto i : s){
     sum += i;
 }
    return sum;
}

int main(){
    std::cout << solution(10) << std::endl;
    std::cout << solution(1354) << std::endl;
}