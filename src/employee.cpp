#include "employee.h"

void Manager::addUser(){
    cout << "Please verify your username and password."
<<endl;
cout <<t <<"Username: " << endl;
    cin >> UserEntered;
    cout << "Password: " <<endl;
    cin >> PassEntered;

    string info;
do
{
    cout << "Add a username then password. \n";
    cout << "Enter user name; ";
    cin >> info;
    usernamelist.push_back(info);
    cout << "Enter password: ";
    cin >> info;
    passwordlist.push_back(info);
    cout << "Showing user name and passwords entered...\n";
    for(int i = 0; i <usernamelist.size() && i < passwordlist.size(); i++)
    {
        cout << "User Name:"
    }
} while (/* condition */);

};