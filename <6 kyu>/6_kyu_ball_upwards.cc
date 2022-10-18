// [Kata] https://www.codewars.com/kata/566be96bb3174e155300001b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Ball Upwards.

#include <cmath>
class Ball
{
public: static int maxBall(int v0){
    /* Returns the time in tenth of second of the
     * maximum height recorded by the device.*/
      const double g = 9.81;
      const double m_s_in_km_s = 0.277778;
      // h_max = v0 / g;
      return (int)std::round(double(v0 * m_s_in_km_s * 10) /  g);
  }
};

int main(){
    /*Tests.*/
    Ball::maxBall(37);
}