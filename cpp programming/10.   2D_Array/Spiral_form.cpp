#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int r , c ;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    cout<<"Enter elements of the matrix: ";
    int arr[r][c];
    //input the elements 
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nGiven matrix: \n";
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"\nSpiral form of Given matrix: \n";
    //counts round
    int count=0;
    while(r>=0){
           
            int ROWin=0;
            int COLin=0;
            ROWin += count;//first row index of each round
            COLin += count;//first column index of each round

            //prints row left to right
            for(int j=0 ; j<c ; j++){
                cout<<arr[ROWin][COLin]<<" ";
                COLin++;//column index increases
            }
            COLin--;
            r--;//1 row is completed
            ROWin++;
           
            //prints column up to down
            if(c>0){
                for(int j=0 ; j<r ; j++){  
                    cout<<arr[ROWin][COLin]<<" ";
                    ROWin++;//row index increases
                }
                ROWin--;
                c--; // 1 column is completed
                COLin--;
            }
        
            //prints row right to left
            if(r>0){
                for(int j=0 ; j<c ; j++){
                    cout<<arr[ROWin][COLin]<<" ";
                    COLin--;
                }
                COLin++;
                r--;//1 row is completed
                ROWin--;
            }
           
            //prints column down to up
            if(c>0){
                for(int j=0 ; j<r ; j++){  
                    cout<<arr[ROWin][COLin]<<" ";
                    ROWin-- ;
                }
                c--; //1 column is completed
                count++;
            }
        
    }
}