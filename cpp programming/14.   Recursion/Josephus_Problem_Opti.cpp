// find the winner
#include<iostream>
#include<vector>
using namespace std;
// see notes
int winner(int n, int k){

    if(n==1)
        return 0;
    
    return (winner(n-1,k)+k)%n;
}
int main(){
    // game will start from first player and k th player will be killed
    int k , n;
    cout<<"Enter number of player:";
    cin>>n;
    cout<<"Enter number of jump:";
    cin>>k;
    

    cout<<winner(n,k)<<" is Winner player.";


}