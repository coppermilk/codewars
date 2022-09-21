// [Kata] https://www.codewars.com/kata/58356a94f8358058f30004b5/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Drone Fly-By.

#include <string>

std::string flyBy(std::string lamp, const std::string &drone){
    /*Return the resulting lamps string.*/

    for(unsigned int i = 0; i < drone.size(); ++i){
        lamp[i] = 'o';
    }
    return lamp;
}

int main(){
    /*Tests.*/

    flyBy("xxxxxxxxxxxxxxx", "=========T"); // Equals("ooooooooooxxxxx"));
}