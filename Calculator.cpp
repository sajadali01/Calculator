#include<iostream>
using namespace std;

int main()
{
    int num1,num2,choice;
    cout<<"Enter Number 1 : ";
    cin>>num1;
    cout<<"Enter Number 2 : ";
    cin>>num2;

    cout<<"\n===========Operations===========\n\t1.Add\n\t2.Subtract\n\t3.Multiply\n\t4.Divide\n\t5.Exit\n\n";
    while(choice != 5)
    {
        cout<<"Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1 :
                cout<<"Addition : "<<num1+num2<<endl;
            break;
            case 2 :
                cout<<"\nSubtraction : "<<num1-num2<<endl;
            break;
            case 3 :
                cout<<"\nMutiplication : "<<num1*num2<<endl;
            break;
            case 4 :
                int result;
                try
                {
                    result = num1/num2;
                    cout<<"\nDivision : "<<result<<endl;
                }
                catch(const std::exception& e)
                {
                    cout<<"Number Cant Divisible By Zero !!";
                }
            break;
            case 5:
                cout<<"\nExited Successfully!!!!";
                break;
            break;
        }
    }
}