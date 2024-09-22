#include<iostream>
using namespace std;
int main(){
    int L, B, H ;
    cout<<"Enter length , breath and height.\n";
    cin>>L>>B>>H;

    // Create an array to store address of 2d arrays
    int ***ptr = new int **[L] ;

   
    for(int i=0 ; i<L ; i++){
         // create 2d array and store its addresses in ptr
        ptr[i] = new int *[B];
         // create 1d array 
        for(int j=0 ; j<B ; j++){
            ptr[i][j] = new int [H];
        }
    }

    //taking inputs
    for(int i=0 ; i<L ; i++){
    for(int j=0 ; j<B ; j++){
        for(int k=0 ; k<H ; k++){
            ptr[i][j][k] = i+j+k;
        }
    }
    }
    //printing outputs
    for(int i=0 ; i<L ; i++){
    for(int j=0 ; j<B ; j++){
        for(int k=0 ; k<H ; k++){
            cout<<ptr[i][j][k]<<" ";
        }
    }
    }
    // now delete all 1D arrays from heap
    for(int i=0 ; i<L ; i++){
        for(int j=0 ; j<B ; j++){
            delete[] ptr[i][j];
        }
    }
    // delete arrays which stores addresses of 1d arrays
    for(int i=0 ; i<L ; i++){
        delete[] ptr[i];
    }
     // delete array which stores addresses of 2d arrays

    delete[] ptr ; // deletes the array at address ptr

}