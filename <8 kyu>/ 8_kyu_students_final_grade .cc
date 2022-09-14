// [Kata] https://www.codewars.com/kata/5ad0d8356165e63c140014d4/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Student's Final Grade.

int final_grade(int exam, int projects){
    /*Calculates the final grade of a student depending on two parameters:
      a grade for the exam and a number of completed projects.*/

    if(exam > 90 || projects > 10){
        return 100;
    }else if(exam > 70 && projects >= 5){
        return 90;
    }else if(exam > 50 && projects >= 2){
        return 75;
    }else{
        return 0;
    }
}


int main() {
    /*Tests.*/

    final_grade(100, 12);
}