#include "contador.h"

Contador::Contador(int valor, int min, int max){
    valor_ = valor;
    min_ = min;
    max_ = max;
    
    if(valor < min || valor > max || min > max){
        valor_ = 0;
        min_ = 0;
        max_ = 1000;
    }

}

//c = n
Contador Contador::operator=(const int &n){
    valor_ = n;

    if(valor_ > max_){
        valor_ = max_;
    } else if(valor_ < min_){
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

Contador operator+(int value, const Contador &c){
    Contador aux(0, 0, 1000);

    aux.valor_ = value + c.valor_;

    if(aux.valor_ > c.max_){
        aux.valor_ = c.max_;
    }

    return aux;
}

Contador operator+(const Contador &c, int value){
    Contador aux(0, 0, 1000);

    aux.valor_ = c.valor_ + value;

    if(aux.valor_ > c.max_){
        aux.valor_ = c.max_;
    }

    return aux;
}

Contador operator-(int value, const Contador &c){
    Contador aux(0, 0, 1000);

    aux.valor_ = value - c.valor_;

    if(aux.valor_ < c.min_){
        aux.valor_ = c.min_;
    }

    return aux;
}

Contador operator-(const Contador &c, int value){
    Contador aux(0, 0, 1000);

    aux.valor_ = c.valor_ - value;

    if(aux.valor_ < c.min_){
        aux.valor_ = c.min_;
    }

    return aux;
}

std::ostream &operator<<(std::ostream &stream, const Contador &c){
    stream << "Value: " << c.valor_;
    
    return stream;
}

std::istream &operator>>(std::istream &stream, const Contador &c){
    stream >> c.valor_;
    
    if(c.valor_ < c.min_ || c.valor_ > c.max_){
        std::cout << "Incorrect value\n";
    }

    return stream;
    
}