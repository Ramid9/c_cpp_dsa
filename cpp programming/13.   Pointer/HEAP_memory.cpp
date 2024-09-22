#include<iostream>      //heap has very larg memory than stack
                      // usually all funtions are stored in stack memory                  
using namespace std; // when one function is exucated completely it frees up that memory
                    
int main(){
    // allocate memory for variable in heap region
    int *p = new int;
    *p = 6;
    cout<<*p  <<endl;

    float *p1 = new float;
    *p1 = 6.6;
    cout<<*p1<<endl;

    //allocate memory for array in the heap region
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *p2 = new int[n]; // creats an array of size n of integer type in heap

   //take values
   for(int i=0 ; i<n ; i++)
   p2[i]=i+1;
   //print values
   for(int i=0 ; i<n ; i++)
   cout<<p2[i]<<" ";

    // Delete the memory occupied by array and varriables in heap
    delete p2;
    delete p1;  // heap do not free up memory space by itself
    delete p;


}