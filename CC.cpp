//
// Created by YarikBur on 04.11.2017.
//

#include <iostream>
#include "CC.h"

void CC::setAlphabet() {
    int n = 0;
    std::cout << "Create alphabet";
    for(int i=0; i<256; i++){
        char t=i;
        if(i>=50 && i<=57 || i>=65 && i<=90){
            std::cout << '.';
            alphabet[n] = t;
            n++;
        }
    }
    std::cout << std::endl;
}

void CC::outAlphabet() {
    std::cout << "Print alphabet: ";
    for(int i=0; i<sizeof(alphabet); i++){
        std::cout << alphabet[i] << ' ';
    }
    std::cout << std::endl;
}