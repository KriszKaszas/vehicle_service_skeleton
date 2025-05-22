#ifndef PERSON_H
#define PERSON_H

#include "string5.h"

class Person {
private:
    String name;
    int phoneNumber;
    String eMail;

public:
    Person(const String& name, int phoneNumber, const String& eMail);
    ~Person();
    
    String getName() const;
    void setName(const String& newName);
    int getPhoneNum() const;
    void setPhoneNum(int newNum);
    String geteMail() const;
    void seteMail(const String& newEmail);
};

#endif // PERSON_H
