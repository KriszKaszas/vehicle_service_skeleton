#ifndef MECHANIC_H
#define MECHANIC_H

#include "string5.h"
#include "person.h"

class Mechanic : public Person {
private:
    String position;

public:
    Mechanic(const String& position);
    ~Mechanic();

    String getPosition() const;
    void setPosition(const String& newPosition);
};

#endif // MECHANIC_H
