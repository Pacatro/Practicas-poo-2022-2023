#ifndef CONTADOR_H
#define CONTADOR_H

#include <iostream>

class Contador{
    private:
        int valor_, min_, max_;

    public:
        Contador(int valor = 0, int min = 0, int max = 1000);

        inline int get() const {return valor_;}

        Contador operator=(const int &n);
        Contador operator=(const Contador &c);
        Contador operator++(void); //++c
        Contador operator++(int);  //c++
        Contador operator--(void); //--c
        Contador operator--(int);  //c--
        Contador operator+(const int); //c + 10
        friend Contador operator+(int, const Contador &c); //10 + c
        Contador operator-(const int); //c - 10
        friend Contador operator-(int, const Contador &c); //10 - c
        friend std::ostream &operator<<(std::ostream &stream, const Contador &c);
        friend std::istream &operator>>(std::istream &stream, const Contador &c);
};


#endif