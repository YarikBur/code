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
    void setCommand(bool random, bool out);
    void outCommand();
    void setCharacterNumber();
    void outCharacterNumber();
    void setModifiedCC();
    void outModifiedCC();

private:
    char alphabet[34];
    char key[15];
    char command[15];
    char characterNumber[sizeof(key)];
    char modifiedCC[sizeof(key)][6];

};


#endif //CODE_CC_H
