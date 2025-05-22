#include "gtest_lite.h"
#include "person.h"
#include "client.h"
#include "mechanic.h"
#include "vehicle.h"
#include "service.h"
#include "ui.h"
#include "datamanager.h"


int main() 
{
    GTINIT(std::cin);
    TEST(VehicleServiceTest, PersonTest) 
    {
        Person person("John Doe", 123456789, "john@example.com");
        EXPECT_STREQ("John Doe",     person.getName().c_str());
        EXPECT_EQ   (123456789,      person.getPhoneNum());
        EXPECT_STREQ("john@example.com", person.geteMail().c_str());
    }END

    TEST(VehicleServiceTest, ClientTest) 
    {
        Client client("Individual", "Active");
        client.setName("Alice");
        client.setPhoneNum(987654321);
        client.seteMail("alice@example.com");
        EXPECT_EQ("Alice", client.getName().c_str());
        EXPECT_EQ(987654321, client.getPhoneNum());
        EXPECT_EQ("alice@example.com", client.geteMail().c_str());
        EXPECT_EQ("Individual", client.getType().c_str());
        EXPECT_EQ("Active", client.getStatus().c_str());


        Vehicle vehicle("Car", "Toyota", "Camry", 2020, "Automatic", "Petrol");
    }END

    TEST(VehicleServiceTest, MechanicTest) 
    {
        Mechanic mechanic("Senior Technician");
        mechanic.setName("Bob");
        mechanic.setPhoneNum(987654321);
        mechanic.seteMail("bob@example.com");
        EXPECT_EQ("Bob", mechanic.getName().c_str());
        EXPECT_EQ(987654321, mechanic.getPhoneNum());
        EXPECT_EQ("bob@example.com", mechanic.geteMail().c_str());
        EXPECT_EQ("Senior Technician", mechanic.getPosition().c_str());
    }END

    TEST(VehicleServiceTest, VehicleTest) 
    {
        Vehicle vehicle("Car", "Toyota", "Camry", 2020, "Automatic", "Petrol");
        vehicle.setType("SUV");
        vehicle.setBrand("Honda");
        vehicle.setModel("CR-V");
        vehicle.setYear(2022);
        vehicle.setTransmissionType("CVT");
        vehicle.setFuelType("Hybrid");
        EXPECT_EQ("SUV", vehicle.getType().c_str());
        EXPECT_EQ("Honda", vehicle.getBrand().c_str());
        EXPECT_EQ("CR-V", vehicle.getModel().c_str());
        EXPECT_EQ(2022, vehicle.getYear());
        EXPECT_EQ("CVT", vehicle.getTransmissionType().c_str());
        EXPECT_EQ("Hybrid", vehicle.getFuelType().c_str());
    }END

    GTEND(std::cerr);
    return 0;
}