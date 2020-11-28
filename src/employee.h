#pragma once

#include "headers.h"

#ifndef employee_h
#define employee_h

class Server{
    public:
    string name;

    //float tips, hourly rate, tickets

    //void Clock_in(), 
    private:
    char password;

};

class Manager: public Server{
    public:

    private:

    void addUser();
};

#endif employee_h