// [Kata] https://www.codewars.com/kata/567501aec64b81e252000003/train/cpp
// [User] https://www.codewars.com/users/coppermilk


#include <string>
#include <vector>

using namespace std;

class Wallpaper
{
  public:
  static string wallPaper(double l, double w, double h)
  {
    /* Function wallpaper(l, w, h) should return as a plain English word in lower case the number of rolls he must buy.*/
    const vector<string> numbers =
        {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
         "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    if (!(l * w * h)) {
      return *numbers.begin();
    } else {
      const double width_rolls = 0.52;
      const double length_roll = 10;
      // Square of room.
      double s = (l * h * 2) + (w * h * 2);
      // Additional coefficient.
      s *= 1.15;
      // Find numbers of rolls.
      int rolls = 0;
      while (width_rolls * length_roll * rolls < s) {
        ++rolls;
      }
      return numbers[rolls];
    }
  
  }
};