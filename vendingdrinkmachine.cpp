#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void donepayment(){
                    cout<<"Order completed\n";
}

void process(int amount,int paise){
            cout<<"Processing.......\n";
            cout<<"Please enter "<<amount<<" rupees to proceed further\n";
            cout<<"Don't worry  changes will be provided back to you \n";
            cin>>paise;
            if(paise<amount){
                cout<<"Not enough! You had given "<<amount-paise<<" rupees less\n ";
                cout<<"REFUNDED\n";
                cout<<"Enter the amount again \n";
                cin>>paise;
                if(amount==paise){
                donepayment();
                }
            }
            else if(paise==amount){
                    cout<<"DONE"<<endl;
                }
            else{
                    cout<<paise-amount<<" RUPEES PAYED BACK"<<endl;

                }

                cout<<"THANK YOU"<<endl;

}
int main(){
    cout<<"\t\t\t\t\tWELCOME TO\n";
    cout<<"\t\t\t\tVENDORING DRINK MACHINE\n\n";
    cout<<"\t\tThe drinks offered here are Coca, Slice, Normal Water\n\n";
    cout<<"We have a certain procedure to be followed to get your desired drink\n";
    cout<<"You can demand for one drink at a time and  You cannot demand for more than 10 bottles each\n\n";
    cout<<"Type 1 if you want Drink number 1 i.e. Coca\t\t\t\tPrice- 44 per bottle\n";
    cout<<"Type 2 if you want Drink number 2 i.e. Slice\t\t\t\tPrice- 25 per bottle\n";
    cout<<"Type 3 if you want Drink number 3 i.e. Mineral Water\t\t\tPrice- 12 per bottle\n";
    int n,quantity,paise;
    int amount;
    int price1=44,price2=25,price3=12,price;
    string str;

    cout<<" Enter drink number : ";
    cin>>n;
    switch (n){
    case 1:
        cout<<"COCA\n";
        cout<<"Enter quantity(1-10): ";
        cin>>quantity;
        if(quantity>10 || quantity<1){
            cout<<"Sorry, We do not have "<<quantity<<" bottles to provide you,Please read the rules and do the procedure again"<<endl;
        }
        else{
        price=price1;
        amount=quantity*price;
        cout<<"Your total bill is:  "<<amount;
        cout<<"\n proceed to pay?(yes/no)\n";
        cin>>str;
        if(str=="yes" || str=="YES"){
            process(amount, paise);
        }
        else if(str=="no" || str=="NO"){
        cout<<"Okay! Your order has been canceled";
        }
        else{
                cout<<"Please enter valid answer \n";
                cin>>str;
                if(str=="yes" || str=="YES"){
                      process(amount, paise);
                 }
        }
        }
    break;
    case 2:
        cout<<"SLICE\n";
        cout<<"Enter quantity(1-10): ";
        cin>>quantity;
        if(quantity>10 || quantity<1){
            cout<<"Sorry, We do not have "<<quantity<<" bottles to provide you, Please read the rules and do the procedure again"<<endl;
        }
        else{
        price=price2;
        amount=quantity*price;
        cout<<"Your total bill is:  "<<amount;
        cout<<"\n proceed to pay?(yes/no)\n";
        cin>>str;
        if(str=="yes"){
            process(amount, paise);
        }
        else if(str=="no" ){
        cout<<"Okay! Your order has been canceled";
        }
        else{
                cout<<"Please enter valid answer \n";
                cin>>str;
                if(str=="yes"){
                      process(amount, paise);
                }
        }
        }
    break;
    case 3:
        cout<<"MINERAL WATER\n";
        cout<<"Enter quantity(1-10): ";
        cin>>quantity;
        if(quantity>10 || quantity<1){
            cout<<"Sorry, We do not have "<<quantity<<" bottles to provide you, Please read the rules and do the procedure again"<<endl;
        }
        else{
        price=price3;
        amount=quantity*price;
        cout<<"Your total bill is:  "<<amount;
        cout<<"\n proceed to pay?(yes/no)\n";
        cin>>str;
        if(str=="yes"|| str=="YES"){
            process(amount, paise);
        }
        else if(str=="no" || str=="NO"){
        cout<<"Okay! Your order has been canceled";
        }
        else{
                cout<<"Please enter valid answer \n";
                cin>>str;
                if(str=="yes" || str=="YES"){
                      process(amount, paise);
                 }
        }
        }
    break;

    default:
        cout<<"INVALID INPUT ";
    }
    return 0;
}
