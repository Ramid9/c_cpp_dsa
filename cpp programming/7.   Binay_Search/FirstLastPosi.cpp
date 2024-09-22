#include<iostream>
using namespace std;
int main(){
    int arr[50] , n;
    cout<<"\n\nEnter the size of the array: ";
    cin>>n;
    cout<<"\n\nEnter the elements: ";
    //sorting
    for(int i= 0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=1 ; i<=n-1 ; i++){
        
        for(int j=i ; j>0 ; j--){

            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
                
            }
            else
                break;
        }    
    }
    //sorted array
    cout<<"\n\nSorted array is: ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"\n\nEnter the number: ";
    cin>>x;
    if(x > arr[0] || x < arr[n-1]){
        cout<<"\n\nNot present in the array.";
        return 0;
        }
    //Binary search
    int start = 0 , end = n-1 , mid ;
    int first  , last  ;
    bool isFirst = 1 , print = 0;
    while(start<=end){

        mid = start + (end-start)/2;
        

        if(arr[mid]==x){

            int realMid=mid;
            int count = 0;
            bool both = 0 , nothing = 1;
            if(arr[mid]==arr[mid+1]){
                both = 1;
                nothing = 0;
                first = mid;
                while(arr[mid]==arr[mid+1] && mid<n){
                    last = mid+1;
                    mid++;
                    count++;
                }
            }   
            mid = realMid;
            if(arr[mid]==arr[mid-1]){
                nothing = 0;
                last = mid;
                while(arr[mid]==arr[mid-1] && mid>0){
                    first = mid-1;
                    mid--;
                }
                if(both == 1){
                    last += count;
                }
            }  
            if(nothing == 1){
                cout<<"\n\n"<<"First position: "<<realMid<<" index.\n\nLast position: "<<realMid<<" index.\n\n";
            
            }
                
            else{
                cout<<"\n\n"<<"First position: "<<first<<" index.\n\nLast position: "<<last<<" index.\n\n";
            }
            
            return 0;

        }
        else if(arr[mid]<x){
            end = mid-1;
            
        }
        else{ 
            start = mid+1;
                             //arr[mid]>x
        }    
    }
    
    cout<<"\n\n"<<x<<" is not present in the array.\n\n";   

}