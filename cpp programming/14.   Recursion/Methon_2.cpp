#include<iostream> //print 1 to N
using namespace std;
void PRINT( int n){ // one variable for fn

    if(n==1){  // breaking condition
        cout<<n<<endl;
        return;
    }

    PRINT(n-1); // first print[n-1] then n and so on ,,,
                    // draw reqursive tree to understand

    cout<<n<<endl;

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    PRINT(n);
}