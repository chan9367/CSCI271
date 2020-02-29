//CSCI 271 Fall 2018 Project 2, option 2 by Ke-vin Chan

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int r1=0, r2=0, s2=0;
	srand(time(0));
	do{
		cout<<"Runner 1 is at step "<<r1<<" Runner 2 is at step "<<r2<<endl;
		r1+=2;
		cout<<"Runner 1 runs 2 steps forward."<<endl;
		
		s2=1+rand()%12;
		if(s2%2==0){r2+=s2;cout<<"Runner 2 runs "<<s2<<" steps forward."<<endl;}
		else{r2-=s2;cout<<"Runner 2 runs "<<s2<<" steps backwards."<<endl;}
		if(r2<0)r2=0;
		
	}while(r1!=100&&r2<100);
	if(r1==100&&r2>=100)cout<<"Runner 1 is at step 100 Runner 2 is at step "<<r2<<endl<<"It's a tie!";
	else if(r2>=100)cout<<"Runner 1 is at step "<<r1<<" Runner 2 is at step "<<r2<<endl<<"Runner 2 wins!";
	else if(r1==100)cout<<"Runner 1 is at step 100 Runner 2 is at step "<<r2<<endl<<"Runner 1 wins!";
	
}