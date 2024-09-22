#include<iostream>
using namespace std;
int main(){   // allocate memory for 2D array in heap region

    int n,m;
    cout<<"Enter row and columns: ";
    cin>>n>>n;
                            // creats ptr pointer in stack 
    int **ptr = new int *[n]; //creats an array of  n size in heap,,, ptr holds the address of that array
                            // each element (ptr[i]) of the array is address 
                            // addresses of 1 D arrays, of size m
                            // these 1 D arrays are the rows of the 2d array
    
    for(int i=0 ; i<n ; i++)
        ptr[i] = new int[m]; // 1D array of size m
                                // we need n 1D arrays 
    
    // memory for 2 d array has been created in heap , now fill it with value
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++)
        cin>>ptr[i][j];
    }
    //print
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
        cout<<ptr[i][j];
        }
        cout<<endl;
    }

    // now delete the memory in heap
    for(int i=0 ; i<n ; i++)
        delete[] ptr[i]; // deletes the array at address ptr[i]
    
    delete[] ptr ; // deletes the array at address ptr

}