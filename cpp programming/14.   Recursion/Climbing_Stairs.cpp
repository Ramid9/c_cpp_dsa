#include<iostream> 
using namespace std;
int climb(int n){ 
    if(n<=1)
        return 1;
    // breaking condition
       
    return climb(n-1) + climb(n-2);

}
int main(){
    int n;
    cout<<"Enter position of stairs: ";
    cin>>n;
    cout<<climb(n)<<endl;
}