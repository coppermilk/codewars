// [Kata] https://www.codewars.com/kata/56b7f2f3f18876033f000307/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Return location

class Person
{
public:
    Person(int x, int y, int z)
            : m_x(x), m_y(y), m_z(z)
    {
    }

    void location(int &x, int &y, int &z) const
    {
        x = m_x;
        y = m_y;
        z = m_z;
    }

private:
    int m_x;
    int m_y;
    int m_z;
};

int main(){
    auto* person = new Person(1, 2, 3);
    int x = 0, y = 0, z = 0;
    person->location(x, y, z);
    delete person;
    return 0;
}