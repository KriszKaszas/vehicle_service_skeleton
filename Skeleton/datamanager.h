#ifndef DATA_MANAGER_H
#define DATA_MANAGER_H

#include "string5.h"
#include "linkedlist.h"
#include "vehicle.h"
#include "person.h"

class DataManager {
public:
    DataManager();

    ~DataManager();

    LinkedList<Vehicle> loadVehiclesFromFile(String filename);

    void writeVehiclesToFile(String filename, const LinkedList<Vehicle>& vehicles);

    LinkedList<Person> loadPersonsFromFile(String filename);

    void writePersonsToFile(String filename, const LinkedList<Person>& persons);
};

#endif // DATA_MANAGER_H
