#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

void write_array(std::vector<float> &array, int &n);
void show_array(std::vector<float> &array);
void menu();

int main(){
    int n, option;
    std::vector<float> array;

    std::cout<<"Select the number of elements in the array: ";
    std::cin>>n;

    std::cout<<"\n";
    write_array(array, n);

    std::cout<<"\nOriginal array: ";
    show_array(array);
    std::cout<<"\n";

    menu();
    std::cin>>option;

    switch(option){
        case 1: 
            std::sort(array.begin(), array.end());
            std::cout<<"\nSorted array: ";
            show_array(array);
            std::cout<<"\n";
        break;

        case 2:
            std::sort(array.begin(), array.end(), std::greater<int>());
            std::cout<<"\nSorted array: ";
            show_array(array);
            std::cout<<"\n";
        break;

        case 3:
            std::cout<<"Bye\n";
        break;
    }

    exit(EXIT_SUCCESS);
}

void write_array(std::vector<float> &array, int &n){
    float e;
    
    for(int i = 0; i<n; i++){
        std::cout<<"Element "<<i<<": ";
        std::cin>>e;
        array.push_back(e);
    }
}

void show_array(std::vector<float> &array){
    for(auto e : array){
        std::cout<<e<<" ";
    }
}

void menu(){
    std::cout<<"\nSort array\n";
    std::cout<<"1. Ascending Order\n";
    std::cout<<"2. Descending Order\n";
    std::cout<<"3. Exit\n";

    std::cout<<"\nOption --> ";
}