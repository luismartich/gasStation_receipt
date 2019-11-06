#include <iostream>
using namespace std;

int main ()
{

float gallons,totalgas,gasType1,washcost;
char gasType,carWash;

cout<<"Enter gas type (R,P,S or N):   "<<endl;
cin>>gasType;

    if (gasType == 'R'|| gasType== 'r' )
    {
        gasType1=2.89;
        cout<<"Enter number of gallons:   "<<endl;
        cin>>gallons;
    }

    else if (gasType == 'P' || gasType == 'p')
    {
        gasType1=3.09;
        cout<<"Enter number of gallons:   "<<endl;
        cin>>gallons;
    }

    else if (gasType == 'S'|| gasType == 's')
    {
        gasType1=3.39;
        cout<<"Enter number of gallons:   "<<endl;
        cin>>gallons;
    }

    else if(gasType == 'N'|| gasType == 'n')
    {
        gasType1=0.00;
        gallons=0.00;
    }

    else
    cout<<"Please insert a correct gas type"<<endl;

totalgas=gallons*gasType1;

cout<<"Enter Y or N for car wash   "<<endl;
cin>>carWash;

    if ((carWash=='Y' && totalgas >= 10) || (carWash=='y' && totalgas >= 10))
    washcost=1.25;

    else if ((carWash=='Y' && totalgas < 10) || (carWash=='y' && totalgas < 10))
    washcost=3.00;

    else if (carWash=='N' || carWash== 'n')
    washcost=0.00;

    else
    cout <<"please insert a correct command"<<endl;

cout<<"**************************************"<<endl ;

cout<<"*                                    *"<<endl ;

cout<<"*                                    *"<<endl ;

cout<<"*    Gas-N-Clean Service Station     *"<<endl ;

cout<<"*                                    *"<<endl ;

cout<<"*                                    *"<<endl ;

cout<<"**************************************"<<endl ;

cout<< "The amount of gasoline Purchased:   "<<gallons<< " gallons"<<endl;
cout<< "Price per Gallons:   "<<gasType1<<" dollars"<<endl;
cout<< "Total Gasoline Cost:   "<<totalgas<<" dollars"<<endl;
cout<< "Car wash cost:    "<<washcost<<" dollars"<<endl;
cout<< "Your total due is    "<<totalgas+washcost<<" dollars"<<endl;

cout<<"Thank you for stopping"<<endl ;

cout<<"Please come again"<<endl ;

cout<<"Remember to buckle up and drive safely"<<endl ;

return 0;

}
