#include<iostream>
#include<fstream>
#include<iomanip>


using namespace std;

void mainMenu();

class Management{
    public:
    Management(){
        mainMenu();
    }
};

void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t           XYZAirline  \n"<<endl;
    cout<<"\t_____________Main Menu_____________"<<endl;
    cout<<"\t____________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t"<<endl

    cout<<"\t|\t Press 1 To Add The Customer Details    \t|"<<endl;
    cout<<"\t|\t Press 2 For Flight Registration    \t"<<endl;
}

int main(){
    Management Mobj;
    return 0;
}