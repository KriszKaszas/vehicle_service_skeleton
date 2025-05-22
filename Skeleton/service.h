#ifndef SERVICE_H
#define SERVICE_H

#include "string5.h"
#include "linkedlist.h"
#include "mechanic.h"

class Service {
private:
    String type;
    LinkedList<String> componentsList;
    String timeDuration;
    float cost;
    Mechanic mechanic;

public:
    Service(const String& type, const LinkedList<String>& componentsList,
            const String& timeDuration, float cost, const Mechanic& mechanic);
    ~Service();

    String getType() const;
    void setType(const String& type);
    LinkedList<String> getComponentsList() const;
    void setComponentsList(const LinkedList<String>& componentsList);
    String getTimeDuration() const;
    void setTimeDuration(const String& timeDuration);
    float getCost() const;
    void setCost(float cost);
    Mechanic getMechanic() const;
    void setMechanic(const Mechanic& mechanic);
};

#endif // SERVICE_H
