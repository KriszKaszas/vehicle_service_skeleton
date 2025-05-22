#ifndef CLIENT_H
#define CLIENT_H

#include "string5.h"
#include "linkedlist.h"
#include "person.h"
#include "vehicle.h"

class Client : public Person {
private:
    String type;
    String status;
    LinkedList<Vehicle*> vehicles;

public:
    Client(const String& type, const String& status);
    ~Client();

    String getType() const;
    void setType(const String& newType);
    String getStatus() const;
    void setStatus(const String& newStatus);
    LinkedList<Vehicle*> getVehicles() const;
    void addVehicle(Vehicle* newVehicle);
    void removeVehicle(Vehicle* vehicle);
};

#endif // CLIENT_H
