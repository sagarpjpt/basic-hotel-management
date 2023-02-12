#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
//quantity
    int Qrooms=0, Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0; 
//food items sold
    int Srooms=0,Spasta=0,Sburgers=0,Snoodles=0,Sshakes=0,Schicken=0;
//total_price items
    int total_price_rooms=0,total_price_pasta=0,total_price_burgers=0,total_price_noodles=0,total_price_shake=0,total_price_chicken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n\t Rooms avaliable:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of burgers :";
    cin>>Qburger;
    cout<<"\n Quantity of noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake :";
    cin>>Qshake;
    cout<<"\n Quantity of chicken :";
    cin>>Qchicken;
    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta ";
    cout<<"\n3) Burgers ";
    cout<<"\n4) Noodles ";
    cout<<"\n5) shake ";
    cout<<"\n6) chicken ";
    cout<<"\n7) Infromation regarding sales and collection ";
    cout<<"\n8) Exit";
    cout<<"\n\n Please enter your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1 :
            cout<<"\n\n enter the numbers of room you want :";

            cin>>quant;
            if(Qrooms-Srooms>=quant)
            {
                Srooms=Srooms+quant;
                total_price_rooms=total_price_rooms+quant*1200;//total_price price of room 
                cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you !";
            }
            else
            {
                cout<<"\n\t only "<<Qrooms-Srooms<<" Rooms remaining in hotel ";
            }
            break;
        case 2 :
            cout<<"\n\n enter the Pasta quantity :";

            cin>>quant;
            if(Qpasta-Spasta>=quant)
            {
                Spasta=Spasta+quant;
                total_price_pasta=total_price_pasta+quant*200;//total_price price of room 
                cout<<"\n\n\t\t"<<quant<<" pasta is ordered !";
            }
            else
            {
                cout<<"\n\t only "<<Qpasta-Spasta<<" pasta remaining in hotel ";
            }
            break;
        case 3 :
            cout<<"\n\n enter the burgers quantity :";

            cin>>quant;
            if(Qburger-Sburgers>=quant)
            {
                Sburgers=Sburgers+quant;
                total_price_burgers=total_price_burgers+quant*120;//total_price price of room 
                cout<<"\n\n\t\t"<<quant<<" burger is ordered !";
            }
            else
            {
                cout<<"\n\t only "<<Qburger-Sburgers<<" burgers remaining in hotel ";
            }
            break;
        case 4 :
            cout<<"\n\n enter the Noodles quantity :";

            cin>>quant;
            if(Qnoodles-Snoodles>=quant)
            {
                Snoodles=Snoodles+quant;
                total_price_noodles=total_price_noodles+quant*110;//total_price price of room 
                cout<<"\n\n\t\t"<<quant<<" Noodles is ordered !";
            }
            else
            {
                cout<<"\n\t only "<<Qnoodles-Snoodles<<" Noodles remaining in hotel ";
            }
            break;
        case 5 :
            cout<<"\n\n enter the shakes quantity :";

            cin>>quant;
            if(Qshake-Sshakes>=quant)
            {
                Sshakes=Sshakes+quant;
                total_price_shake=total_price_shake+quant*50;//total_price price of room 
                cout<<"\n\n\t\t"<<quant<<" shake is ordered !";
            }
            else
            {
                cout<<"\n\t only "<<Qshake-Sshakes<<" shake remaining in hotel ";
            }
            break;
        case 6 :
            cout<<"\n\n enter the chicken quantity :";

            cin>>quant;
            if(Qchicken-Schicken>=quant)
            {
                Schicken=Schicken+quant;
                total_price_chicken=total_price_chicken+quant*250;//total_price price of room 
                cout<<"\n\n\t\t"<<quant<<" chicken is ordered !";
            }
            else
            {
                cout<<"\n\t only "<<Qchicken-Schicken<<" chicken remaining in hotel ";
            }
            break;
        case 7 :
            cout<<"\n\t\t Details of sales and collection ";
            cout<<"\n\n Numbers of rooms we had : "<<Qrooms;
            cout<<"\n\n Numbers of rooms we gave for rent : "<<Srooms;
            cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
            cout<<"\n\n Total Room collection for the day :"<<total_price_rooms;

            cout<<"\n\t\t Details of sales and collection ";
            cout<<"\n\n Numbers of pasta we had : "<<Qpasta;
            cout<<"\n\n Numbers of pasta we gave for rent : "<<Spasta;
            cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
            cout<<"\n\n Total pasta sold collection for the day :"<<total_price_pasta;

            cout<<"\n\t\t Details of sales and collection ";
            cout<<"\n\n Numbers of burgers we had : "<<Qburger;
            cout<<"\n\n Numbers of burgers we gave for rent : "<<Srooms;
            cout<<"\n\n Remaining burgers : "<<Qburger-Sburgers;
            cout<<"\n\n Total burgers collection for the day :"<<total_price_burgers;

            cout<<"\n\t\t Details of sales and collection ";
            cout<<"\n\n Numbers of noodles we had : "<<Qnoodles;
            cout<<"\n\n Numbers of noodles we gave for rent : "<<Snoodles;
            cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
            cout<<"\n\n Total noodles collection for the day :"<<total_price_noodles;

            cout<<"\n\t\t Details of sales and collection ";
            cout<<"\n\n Numbers of shakes we had : "<<Qshake;
            cout<<"\n\n Numbers of shakes we gave for rent : "<<Sshakes;
            cout<<"\n\n Remaining shakes : "<<Qshake-Sshakes;
            cout<<"\n\n Total shakes collection for the day :"<<total_price_shake;

            cout<<"\n\t\t Details of sales and collection ";
            cout<<"\n\n Numbers of chicken we had : "<<Qchicken;
            cout<<"\n\n Numbers of chicken we gave for rent : "<<Schicken;
            cout<<"\n\n Remaining chicken : "<<Qchicken-Schicken;
            cout<<"\n\n Total chicken collection for the day :"<<total_price_chicken;
            cout<<"\n\n\t\tTotal collection of the day :"<<total_price_burgers+total_price_chicken+total_price_noodles+total_price_pasta+total_price_rooms+total_price_shake;
            break;
        case 8 :
            exit(0);   
            break;
        default :
            cout<<"\n please select the numbers mentioned_above";
    }
    goto m;
}