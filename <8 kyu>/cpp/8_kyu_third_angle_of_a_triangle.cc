// [Kata] https://www.codewars.com/kata/5a023c426975981341000014/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Third Angle of a Triangle

class Triangle {
public:
    static const int ANGLE_IN_TRIANGLE = 180;
    static int otherAngle(int a, int b){
        /*Return the 3rd angle in triangle*/

        return ANGLE_IN_TRIANGLE - a - b;
    }
};

int main(){
    /*Tests.*/

    Triangle::otherAngle(60, 60);
}