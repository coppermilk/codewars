// [Kata] https://www.codewars.com/kata/58f5c63f1e26ecda7e000029/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Mexican Wave

#include <string>
#include <vector>

std::vector<std::string> wave(std::string y){
    /*Turns a string into a Mexican Wave.*/
    std::vector<std::string>mexican_wave;
    for(unsigned long i = 0; i < y.size(); ++i){
        if(isalpha(y[i])){
            std::string part_wave = y;
            part_wave[i] = (char)toupper(part_wave[i]);
            mexican_wave.push_back(part_wave);
        }

    }
    return mexican_wave;
}