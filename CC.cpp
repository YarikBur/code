//
// Created by YarikBur on 04.11.2017.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
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

void CC::setCommand(bool random, bool out) {
    std::cout << "Input command" << std::endl;
    for(int i=0; i<sizeof(command); i++){
        int c;
        if(out)
            std::cout << (i+1) << ": ";
        if(!random)
            std::cin >> c;
        else{
            c = 97 + rand() % (123 - 97);
            if(out)
                std::cout << c << std::endl;
        }
        command[i] = c;
    }
    if(out)
        std::cout << std::endl;
}

void CC::outCommand() {
    std::cout << "Command: ";
    for(int i=0; i<sizeof(command); i++){
        char c = command[i];
        std::cout << c << ' ';
    }
    std::cout << std::endl;
}

void CC::setCharacterNumber() {
    std::cout << "Create character number";
    for(int i=0; i<sizeof(characterNumber); i++){
        char k = key[i];
        for(int a=0; a<sizeof(alphabet); a++){
            if(alphabet[a]==k) {
                characterNumber[i] = a+2;
                std::cout << '.';
                break;
            }
        }
    }
    std::cout << std::endl;
}

void CC::outCharacterNumber() {
    std::cout << "Character number: ";
    for(int i=0; i<sizeof(characterNumber); i++){
        int t = characterNumber[i];
        std::cout << t << ' ';
    }
    std::cout << std::endl;
}

void CC::setModifiedCC() {
    std::cout << "Create modified scale of notation";
    for(int i=0; i<sizeof(key); i++){
        char string[6] = "";
        int value = command[i];
        itoa(value, string, characterNumber[i]);
        for(int ii=0; ii<sizeof(modifiedCC[0]); ii++)
            modifiedCC[i][ii] = string[ii];
        std::cout << '.';
    }
    std::cout << std::endl;
}

void CC::outModifiedCC() {
    std::cout << "Print modified scale of notation: ";
    for(int i=0; i<sizeof(key); i++){
        std::cout << modifiedCC[i] << ' ';
    }
    std::cout << std::endl;
}