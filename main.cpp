//
// Created by YarikBur on 04.11.2017.
//

#include "CC.h"

int main() {
    CC cc = CC();
    cc.setAlphabet();
    cc.outAlphabet();
    cc.setKey();
    cc.outKey();
    cc.setCommand(true);
    cc.outCommand();
    return 0;
}