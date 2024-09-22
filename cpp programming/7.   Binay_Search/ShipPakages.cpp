#include<iostream>
using namespace std;
int main(){ //find the minimum weight to deliver all packages in required days
            //1 unit wall ---> 1 unit time
    int n, arr[50] , days ;
    cout<<"Enter number of packages: ";
    cin>>n;
    cout<<"Enter number of days: ";
    cin>>days;
    cout<<"Enter the weight of each package: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int start = 0 , end = 0 , mid , ans;
    for(int i=0 ; i<n ; i++){
        //start= max weight between all packages
        start = max(start,arr[i]); 
        //end = total weight of all packages
        end+=arr[i]; 
    }
    
    while(start<=end){
        mid= start + (end-start)/2;
        int count = 1 , weight = 0; //count=1 ---> 1st packages
        // package allocate to each day
        for(int i=0; i<n; i++){
            weight+=arr[i];
            
            if(weight>mid){ 
                //count=2 ---> 2nd painter paints the next wall
                count++;
                weight = arr[i];
            }
        }
        if(count<=days){ 
            ans=mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    cout<<"Minimum weight to deliver all packages in  "<<days<<" days :"<<ans<<" kg ";
}