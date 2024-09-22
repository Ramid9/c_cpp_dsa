#include<iostream>
using namespace std;
void anticlockwise(string &anticlock){
    int n=anticlock.size();
    char c=anticlock[0]; // first char of string
    for(int i=1 ; i<=n-1 ; i++){
        anticlock[i-1]=anticlock[i];
    }
    anticlock[n-1]=c; // becomes last char
}
void clockwise(string &clock){
    int n=clock.size();
    char c=clock[n-1]; // last char of string
    for(int i=n-2 ; i>=0 ; i--){
        clock[i+1]=clock[i];
    }
    clock[0]=c; // becomes first char

}
int main(){   // find whether s1 can be rotated into s2 by two places, clock or anti clockwise
    string s1 , s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);

    string clock , anticlock;
    clock = s1;
    anticlock = s1;

    // two places clockwise rotation
    clockwise(clock);
    clockwise(clock);
    if(clock==s2)
        cout<<"Clocwise 2 place Rotation Possible\n";

    // two places anticlockwise rotation
    anticlockwise(anticlock);
    anticlockwise(anticlock);
    if(anticlock==s2)
        cout<<"Anticlocwise 2 place Rotation Possible";
    else
        cout<<"Rotation Not Possible";
}