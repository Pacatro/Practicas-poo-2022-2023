//plantilla.cc: Paco Algar
//Define a functions with templates

#include <iostream>

template <class T>

void print_vector(T *v, const int n){
    for(int i = 0; i < n; i++){
        std::cout<<v[i];
    }
}

int main(){

    int a[5] = {1, 2, 3, 6, 5};
    float b[2] = {1.67, 8.987};
    char c[4] = {'h', 'o', 'l', 'a'};

    std::cout<<"Int vector: ";
    print_vector(a, 5);

    std::cout<<"\nFloat vector: ";
    print_vector(b, 2);

    std::cout<<"\nChar vector: ";
    print_vector(c, 4);
    std::cout<<"\n";

    return 0;
}