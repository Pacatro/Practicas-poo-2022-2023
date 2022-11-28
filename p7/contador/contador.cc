//contador.cc: Paco Algar
//Defining all operators from Contador

#include "contador.h"

Contador::Contador(int valor, int min, int max): 
    valor_(valor), min_(min), max_(max) {
    
    if(valor < min || valor > max || min > max){
        valor_ = 0;
        min_ = 0;
        max_ = 1000;
    }
}

//c = 10
Contador Contador::operator=(const int &n){
    valor_ = n;

    if(valor_ > max_){
        valor_ = max_;
    } 
    
    else if(valor_ < min_){
        valor_ = min_;
    }

    return *this;
}

//c = c1
Contador Contador::operator=(const Contador &c){
    valor_ = c.valor_;
    min_ = c.min_;
    max_ = c.max_;

    if(valor_ > max_){
        valor_ = max_;
    } else if(valor_ < min_){
        valor_ = min_;
    }

    return *this;
}

//++c
Contador Contador::operator++(void){
    ++valor_;

    if(valor_ > max_){
        valor_ = max_;
    }

    return *this;
}

//c++
Contador Contador::operator++(int){
    Contador c = *this;

    valor_++; //++valor_

    if(valor_ > max_){
        valor_ = max_;
    }

    return c;
}

//--c
Contador Contador::operator--(void){
    --valor_;

    if(valor_ < min_){
        valor_ = min_;
    }

    return *this;
}

//c--
Contador Contador::operator--(int){
    Contador c = *this;

    valor_--; //--valor_

    if(valor_ < min_){
        valor_ = min_;
    }

    return c;
}

//10 + c
Contador operator+(int value, const Contador &c){
    Contador aux = c;

    aux.valor_ = value + c.valor_;

    if(aux.valor_ > c.max_){
        aux.valor_ = c.max_;
    }

    return aux;
}

//c + 10
Contador operator+(const Contador &c, const int value){
    Contador aux = c;

    aux.valor_ = c.valor_ + value;

    if(aux.valor_ > c.max_){
        aux.valor_ = c.max_;
    }

    return aux;
}

//10 - c
Contador operator-(int value, const Contador &c){
    Contador aux = c;

    aux.valor_ = value - c.valor_;

    if(aux.valor_ < c.min_){
        aux.valor_ = c.min_;
    }

    return aux;
}

//c - 10
Contador operator-(const Contador &c, const int value){
    Contador aux = c;

    aux.valor_ = c.valor_ - value;

    if(aux.valor_ < c.min_){
        aux.valor_ = c.min_;
    }

    return aux;
}

//std::cout << c
std::ostream &operator<<(std::ostream &stream, const Contador &c){
    
    stream << c.valor_;
    
    return stream;
}

//std::cin >> c
std::istream &operator>>(std::istream &stream, const Contador &c){
    bool error = false;

    while(error){
        std::cout<<"Introduce el valor del contador: ";
        stream >> c.valor_;

        if(c.valor_ > c.min_ || c.valor_ < c.max_){
            std::cout<<"Valor correcto\n";
        }

        std::cout<<"Valor incorrecto\n";
        error = true;
    }

    return stream;

}