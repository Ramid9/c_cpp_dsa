#include<iostream>
using namespace std;
int main(){ //find the minimum time to paint all walls
            //1 unit wall ---> 1 unit time
    int n, arr[50] , painter ;
    cout<<"Enter number of wall: ";
    cin>>n;
    cout<<"Enter number of painters: ";
    cin>>painter;
    cout<<"Enter the length of each wall: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int start = 0 , end = 0 , mid , ans;
    for(int i=0 ; i<n ; i++){
        //start= lenth of longest wall
        start = max(start,arr[i]); 
        //end = total length of all walls
        end+=arr[i]; 
    }
    
    while(start<=end){
        mid= start + (end-start)/2;
        int count = 1 , length = 0; //count=1 ---> 1st wall
        // wall allocate to painters
        for(int i=0; i<n; i++){
            length+=arr[i];
            
            if(length>mid){ 
                //count=2 ---> 2nd painter paints the next wall
                count++;
                length = arr[i];
            }
        }
        if(count<=painter){ 
            ans=mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    cout<<"Minimum time to paint the walls "<<ans<<" units.";
}