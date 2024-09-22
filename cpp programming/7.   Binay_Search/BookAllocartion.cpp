#include<iostream>
using namespace std;
int main(){
    int n, arr[50] , stu ;
    cout<<"Enter number of books: ";
    cin>>n;
    cout<<"Enter number of students: ";
    cin>>stu;
    cout<<"Enter the pages of each book: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int start = 0 , end = 0 , mid , ans;
    for(int i=0 ; i<n ; i++){
        start = max(start,arr[i]); //start= book with maximum page
        end+=arr[i]; //end = sum of all pages
    }
    //binary search between (maximum pages) to (sum of all pages of all the books)
    while(start<=end){
        mid= start + (end-start)/2;
        int count = 1 , pages = 0; //count=1 ---> 1st student
        for(int i=0; i<n; i++){
            pages+=arr[i];
            if(pages>mid){ //no of pages for one student =< mid
                count++;  //count=2 ---> 2nd student and so on
                pages = arr[i];
            }
        }
        if(count<=stu){ //count = stu ---> each student got atleast one book
            ans=mid;
            end = mid-1; //when end< start we got the answar
        }
        else{
            start = mid+1;
        }
    }
    cout<<"Maximum number of pages after distributing "<<stu<<" students: "<<ans;
}