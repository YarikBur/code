//
// Created by YarikBur on 04.11.2017.
//

#include "CC.h"

int main() {
    CC cc = CC();
    //cc.outChar256();
    cc.setAlphabet();
    cc.outAlphabet();
    cc.setKey();
    cc.outKey();
    cc.setCharacterNumber();
    cc.outCharacterNumber();
    cc.setCommand(true, true);
    cc.outCommand();
    cc.setModifiedCC();
    cc.outModifiedCC();
    return 0;
}