// [Kata] https://www.codewars.com/kata/55fab1ffda3e2e44f00000c6/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Beginner Series #4 Cockroach.

int cockroach_speed(double s){
    /*Takes its speed in km per hour and returns it in cm per second.*/

    //            100000 [cm/km]i
    //  27.(7) = ————————————————
    //            3600 [sec/hour]
    return (int)(s *= 27.77778);
}

int main() {
    /*Tests.*/

    double speed = 1.08;
    cockroach_speed(speed);
    return 0;
}