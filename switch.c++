#include<iostream>
using namespace std;


int main(){


    while(1){

        cout<<"which op[peration u want to use 100 , 20 , 50 or - "<<endl;
        int o;
        cin>>o;

        int a;
        cout << "enter the number a" << endl;
        cin>>a;

        switch (o)
        {
        case 100:{
            int c;
            c = a / 100;
            cout<<c<<endl;
            break;
        }

        case 20:
        {
            int c;
            c = a / 20;
            cout << c << endl;
            break;
        }

        case 50:
        {
            int c;
            c = a / 20;
            cout << c << endl;
            break;
        }

        default:
            cout<<"nothing";
            break;
        
        }


        exit(1);
   

    }

}