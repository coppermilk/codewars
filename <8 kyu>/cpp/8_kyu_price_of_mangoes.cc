// [Kata] https://www.codewars.com/kata/57a77726bb9944d000000b06/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Price of Mangoes.

//First solution.
int mango(int quantity, int price) {
    /*Calculate the total cost of the mangoes.*/

    int total_cost = 0;
    while (quantity > 0) {
        if (quantity >= 2) {
            quantity -= 3;
            total_cost += 2 * price;
        } else {
            --quantity;
            total_cost += price;
        }
    }
    return total_cost;
}

// Second solution.
int mango2(int quantity, int price) {
    return (quantity - quantity / 3) * price;
}

int main() {
    /*Tests.*/

    mango(9, 5);
    mango2(9, 5);
    return 0;
}