// [Kata] https://www.codewars.com/kata/55c0a79e20be94c91400014b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Playing with cubes I.

class Cube {
public:
    Cube() : Side(0) {
    }

    void SetSide(int num) {
        Side = num;
    }

    [[nodiscard]] int GetSide() const {
        return Side;
    }

private:
    int Side;
};