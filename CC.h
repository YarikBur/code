//
// Created by YarikBur on 04.11.2017.
//

#ifndef CODE_CC_H
#define CODE_CC_H


class CC {
public:
    void outChar256();
    void setAlphabet();
    void outAlphabet();
    void setKey();
    void outKey();
    void setCommand(bool random);
    void outCommand();
    void setCharacterNumber();
    void outCharacterNumber();

private:
    char alphabet[34];
    char key[15];
    char command[15];
    char characterNumber[sizeof(key)];
};


#endif //CODE_CC_H
