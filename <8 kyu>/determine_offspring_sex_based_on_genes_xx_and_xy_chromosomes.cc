// [Kata] https://www.codewars.com/kata/56530b444e831334c0000020/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Determine offspring sex based on genes XX and XY chromosomes.

#include <string>

std::string chromosomeCheck(const std::string &sperm) {
    /*If the sperm contains the X chromosome,
     return "Congratulations! You're going to have a daughter.";
     If the sperm contains the Y chromosome, return "Congratulations! You're going to have a son.";*/

    return sperm.find('Y') == std::string::npos ?  "Congratulations! You're going to have a daughter."
                                                : "Congratulations! You're going to have a son.";
}

int main(){
    /*Tests.*/

    chromosomeCheck("XY");
    chromosomeCheck("XX");
    return 0;
}
