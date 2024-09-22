#include<iostream>
using namespace std;
int main(){
    int temp = 1;   //prints 1 star in first row

    for(int i=1 ; i<=5 ; i++){  //for printing rows

        //for printing space in each row
        for(int j=1 ; j <= 5-i ; j++){
            cout<<"  ";
        }
        
        //for printing star in each row 
        for(int j=1 ; j <=temp ; j++){
            cout<<"* ";
        }
        cout<<endl; // to go next line

        temp = temp + 2; //increases star by 2 in each next line
    }
}