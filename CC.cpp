//
// Created by YarikBur on 04.11.2017.
//

#include <iostream>
#include <ctime>
#include "CC.h"

void CC::outChar256() {
    for(int i=0; i<256; i++){
        char c = i;
        std::cout << i << " - " << c << std::endl;
    }
}

void CC::setAlphabet() {
    int n = 0;
    std::cout << "Create alphabet";
    for(int i=0; i<256; i++){
        char t=i;
        if(i>=50 && i<=57 || i>=65 && i<=90){
            std::cout << '.';
            if(i>=65 && i<=90)
                alphabet[n] = tolower(t);
            else
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

void CC::setKey() {

    std::cout << "Generate key";
    srand(time(0)+getpid());
    for(int i=0; i<sizeof(key); i++){
        int s = rand() % sizeof(alphabet);
        key[i] = alphabet[s];
        std::cout << '.';
    }
    std::cout << std::endl;
}

void CC::outKey() {
    std::cout << "Key: ";
    for(int i=0; i<sizeof(key); i++){
        std::cout << key[i];
    }
    std::cout << std::endl;
}

void CC::setCommand(bool random) {
    std::cout << "Input command" << std::endl;
    for(int i=0; i<sizeof(command); i++){
        int c;
        std::cout << (i+1) << ": ";
        if(!random)
            std::cin >> c;
        else{
            c = rand() % 9;
            std::cout << c << std::endl;
        }
        command[i] = c;
    }
    std::cout << std::endl;
}

void CC::outCommand() {
    std::cout << "Command: ";
    for(int i=0; i<sizeof(command); i++){
        char c = 48+command[i];
        std::cout << c << ' ';
    }
    std::cout << std::endl;
}