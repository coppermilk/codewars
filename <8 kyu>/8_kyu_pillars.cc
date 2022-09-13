// [Kata] https://www.codewars.com/kata/5bb0c58f484fcd170700063d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Pillars.

long pillars(const int &num_of_pillars, const int &distance, const int &width) {
    /*Calculate the distance between the first and the last pillar in centimeters
     (without the width of the first and last pillar).*/

    switch (num_of_pillars){
        case 1:
            return 0;
        default:
            return (num_of_pillars - 2) * width + ((distance * 100) * (num_of_pillars - 1));
    }
}

int main(){
    /*Tests.*/

    pillars(11, 15, 30);
    return 0;
}