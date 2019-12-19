#include <iostream>

int main(int argc, char* argv[]){
    int a = 10;
    for (int i = 0; i < 3; i++){
        std :: cout << a++ <<"\n";
        std :: cout << i << " ";
    }
}