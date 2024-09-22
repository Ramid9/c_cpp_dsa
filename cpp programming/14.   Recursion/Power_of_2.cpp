#include<iostream> 
using namespace std;
int power_2(int n){ 

    if(n==1)  // breaking condition
        return 2;
    
    return 2*power_2(n-1);

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int power =power_2(n);
    cout<<power<<endl;
}