// [Kata] https://www.codewars.com/kata/55cbd4ba903825f7970000f5/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Grasshopper - Grade book

// First solution.
char getGrade(int a, int b, int c) {
    /* Finds the average of the three scores passed to it
       and returns the letter value associated with that grade.*/

    int avg = (a + b + c) / 3;

    if(avg >= 90 && avg <= 100){
        return 'A';
    }else if(avg >= 80){
        return 'B';
    }else if(avg >= 70){
        return 'C';
    }else if(avg >= 60){
        return 'D';
    }else{
        return 'F';
    }
    //return ' ';
}

// Second solution.
char getGrade2(int a, int b, int c){
    /* Finds the average of the three scores passed to it
    and returns the letter value associated with that grade.*/

    int avg = (a + b + c) / 3;
    switch (avg) {
        case 90 ... 100: return 'A';
        case 80 ... 89: return 'B';
        case 70 ... 79: return 'C';
        case 60 ... 69: return 'D';
        default: return 'F';
    }
}
int main(){
    getGrade(80, 90, 100);
    getGrade2(80, 90, 100);
}