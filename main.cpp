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


class Details{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information{
            cout<<"\nEnter The Customer ID: ";
            cin>>cId
            cout<<"\nEnter The Name: ";
            cin>>name;
            cout<<"\nEnter The Age: ";
            cin>>age;
            cout<<"\nEnter The Address: ";
            cin>>add;
            cout<<"\nGender: ";
            cin>>gender;
            cout<<"\nYour Details Are Saved! \n"<<endl;


        }
    
};

int Details::cId;
string Details::name;
string Details::gender;


class Registration{
    public:
        static int Choice;
        int choice1;
        int back;
        static float Charges;

        void flights(){
            string flightN[]={"Pakistan", "Canada", "India", "America"};
            for(int a = 0;a<7;a++){
                cout<<(a+1)<<".flight to "<<flightN[a]<<endl;

            }
            cout<<"\nWelcome To The Airlines! "<<endl;
            cout<<"Press The Number Of THe Country Of Which You Want To Book The Flight! ";
            cin>>Choice;

            switch(choice){
                case 1:
                {
                    cout<<"__________________Welcome To Pakistan Ailines__________________\n"<<endl;

                    cout<<"Your Comfort Is Our Priority. Enjoy The Journey!"<<endl;

                    cout<<"Following Are The Flights\n"<<endl;

                    cout<<"1. PAK - 434"<<endl;
                    cout<<"\t01-01-2024 8:00AM 10hrs Rs. 14000"<<endl;

                    cout<<"2. PAK - 414"<<endl;
                    cout<<"\t04-01-2024 9:00AM 10hrs Rs. 100000"<<endl;

                    cout<<"3. PAK - 934"<<endl;
                    cout<<"\t04-01-2024 8:00AM 10hrs Rs. 9000"<<endl;

                    cout<<"\n Select The Flight You Want To Book: ";
                    cin>>choice1;

                    if(choice1==1){
                        Charges = 14000;
                        cout<<"you have successfully book the flight 1. PAK - 434"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }

                    else if(choice1==2){
                        Charges=100000;
                        cout<<"you have successfully book the flight 2. PAK - 414"<<endl;
                        cout<<"you can go back to menu and take the ticket"<<endl;

                    }else if(choice1==3){
                        charges=9000;
                        cout<<"you have successfully book the flight 3. PAK - 934"<<endl;
                        cout<<"you can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shiftting to previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: "<<endl;
                    cin>>back;


                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }
                
                }
            }
            case 2:{
                cout<<"__________________Welcome To Canadian Airlines__________________\n"<<endl;

                cout<<"Your Comfort Is Our Priority. Enjoy The Journey!"<<endl;

                cout<<"Following Are The Flights\n"<<endl;

                cout<<"1. CA - 431"<<endl;
                cout<<"\t01-01-2024 8:00AM 10hrs Rs. 12000"<<endl;

                cout<<"2. CA - 114"<<endl;
                cout<<"\t04-01-2024 9:00AM 10hrs Rs. 100000"<<endl;

                cout<<"3. CA - 222"<<endl;
                cout<<"\t04-01-2024 8:00AM 10hrs Rs. 90000"<<endl;

                cout<<"\n Select The Flight You Want To Book: ";
                cin>>choice1;

                if(choice1==1){
                    Charges = 12000;
                    cout<<"you have successfully book the flight 1. CA - 431"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }

                else if(choice1==2){
                    Charges=100000;
                    cout<<"you have successfully book the flight 2. CA - 114"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;

                }else if(choice1==3){
                    charges=90000;
                    cout<<"you have successfully book the flight 3. CA - 222"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input , shiftting to previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu: "<<endl;
                cin>>back;


                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            
            }
            case 3:
            {
                cout<<"__________________Welcome To India Airlines__________________\n"<<endl;

                cout<<"Your Comfort Is Our Priority. Enjoy The Journey!"<<endl;

                cout<<"Following Are The Flights\n"<<endl;

                cout<<"1. IND - 431"<<endl;
                cout<<"\t01-01-2024 8:00AM 10hrs Rs. 12000"<<endl;

                cout<<"2. IND - 114"<<endl;
                cout<<"\t04-01-2024 9:00AM 10hrs Rs. 100000"<<endl;

                cout<<"3. IND - 222"<<endl;
                cout<<"\t04-01-2024 8:00AM 10hrs Rs. 90000"<<endl;

                cout<<"\n Select The Flight You Want To Book: ";
                cin>>choice1;

                if(choice1==1){
                    Charges = 12000;
                    cout<<"you have successfully book the flight 1. IND - 431"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }

                


                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }

            }

            }
            case 2:{
                cout<<"__________________Welcome To USA Airlines__________________\n"<<endl;

                cout<<"Your Comfort Is Our Priority. Enjoy The Journey!"<<endl;

                cout<<"Following Are The Flights\n"<<endl;

                cout<<"1. US - 111"<<endl;
                cout<<"\t01-01-2024 8:00AM 10hrs Rs. 12000"<<endl;

                cout<<"2. US - 122"<<endl;
                cout<<"\t04-01-2024 9:00AM 10hrs Rs. 100000"<<endl;

                cout<<"3. US - 432"<<endl;
                cout<<"\t04-01-2024 8:00AM 10hrs Rs. 90000"<<endl;

                cout<<"\n Select The Flight You Want To Book: ";
                cin>>choice1;

                if(choice1==1){
                    Charges = 12000;
                    cout<<"you have successfully book the flight 1. US - 111"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }

                else if(choice1==2){
                    Charges=100000;
                    cout<<"you have successfully book the flight 2. US - 122"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;

                }else if(choice1==3){
                    charges=90000;
                    cout<<"you have successfully book the flight 3. US - 432"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input , shiftting to previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu: "<<endl;
                cin>>back;


                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
                default:
                {
                    cout<<"Invalid input, Shifting you to the main mneu"<<endl;
                    mainMenu();
                    break;
                }
            
            }


        };


float registration::charges;
int registration::choice;


class ticket : public registration, Details{
    public:
    void Bill(){
        string destination=" ";
        ofstream outf("records.txt");
        {
            outf<<"________________XYZ Airlines____________"<<endl;
            outf<<"________________Ticket_________________"<<endl;
            outf<<"_________________________________________"<<endl;

            outf<<"Customer ID:"<<Details::cId<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(registration::choice==1){
                destination="Pakistan";
            }
            if(registration::choice==2){
                destination="Pakistan";
            }
            if(registration::choice==3){
                destination="Pakistan";
            }
            if(registration::choice==4){
                destination="Pakistan";
            }
        } 
    }
}



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
                mainMenu();
                break;
            }

    }


}

int main(){
    Management Mobj;
    return 0;
}