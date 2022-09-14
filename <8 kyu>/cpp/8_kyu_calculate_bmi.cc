// [Kata] https://www.codewars.com/kata/57a429e253ba3381850000fb/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Calculate BMI

#include <string>

std::string bmi(double w, double h) {
    /*Function bmi that calculates body mass index (bmi = weight / height2).*/

    double bmi = w / (h * h);
    bmi -=0.001; // epsilon
    if (bmi <= 18.5) return "Underweight";
    if (bmi <= 25.0) return "Normal";
    if (bmi <= 30.0) return "Overweight";
    if (bmi > 30) return "Obese";
    //TODO: Implement this function
    //throw std::logic_error("Method or operation is not implemented");
    return "";
}

int main(){
    /*Tests.*/

    bmi(40, 165);
}