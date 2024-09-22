// find the winner
#include<iostream>
#include<vector>
using namespace std;

int winner(vector<bool>&player, int n, int index, int player_alive, int k){
    // if only one player is alive he is the winner
    if(player_alive==1){
        for(int i=0 ; i<n ; i++){
            if(player[i]==0)
                return i;
        }
    }
    //find the position to kill player
    //(jump k-1 times) 1 st jump is for itself
    int kill = (k-1)%player_alive;
    while(kill--){
        index = (index+1)%n;
        //skips the already killed player in counting jump
        while(player[index]==1){
            index = (index+1)%n;
        }
    }
    //now kill the player at current index
    player[index]=1;
    //find the next position to start the game again
    while(player[index]==1)
        index = (index+1)%n;
    // start the game again for n-1 player alived
    winner(player,n,index,player_alive-1,k);
}
int main(){
    // game will start from first player and k th player will be killed
    int k , n;
    cout<<"Enter number of player:";
    cin>>n;
    cout<<"Enter number of jump:";
    cin>>k;
    // 0 means player is alive, 1 means killed
    vector<bool>player(n,0);

    cout<<winner(player,n,0,n,k)<<" is Winner player.";


}