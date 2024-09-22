#include<iostream> //print 1 to N
using namespace std;
void PRINT(int num, int n){ // two variables for fn

    if(num==n){  // breaking condition
        cout<<num<<endl;
        return;
    }

    cout<<num<<endl;

    PRINT(num+1,n);

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    PRINT(1,n);
}