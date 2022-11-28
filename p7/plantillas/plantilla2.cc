//plantilla2.cc: Paco Algar
//Define a class using templates

#include <iostream>

template <typename T> class MyClass{
    private:
        T x_, y_;
    public:
        inline MyClass(T x, T y){x_ = x; y_ = y;};
        inline T div() const {return x_/y_;};
};

int main(){ 

    MyClass <int> c1(9, 3);

    std::cout<<"Int div: "<<c1.div()<<"\n";

    MyClass <float> c2(6.76, 4.98);

    std::cout<<"Float div: "<<c2.div()<<"\n";

    return 0;
}