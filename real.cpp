#include<iostream>
#include <chrono>
#include <ctime>
#include <iomanip> 
using namespace std;
// code for real time and date
  auto now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);
    
    tm* localTime = localtime(&currentTime);
    
void date() {  // function 1
    
    cout << "Current Date: "
         << put_time(localTime, "%Y-%m-%d") << endl;
}
 
 void time(){  // function 2

    
    cout << "Current Time: "
         << put_time(localTime, "%H:%M:%S") << endl;
 }

// UMSAN KAM 

 void displaymenu(){ // function 3
            cout<<"WELCOME TO XYZ ATM \n WHAT WOULD YOU LIKE TO DO \n 1=WITHDRAW MONEY \n 2= DEPOSIT MONEY \n 3= CHECK BALANCE\n 4=Exit\n";
 }
int main()  // main function
{
    int a,b,c,e;  
  

     // mini banking system
    
    long d=73400; //BALANCE
  do
  {
   
    
    cout<<"\n----------------------------"<<endl;
    cout<<"    WELCOME TO XYZ ATM      "<<endl;
    cout<<"----------------------------"<<endl;
    
     int i=3;  // 3 CHOICES
     while (i!=0)
     {
        cout<<"KINDLY ENTER 4 DIGIT PIN=";
        cin>>e;
        if (e==1234)
        {
            
        
        
         displaymenu();
     

    cout<<"KINDLY ENTER THE NO. OF FUNCTION YOU WANT TO DO =";
    cin>>a;

    if (a==1)
    {
        cout<<"HOW MUCH MONEY YOU WANT TO WITHDRAW \n MINIMUM WITHDRAW LIMIT IS 1000PKR AND MAXIMUM WITHDRAW LIMIT IS 25000PKR\n AMOUNT=";
        cin>>b;
        if (b>=1000 && b<=25000 && b<=d)
        {
            if (d!=0){
                
            
        
        
        cout<<"THE AMOUNT "<<b<<" CAN BE COLLECTED NOW\n"; 
        d-=b;
        cout<<"CURRENT BALANCE="<<d<<endl;
         cout<<"DO YOU WANT A RECIPT \n PRESS 1 IF YES AND 0 IF NOT "<<endl;
        int p;
        cin>>p;
        if (p==1)
        {
            cout<<"      XYZ ATM     "<<endl;
            cout<<"    CASH RECIEPT    "<<endl;
            date();                  time();
            cout<<"--------------------------"<<endl;
            cout<<"Amount Withdawed="<<b<<endl;
            cout<<"Current balance="<<d<<endl;
            
            
             cout<<"-----------------------------"<<endl;
              cout<<" THANKS FOR CHOOSING XYZ ATM  "<<endl;
              cout<<"-----------------------------"<<endl;
   
            }
              else
        {
              cout<<"-----------------------------"<<endl;
              cout<<" THANKS FOR CHOOSING XYZ ATM  "<<endl;
              cout<<"-----------------------------"<<endl;
             }
        }
              else 
        {
            cout<<"YOU HAVE UNSUFFICIENT BALANCE. . . ";
        }
       
      
        }
       
        else{
            cout<<"YOU HAVE ENTERED INVALID AMOUNT";
        }
        
         break;

    }
    else if (a==2)
    {
       cout<<"HOW MUCH MONEY YOU WANT TO DEPOSIT \n MINIMUM DEPOSIT LIMIT IS 1000PKR AND MAXIMIMUM DEPOSIT LIMIT IS 25000PKR\n AMOUNT=";
        cin>>c;
        if (c>=1000 && c<=25000)
        {
            
        
        
          cout<<"THE AMOUNT "<<c<<" is DEPOSITDED"<<endl;
           d+=c;
        cout<<"CURRENT BALANCE="<<d<<endl;
          cout<<"DO YOU WANT A RECIPT \n PRESS 1 IF YES AND 0 IF NOT "<<endl;
        int p;
        cin>>p;
        if (p==1)
        {
            cout<<"      XYZ ATM     "<<endl;
            cout<<"    CASH RECIEPT    "<<endl;
            date();                  time();
            cout<<"--------------------------"<<endl;
            cout<<"Amount Deposited="<<c<<endl;
            cout<<"Current balance="<<d<<endl;
            
            
             cout<<"-----------------------------"<<endl;
              cout<<" THANKS FOR CHOOSING XYZ ATM  "<<endl;
              cout<<"-----------------------------"<<endl;
        }
        else
        {
             cout<<"-----------------------------"<<endl;
              cout<<" THANKS FOR CHOOSING XYZ ATM  "<<endl;
              cout<<"-----------------------------"<<endl;
        }
        }
        else
        {
           cout<<"YOU HAVE ENTERED AN INVALID AMMOUNT"; 
        }
        
         
           break;
    }
    else if (a==3)
    {
        cout<<"YOUR CURRENT BALANCE IS "<<d; break;
              cout<<"-----------------------------"<<endl;
              cout<<" THANKS FOR CHOOSING XYZ ATM  "<<endl;
              cout<<"-----------------------------"<<endl;
    }
    else if(a==4)
    {
        cout<<"Exiting....."; break;
    }
    else{
      cout<<"You have entered the worng number ";break;
    }
    // USMAN KAM KHATAM
        }
     

     else
     {
        --i;
        cout<<"REMAING ATTEMPTS="<<i<<endl;
       
     }
     
     }
     if (i==0)
     {
           cout<<"WARNING! SEVERAL WRONG ATTEMPTS... \n  YOUR ACCOUNT HAS BEEN LOCKED \n PRESS 1 TO IF YOU WANT AN AI BOT TO ASSIST YOU \n PRESS 2 TO IF YOU WANT TO VISIT BRANCH\n NUMBER=";
           int a,n;
           cin>>a;
           if (a==1)
           {
            cout<<"XYZ BANK BOT IS AT YOUR SERVICE  WHAT SEEMS TO BE THE PROBLEM "<<endl;
            cout<<"1:- ATM CARD GOT STUCK IN THE MACHINE"<<endl;
            cout<<"2:- ACCOUNT BLOCKED DUE TO INVALID PIN"<<endl;
            cout<<"3:- FAULT IN THE MACHINE"<<endl;
            cout<<"ENTER THE NUMBER OF THE GIVEN QUESTION YOU HAVE=";
            cin>>n;
              int l=4321;
            switch (n)
            {
            case 1:
            case 2:
              cout<<"ENTER YOU PIN BACKWARD TO RESOLVE THE ISSUE"<<endl;
              cin>>l;
              if (l==4321)
              {
                cout<<"    ISSUE RESOLVED...."<<endl;
              }
              else{
                goto exit;
              }
              
                break;
            case 3:
            cout<<"CONTACT THE MENTIONED HELPLINE 051-0000000"<<endl; break;    
            
            default:
            cout<<"INVALID NUMBER ";
                break;
            }
            
           }
           else
           {
            cout<<"YOUR BANK APPOINTMENT IS SECHULED AT ";
            date();
            cout<<endl;
              goto exit;
           }
           
            
     }
     

  }while(a!=4);
     
   exit:
      cout<<"Exiting...";
return 0;
}