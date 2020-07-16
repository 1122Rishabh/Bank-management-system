#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class bank
{
    char name[100],add[100],y;
    int balance;
    public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();

};
void bank::open_account()
{
    cout<<"Enter Your name::"<<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address::"<<endl;
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account you want to open saving (s) or currunt (c)::"<<endl;
    cin>>y;
    cout<<"Enter ammount for deposite::"<<endl;
    cin>>balance;
    cout<<"Your bank account is created \n\n\n";

}

void bank :: deposite_money()
{
    int a;
    cout<<"Enter how much you deposite"<<endl;
    cin>>a;
    balance+=a;
    cout<<"Total ammount you deposite ::"<<endl<<balance<<endl;


}
void bank:: display_account()
{
    cout<<"Your full name::"<<name<<endl;
    cout<<"Your address::"<<add<<endl;
    cout<<"Type of account that you open::"<<endl<<y<<endl;
    cout<<"Ammount you deposite::"<<endl<<balance<<endl;

}
void bank::withdraw_money()
{
    float ammount;
    cout<<"\n Withdraw::"<<endl;
    cout<<"Enter ammount to withdraw::"<<endl;
    cin>>ammount;
    balance-=ammount;
    cout<<"Now total ammount is left ::"<<endl<<balance<<endl;

}
int main()
{
    int ch,x;
    bank obj;
    do
    {
    cout<<"1) Open account \n";
    cout<<"2) Deposte money \n";
    cout<<"3) Withdraw money \n";
    cout<<"4) Display account \n";
    cout<<"4) Exit \n";
    cout<<"Select the options from above::";
    cin>>ch;
    switch (ch)
    {
        case 1:
        cout<<"1) open account \n"; 
        obj.open_account();
        break;
        case 2:
        cout<<"2) deposite money \n";
        obj.deposite_money();
        break;
        case 3:
        cout<<"3) Withdraw money:\n";
        obj.withdraw_money();
        break;
        case 4: "4) Display money \n";
        obj.display_account();
        break;
        case 5:
        if (ch==5)
        {
            exit(1);
        }
        default:
        cout<<"this is not exits try again \n";


    };
    cout<<"do you want to select next options then press y ::"<<endl;
    cout<<"                      or                   "<<endl;
    cout<<"if you want to exit then press N::";
    x=getch();
    if(x=='n'||x=='N')
    exit(0);
} while (x=='y'||x=='y');


    


   
   




getch();
return 0;
}