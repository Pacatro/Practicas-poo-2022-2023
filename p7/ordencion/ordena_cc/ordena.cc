#include <iostream>
#include <algorithm>
#include <vector>

void write_array(std::vector<int> &array, int &n);
void show_array(std::vector<int> &array);

int main(){
    int n;
    std::vector<int> array;

    std::cout<<"Select the number of elements in the array: ";
    std::cin>>n;

    std::cout<<"\n";
    write_array(array, n);

    std::cout<<"\nOriginal array: ";
    show_array(array);
    std::cout<<"\n";

    std::sort(array.begin(), array.end());

    std::cout<<"\nSorted array: ";
    show_array(array);
    std::cout<<"\n";
}

void write_array(std::vector<int> &array, int &n){
    int e;
    
    for(int i = 0; i<n; i++){
        std::cout<<"Element "<<i<<": ";
        std::cin>>e;
        array.push_back(e);
    }
}

void show_array(std::vector<int> &array){
    for(auto e : array){
        std::cout<<e<<" ";
    }
}