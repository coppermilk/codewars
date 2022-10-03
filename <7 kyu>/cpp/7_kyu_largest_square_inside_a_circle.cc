// [Kata] https://www.codewars.com/kata/5887a6fe0cfe64850800161c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Largest Square Inside A Circle.

int area_largest_square(int r){
    /*Determine the area of the largest square that can fit inside a circle with radius r.*/
    return 2 * r * r;
}

int main(){
    /*Tests.*/
    area_largest_square(5);
}