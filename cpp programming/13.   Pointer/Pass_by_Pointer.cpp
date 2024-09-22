#include<iostream>
#include<vector>
using namespace std;

void charincr(char* crr){ // or crr[]
    for(int i=0 ; i<5 ; i++)
        crr[i]++;
}
void incr(int* arr){ // or arr[]
    for(int i=0 ; i<4 ; i++)
        arr[i]++;
}
void swapping(int* p1, int* p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    //variable
    int a=10;
    int b=20;
    swapping(&a,&b);
    cout<<a<<endl<<b<<endl;

    //integer array
    int arr[]={1,2,3,4};
    incr(arr);
    for(int i=0 ; i<4 ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    //char array
    char crr[]="ramid";
    charincr(crr);
    for(int i=0 ; i<5 ; i++)
        cout<<crr[i]<<" ";
    cout<<endl;
}