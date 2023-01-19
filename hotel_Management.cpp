#include<iostream>
using namespace std;

int main(){
    int quant; 
    int choice;

    // Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qchicken=0;
    // Food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Schicken=0;
    // Total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodle=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;

    cout<<"\n Quantity of Pasta: ";
    cin>>Qpasta;

    cout<<"\n Quantity of Burger: ";
    cin>>Qburger;

    cout<<"\n Quantity of Noodles: ";
    cin>>Qnoodle;

    cout<<"\n Quantity of Shake: ";
    cin>>Qshake;

    cout<<"\n Quantity of Chinken-roll: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chiken-roll";
    cout<<"\n7) Information regarding Sells and Collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter Your Choice!";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quant;
        if(Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant*1200;
            cout<<"\n\n\t\t"<<quant<<" room/roooms have been alloted to you!";
            break;
        }
        else
        {
            cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel";
            break;
        }

        case 2:
        cout<<"\n\n Enter Pasta Quantity ";
        cin>>quant;
        if(Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant*250;
            cout<<"\n\n\t\t"<<quant<<" pasta is the order!";
            break;
        }
        else
        {
            cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel";
            break;
        }

        case 3:
        cout<<"\n\n Enter Burger Quantity ";
        cin>>quant;
        if(Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + quant*120;
            cout<<"\n\n\t\t"<<quant<<" burger is the order!";
            break;
        }
        else
        {
            cout<<"\n\tOnly "<<Qburger-Sburger<<" Burgers remaining in hotel";
            break;
        }

        case 4:
        cout<<"\n\n Enter Noodles Quantity ";
        cin>>quant;
        if(Qnoodle - Snoodle >= quant)
        {
            Snoodle = Snoodle + quant;
            Total_noodle = Total_noodle + quant*140;
            cout<<"\n\n\t\t"<<quant<<" noodles is the order!";
            break;
        }
        else
        {
            cout<<"\n\tOnly "<<Qburger-Sburger<<" Noodles remaining in hotel";
            break;
        }

        case 5:
        cout<<"\n\n Enter Shake Quantity ";
        cin>>quant;
        if(Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + quant*100;
            cout<<"\n\n\t\t"<<quant<<" burger is the order!";
            break;
        }
        else
        {
            cout<<"\n\tOnly "<<Qshake-Sshake<<" Shake remaining in hotel";
            break;
        }

        case 6:
        cout<<"\n\n Enter Chicken_roll Quantity ";
        cin>>quant;
        if(Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + quant*180;
            cout<<"\n\n\t\t"<<quant<<" Chicken_roll is the order!";
            break;
        }
        else
        {
            cout<<"\n\tOnly "<<Qshake-Sshake<<" Chichen_roll remaining in hotel";
            break;
        }

        case 7:
        cout<<"\n\t\t Details of the sells and collection";
        cout<<"\n Number of Rooms we had: "<<Qrooms;
        cout<<"\n Number of Rooms we gave for Rent: "<<Srooms;
        cout<<"\n Remaining Rooms: "<<Qrooms-Srooms;
        cout<<"\n Total Rooms collection for the day: "<<Total_rooms;

        cout<<"\n\n Number of Pastas we had: "<<Qpasta;
        cout<<"\n Number of Pastas we sold: "<<Spasta;
        cout<<"\n Remaining Pastas: "<<Qpasta-Spasta;
        cout<<"\n Total Pastas collection for the day: "<<Total_pasta;

        cout<<"\n\n Number of Burgers we had: "<<Qburger;
        cout<<"\n Number of Burgers we sold: "<<Sburger;
        cout<<"\n Remaining Burgers: "<<Qburger-Sburger;
        cout<<"\n Total Burgers collection for the day: "<<Total_burger;

        cout<<"\n\n Number of Noodles we had: "<<Qnoodle;
        cout<<"\n Number of Noodles we sold: "<<Snoodle;
        cout<<"\n Remaining Noodles: "<<Qnoodle-Snoodle;
        cout<<"\n Total Noodles collection for the day: "<<Total_noodle;

        cout<<"\n\n Number of Shakes we had: "<<Qshake;
        cout<<"\n Number of Shakes we sold: "<<Sshake;
        cout<<"\n Remaining Shakes: "<<Qshake-Sshake;
        cout<<"\n Total Shakes collection for the day: "<<Total_shake;

        cout<<"\n\n Number of Chicken_roll we had: "<<Qchicken;
        cout<<"\n Number of Chicken_roll we sold: "<<Schicken;
        cout<<"\n Remaining Chicken_roll: "<<Qchicken-Schicken;
        cout<<"\n Total Chicken_roll collection for the day: "<<Total_chicken;

        cout<<"\n\n\n Total collection for the day: "<<Total_rooms + Total_pasta + Total_noodle +
        Total_burger + Total_shake + Total_chicken;
        break;

        case 8:
        exit(0);
        
        default:
        cout<<"\n Please select the numbers mentioned above!";

    }
    goto m;
}