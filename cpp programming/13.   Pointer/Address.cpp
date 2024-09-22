#include<iostream>
using namespace std;
int main(){
    char c[]="GATE2024";
    char *p=c;
    cout<<p<<endl;
    // p stores address of c or address of 'G'
    
    cout<<p+p[3]-p[1];
    // ADDRESS OF c + p[3] - p[1]
    // ADDRESS OF c + E - A
    // ADDRESS OF c + 69 - 65 
    //ADDRESS OF c + 4
    // ADDRESS OF '2' 
}