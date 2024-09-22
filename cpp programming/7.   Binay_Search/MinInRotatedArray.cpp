 #include<iostream>
using namespace std;
int main(){
 int arr[50] , n;
    cout<<"\n\nEnter the size of the array: ";
    cin>>n;
    cout<<"\n\nEnter the elements: ";

    //take the array elements 
    for(int i= 0 ; i<n ; i++)
        cin>>arr[i];

    //binary search
    int start=0 , end=n-1 , mid , ans = arr[0];
    while(start<=end){
        mid = start + (end-start)/2;
        //left side sorted array
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        //right side sorted array
        else{
            ans = arr[mid]; // ans stores the minimun element
            end = mid-1;
        }

    }
    cout<<"Minimum element of rotated array: "<<ans;

}