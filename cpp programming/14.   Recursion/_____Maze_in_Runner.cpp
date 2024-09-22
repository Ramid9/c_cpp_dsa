#include<iostream>
#include<vector>
#include<string>
using namespace std;
int row[]={-1,1,0,0};
int col[]={0,0,-1,1};
string dir="UDLR";

bool valid(int i, int j, int n){
    return i>=0 && j>=0 && i<=n-1 && j<=n-1;
}

string find_path(bool *Maze,int i,int j,int n,string path,vector<string>&ans,vector<vector<bool>>&visited){
    if(i==n-1&&j==n-1){
        ans.push_back(path);
        return;
    }
    //the current bock is visited 
    visited[i][j]=1;
    for(int k=0 ; k<4 ; k++){
        if(valid(i+row[k],j+col[k],n) && Maze[i+row[k]][j+col[k]] && !visited[i+row[k]][j+col[k]]){
            path.push_back(dir[k]);
            find_path((bool*)Maze,i+row[k],j+col[k],n,path,ans,visited);
            path.pop_back();
        }
    }
}

int main(){
    int n;
    cout<<"Enter size of maze: ";
    cin>>n;
    bool Maze[n][n];
    cout<<"Enter elements of the maze(0 or 1):\n";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>Maze[i][j];
        }
    }
    cout<<"The maze(0 or 1):\n";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<Maze[i][j]<<"  ";
        }
        cout<<endl;
    }

    vector<vector<bool>>visited(n,vector<bool>(n,0));
    vector<string>ans;
    string path;

    find_path((bool*)Maze,0,0,n,path,ans,visited);

    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i];
    }

}