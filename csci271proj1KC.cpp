//CSCI271 programming project 1, option 2 by Ke-vin Chan
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int  s1=0, s2=0, s3=0, ts=0, d=0, cs=0;
    double tp=0, p1=0, p2=0, p3=0;
    cout<<fixed<<setprecision(2);

    cout<<"Hello Travel Agent, please enter ticket price for Moscow: ";
    cin>>p1;
    cout<<"\nPlease enter seats available for Moscow: ";
    cin>>s1;
    cout<<"\nPlease enter ticket price for Tokyo: ";
    cin>>p2;
    cout<<"\nPlease enter seats available for Tokyo: ";
    cin>>s2;
    cout<<"\nPlease enter ticket price for Berlin: ";
    cin>>p3;
    cout<<"\nPlease enter seats available for Berlin: ";
    cin>>s3;

    ts=s1+s2+s3;

    while(ts!=0){
        if(s1!=0)cout<<"\nMoscow \t "<<s1<<" seats remaining";else cout<<"\nMoscow \t Sold Out";
        if(s2!=0)cout<<"\nTokyo \t "<<s2<<" seats remaining";else cout<<"\nTokyo \t Sold Out";
        if(s3!=0)cout<<"\nBerlin \t "<<s3<<" seats remaining";else cout<<"\nBerlin \t Sold Out";

        cout<<"\nHello Customer, please enter your destination(1 for Moscow, 2 for Tokyo, 3 for Berlin): ";
        cin>>d;

        while(d<=0||d>3){cout<<"\nHello Customer, please enter a valid destination(1 for Moscow, 2 for Tokyo, 3 for Berlin): ";
                                    cin>>d;}

        if(d==1){
                if(s1==0){
                            cout<<"\nThere are no seats remaining on that flight, please select another";
                                }
                else {cout<<"\nPlease enter number of tickets you would like to buy for the flight to Moscow: "; cin>>cs;
                        if(cs>s1||cs==0){
                                while(cs>s1||cs==0){
                                                      cout<<"\nYou are either trying to purchase more tickets than there are available or entered 0, please enter a different amount of ticket(s): ";
                                                      cin>>cs;
                                                     }
                                      }
                        s1=s1-cs;
                        cout<<"\nHere is your receipt:\nMoscow \t "<<cs<<" tickets \t $ "<<p1*cs<<endl;
                       }
                    }

        else if(d==2){
                if(s2==0){
                            cout<<"\nThere are no seats remaining on that flight, please select another";
                                }
                else {cout<<"\nPlease enter number of tickets you would like to buy for the flight to Tokyo: "; cin>>cs;
                        if(cs>s2||cs==0){
                                while(cs>s2||cs==0){
                                                      cout<<"\nYou are either trying to purchase more tickets than there are available or entered 0, please enter a different amount of ticket(s): ";
                                                      cin>>cs;
                                                     }
                                      }
                        s2=s2-cs;
                        cout<<"\nHere is your receipt:\nTokyo \t "<<cs<<" tickets \t $ "<<p2*cs<<endl;
                       }
                    }

		else if(d==3){
                if(s3==0){
                            cout<<"\nThere are no seats remaining on that flight, please select another";
                                }
                else {cout<<"\nPlease enter number of tickets you would like to buy for the flight to Berlin: "; cin>>cs;
                        if(cs>s3||cs==0){
                                while(cs>s3||cs==0){
                                                      cout<<"\nYou are either trying to purchase more tickets than there are available or entered 0, please enter a different amount of ticket(s): ";
                                                      cin>>cs;
                                                     }
                                      }
                        s3=s3-cs;
                        cout<<"\nHere is your receipt:\nBerlin \t "<<cs<<" tickets \t $ "<<p3*cs<<endl;
                       }
                    }
        ts=s1+s2+s3;
    }

}
