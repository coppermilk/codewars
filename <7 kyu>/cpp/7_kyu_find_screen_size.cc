// [Kata] https://www.codewars.com/kata/5bbd279c8f8bbd5ee500000f/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Find Screen Size

#include <string>

std::string find_screen_height(int width, const std::string &ratio){
	/*Given an integer width and a string ratio written as WIDTH:HEIGHT,
	 output the screen dimensions as a string written as WIDTHxHEIGHT.*/
    float w, h; 
    if(sscanf(ratio.data(), "%f:%f", &w, &h) == 2){
       return std::to_string(width) + "x" + std::to_string(int(width  / w * h));
  }
       return "";
}