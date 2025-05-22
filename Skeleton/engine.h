#ifndef ENGINE_H
#define ENGINE_H

#include "linkedlist.h" 
#include "client.h"
#include "vehicle.h"
#include "mechanic.h" 

class Engine {
private:
    LinkedList<Client*> clients;
    LinkedList<Vehicle*> vehicles;
    LinkedList<Mechanic*> mechanics;

public:
    Engine();
    ~Engine();
    
    void runtime();
};

#endif // ENGINE_H