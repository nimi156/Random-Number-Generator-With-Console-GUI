#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

int main()
{

cout<<"Enter a Number, and then press Enter:      "<<endl;
cout<<"1------Random Number Generator (Ten Times)"<<endl;
cout<<"2------Random Number Generator (Hundred Times)"<<endl;
cout<<"3------Random Number Generator (thousand Times)"<<endl;
cout<<"4------Random Number Generator (Million Times)"<<endl;
cout<<"5------Program Information"<<endl;

int choice;
cin>>choice;
switch(choice)
{
   case 1:
        srand(time(0));
for(int x=1;x<11;x++)
{
    cout<<"--------------------------------------"<<endl;
    cout<<"Random number is:    " ;
    cout<<1+(rand()%6)<<endl;

}
        break;

   case 2:
               srand(time(0));
for(int x=1;x<101;x++)
{
    cout<<"--------------------------------------"<<endl;
    cout<<"Random number is:    " ;
    cout<<1+(rand()%6)<<endl;

}
        break;

   case 3:
               srand(time(0));
for(int x=1;x<1001;x++)
{
    cout<<"--------------------------------------"<<endl;
    cout<<"Random number is:    " ;
    cout<<1+(rand()%6)<<endl;

}
        break;

   case 4:
               srand(time(0));
for(int x=1;x<1000001;x++)
{
    cout<<"--------------------------------------"<<endl;
    cout<<"Random number is:    " ;
    cout<<1+(rand()%6)<<endl;


}
        break;

   case 5:
        cout<<" Hello, my name is khalid ka"<<endl;
        cout<<"This program uses, srand(time(0))"<<endl;
        break;
    default:
        cout<<"         "<<endl;
        exit(0);
}
srand(time(0));

}
