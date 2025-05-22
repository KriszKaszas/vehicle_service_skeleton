#ifndef VEHICLE_H
#define VEHICLE_H

#include "string5.h"
#include "linkedlist.h"

class Vehicle {
private:
    String type;
    String brand;
    String model;
    int year;
    String transmissionType;
    String fuelType;
    LinkedList<String> serviceHistory;

public:
    Vehicle(const String& type, const String& brand, const String& model, int year, 
            const String& transmissionType, const String& fuelType);
    ~Vehicle();

    String getType() const;
    void setType(const String& type);
    String getBrand() const;
    void setBrand(const String& brand);
    String getModel() const;
    void setModel(const String& model);
    int getYear() const;
    void setYear(int year);
    String getTransmissionType() const;
    void setTransmissionType(const String& transmissionType);
    String getFuelType() const;
    void setFuelType(const String& fuelType);
    LinkedList<String> getServiceHistory() const;
    void setServiceHistory(const LinkedList<String>& serviceHistory);
};

#endif // VEHICLE_H
