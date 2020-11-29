#pragma once

#include "headers.h"

#ifndef employee_h
#define employee_h

class Server{
    public:
    Server();
    Server(string, char, char, float);

    string name;

    char password;
    char empID;
    float hourly_rate;
    float tips;

    void Clock_in();
    

};

class Manager: public Server{
    public:


    private:

    void addUser();
    void viewTickets();
    void viewEmployeeInfo(char);
};

#endif employee_h