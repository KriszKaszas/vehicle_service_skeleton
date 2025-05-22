
#ifndef UI_H
#define UI_H

#include "string5.h"

class UI {
public:
    UI();
    ~UI();
    
    void menu();
    String inputData();
    void outputData(const String& data);
};

#endif // UI_H