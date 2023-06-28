#include<iostream>
using namespace std;


int main(){

    // Phase - 1   

    // Total Quantity of available items
    int Qrooms = 0, Qpasta = 0, Qnoodles = 0, Qburger = 0, Qshake = 0, Qchicken = 0;

    // Quantity of sold items
    int Srooms = 0, Spasta = 0, Snoodles = 0, Sburger = 0, Sshake = 0, Schicken = 0;

    // Total price of items - This qty is to calculate total sale of a itme
    int Total_room_price =0, Total_pasta_price =0, Total_noodles_price =0,Total_burger_price =0, Total_shake_price =0, Total_chicken_price =0;

    //Take input of items available

    cout<<endl<<" \t ------ Quantity of items we have ------"<<endl;
    cout<<"\n Enter No of Rooms available in Hotel : "<<endl;
    cin>> Qrooms;

    cout<<"Enter Qty of Pasta available in Hotel : "<<endl;
    cin>> Qpasta;

    cout<<"Enter No of Noodles available in Hotel : "<<endl;
    cin>> Qnoodles;

    cout<<"Enter No of Burger available in Hotel : "<<endl;
    cin>> Qburger;

    cout<<"Enter No of Shake available in Hotel : "<<endl;
    cin>> Qshake;

    cout<<"Enter No of Chicken available in Hotel : "<<endl;
    cin>> Qchicken;

    // Create a menu for customer

    m:

    cout<<"\n\t ------ Please select from the menu options ------ "<<endl;
    cout<<"\n (1) Rooms (2) Pasta  (3) Burger  (4) Noodles  (5)  Shake  (6) Chicken ";
   
    cout<<"\n\n (7) Information regarding sales and collection (Only for Owner)"; // For owener use only
    cout<<"\n\n (8) Exit \n"<<endl; // To exit from the menu

    // Phase - 2 - Functionality part  

    cout<<"\t ------ Plese enter your choise ------- "<<endl;

    int Quant = 0; // for quantity
    int Choice = 0; // for choice


    cin>>Choice;

    switch(Choice){

        case 1: cout<<"Enter the no of rooms you want : ";
                cin>>Quant;
                if(Qrooms-Srooms >= Quant){
                    Srooms += Quant;
                    Total_room_price = Total_room_price+Quant*1200; // we add total room price to calculate overall room sales
                    cout<<endl<<Quant<<" Rooms have been alloted to you "<<endl;
                    break;
                }else{
                    cout<<"Only : "<<Qrooms-Srooms<<" are available in Hotel !"<<endl;
                    break;
                }

        case 2: cout<<"Enter the no of pasta you want : ";
                cin>>Quant;
                if(Qpasta-Spasta >= Quant){
                    Spasta += Quant;
                    Total_pasta_price = Total_pasta_price+Quant*250;
                    cout<<endl<<Quant<<" pasta is the order "<<endl;
                    break;
                }else{
                    cout<<"Only : "<<Qpasta-Spasta<<" pasta is available in Hotel !"<<endl;
                    break;
                }

        case 3: cout<<"Enter the no of burger you want : ";
                cin>>Quant;
                if(Qburger-Sburger >= Quant){
                    Sburger += Quant;
                    Total_burger_price = Total_burger_price+Quant*50;
                    cout<<endl<<Quant<<" Burger is the order "<<endl;
                    break;
                }else{
                    cout<<"Only : "<<Qburger-Sburger<<" Burger is available in Hotel !"<<endl;
                    break;
                }

        case 4: cout<<"Enter the no of noodle you want : ";
                cin>>Quant;
                if(Qnoodles-Snoodles >= Quant){
                    Snoodles += Quant;
                    Total_noodles_price = Total_noodles_price+Quant*25;
                    cout<<endl<<Quant<<" Nooodles is the order "<<endl;
                    break;
                }else{
                    cout<<"Only : "<<Qnoodles-Snoodles<<" noodles is available in Hotel !"<<endl;
                    break;
                }

        case 5: cout<<"Enter the no of shake you want : ";
                cin>>Quant;
                if(Qshake-Sshake >= Quant){
                    Sshake += Quant;
                    Total_shake_price = Total_shake_price+Quant*200;
                    cout<<endl<<Quant<<" Shake is the order "<<endl;
                    break;
                }else{
                    cout<<"Only : "<<Qshake-Sshake<<" shake is available in Hotel !"<<endl;
                    break;
                }

        case 6: cout<<"Enter the no of chicken you want : ";
                cin>>Quant;
                if(Qchicken-Schicken >= Quant){
                    Schicken += Quant;
                    Total_chicken_price = Total_chicken_price+Quant*550;
                    cout<<endl<<Quant<<" Chicken is the order "<<endl;
                    break;
                }else{
                    cout<<"Only : "<<Qchicken-Schicken<<" Chicken is available in Hotel !"<<endl;
                    break;
                }

        // Phase - 3 - Details

        case 7:
                cout<<"Confirm the ownership"<<endl;
                int psw; // psw = 1234
                cout<<"Enter the password : ";
                cin>>psw;
                if(psw==1234){
                cout<<" --- Details of sales and collection ---\n"<<endl;
                //For rooms
                cout<<"\n\t------ For Rooms ------\n"<<endl;
                cout<<"No of rooms we had : "<<Qrooms<<endl;
                cout<<"No of rooms we gave for rent : "<<Srooms<<endl;
                cout<<"Remainig rooms : "<<Qrooms-Srooms<<endl;
                cout<<"Total rooms collection for the day : "<<Total_room_price<<endl;
                //For pasta
                cout<<"\n\t------ For Pasta ------\n"<<endl;
                cout<<"No of pasta we had : "<<Qpasta<<endl;
                cout<<"No of pasta we sold : "<<Spasta<<endl;
                cout<<"Remainig pasta : "<<Qpasta-Spasta<<endl;
                cout<<"Total pasta collection for the day : "<<Total_pasta_price<<endl;
                //For Burger
                cout<<"\n\t------ For Burger ------\n"<<endl;
                cout<<"No of burger we had : "<<Qburger<<endl;
                cout<<"No of burger we sold : "<<Sburger<<endl;
                cout<<"Remainig burger : "<<Qburger-Sburger<<endl;
                cout<<"Total burger collection for the day : "<<Total_burger_price<<endl;
                //For Noodles
                cout<<"\n\t------ For Noodles ------\n"<<endl;
                cout<<"No of noodles we had : "<<Qnoodles<<endl;
                cout<<"No of noodles we sold : "<<Snoodles<<endl;
                cout<<"Remainig noodles : "<<Qnoodles-Snoodles<<endl;
                cout<<"Total noodles collection for the day : "<<Total_noodles_price<<endl;
                //For shake
                cout<<"\n\t------ For Shake ------\n"<<endl;
                cout<<"No of shake we had : "<<Qshake<<endl;
                cout<<"No of shake we sold : "<<Sshake<<endl;
                cout<<"Remainig shake : "<<Qshake-Sshake<<endl;
                cout<<"Total shake collection for the day : "<<Total_pasta_price<<endl;
                //For chicken
                cout<<"\n\t------ For Chicken ------\n"<<endl;
                cout<<"No of chicken we had : "<<Qchicken<<endl;
                cout<<"No of chicken we sold : "<<Schicken<<endl;
                cout<<"Remainig chicken : "<<Qchicken-Schicken<<endl;
                cout<<"Total chicken collection for the day : "<<Total_chicken_price<<endl;

                cout<<"\n\t------ Total Collection ------\n"<<endl;
                cout<<"Total collection of the day : "<<Total_burger_price+Total_chicken_price+Total_noodles_price+Total_pasta_price+Total_room_price+Total_shake_price;
                break;
                }
                else{
                    cout<<"Wronge password"<<endl;
                }
                break;

        case 8: 
                exit(0);
        
        default: cout<<"Please select the no mentioned above "<<endl;

    }
    goto m;

}