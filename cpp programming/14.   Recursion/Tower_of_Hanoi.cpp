#include<iostream>
using namespace std;
void ToH(int n, int source_rod , int helper_rod , int desti_rod){

    // for last disk 
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<source_rod<<" to "<<desti_rod<<endl;
        return;
    }

    // move (n-1) disks from source_rod to helper_rod first
    ToH(n-1,  source_rod,  desti_rod,  helper_rod);
    // then move n number disk from source to destination
    cout<<"Move disk "<<n<<" from "<<source_rod<<" to "<<desti_rod<<endl;
    
    // then move (n-1) disks from helper to destination rod
    ToH(n-1,  helper_rod,  source_rod,  desti_rod);


}
int main(){
    int n;
    cout<<"Enter number of disks: ";
    cin>>n;
    int source_rod =1 , helper_rod=2 , desti_rod=3 ;
    ToH(n,  source_rod,  helper_rod,  desti_rod);
}