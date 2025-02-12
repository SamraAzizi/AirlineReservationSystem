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
    cout<<"\t|\t Press 2 For Flight Registration        \t|"<<endl;
    cout<<"\t|\t Press 3 For Ticket and Charges         \t|"<<endl;
    cout<<"\t|\t Press 4 To Exit                        \t|"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t"<<endl
    cout<<"\t____________________________________"<<endl;

    cout<<"Enter The Choice : ";
    cin>>lchoice;


    Details d;
    Registration r;
    Ticket t;

    switch(lchoice){
        case 1:
            {
                cout<<"____________Customers_____________\n"<<endl;
                d.information()
                cout<<"Press Any Key To Go Back Main Menu ";
                cin>>back;

                if (back == 1){
                    mainMenu();
                }else{
                    mainMenu();
                }
                break;
            }

        case 2:
            {
                cout<<"________________Book a Flight Using This System____________\n"<<endl;
                r.flights();
                break;
            }

        case 3:
        {
            cout<<"___________________GET YOUR TICKET___________________\n"<<endl;
            t.Bill();

            cout<<"Your Ticket Is Printed, You Can Collect It \n"<<endl;
            cout<<"Press 1 To Display Your Ticket";

            cin>>back;

                if(back==1){
                    t.Display();
                    cout<<"Press Any Key To Go Back To Main Menu:";
                    cin>>back;
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }
                else{
                    mainMenu();
                }
                break;
            }

            case 4:
            {
                cout<<"\n\n\t____________Thank You_________________"<<endl;
                break;
            }

            default:{
                cout<<"Invalid Input, Please Try Again!\n"<<endl;
            }

    }


}

int main(){
    Management Mobj;
    return 0;
}