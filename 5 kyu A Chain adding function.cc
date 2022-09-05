class Add{
public:
    int data = 0;
    Add & operator()(int i){data += i; return *this;}
    int operator=(const int& right) {

        //проверка на самоприсваивание
       return right + data;
    }
};


int main(){
    Add add;
    auto  a = add(1)(5);

}