//contador.h: Paco Algar
//Define the class Contador and operators

#ifndef CONTADOR_H
#define CONTADOR_H

#include <iostream>

class Contador{
    private:
        int valor_, min_, max_;

    public:
        Contador(int valor = 0, int min = 0, int max = 1000);

        inline int get() const {return valor_;}

        Contador operator=(const int &n); //c = 10
        Contador operator=(const Contador &c); //c = c1
        Contador operator++(void); //++c
        Contador operator++(int);  //c++
        Contador operator--(void); //--c
        Contador operator--(int);  //c--
        friend Contador operator+(const Contador &c, const int); //c + 10
        friend Contador operator+(int, const Contador &c); //10 + c
        friend Contador operator-(const Contador &c, const int); //c - 10
        friend Contador operator-(int, const Contador &c); //10 - c
        friend std::ostream &operator<<(std::ostream &stream, const Contador &c); //std::cout << c
        friend std::istream &operator>>(std::istream &stream, const Contador &c); //std::cin >> c
};


#endif