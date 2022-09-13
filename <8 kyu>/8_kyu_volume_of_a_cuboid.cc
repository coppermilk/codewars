// [Kata] https://www.codewars.com/kata/58261acb22be6e2ed800003a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Volume of a Cuboid.

double getVolumeOfCuboid(const double &length, const double &width, const double &height) {
    /*Return volume.*/

    return length * width * height;
}

int main() {
    /*Tests.*/

    getVolumeOfCuboid(1.0, 1.0, 1.0);
    return 0;
}