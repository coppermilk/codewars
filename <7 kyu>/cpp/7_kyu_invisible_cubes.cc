// [Kata] https://www.codewars.com/kata/560d6ebe7a8c737c52000084/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Invisible cubes

unsigned long long notVisibleCubes(unsigned int n) {
    /*How many small cubes are not visible from outside.*/
    unsigned long long a = n - 2;
    return a * a * a * (n > 2);

}