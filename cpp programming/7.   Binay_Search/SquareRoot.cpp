#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int start = 0 , end = x , mid , ans;
    if(x<2){
        cout<<"Square root of "<<x<<" is "<<x;
        return 0;
    }

    //Binary search
    while(start<=end){

        mid = start + (end - start)/2;
        if(mid*mid==x){ // mid == x/mid,,,for integer overflow problem.

            cout<<"Square root of "<<x<<" is "<<mid;
            return 0;
            
        }
        else if(mid*mid>x){ // mid == x/mid

            end = mid-1;
        }
        else{    //mid*mid < x
            start = mid+1;  
            ans = mid;
        }    
    }
    cout<<"Square root of "<<x<<" is "<<ans;
    return 0;
}