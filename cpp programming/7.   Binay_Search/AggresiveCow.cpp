#include <iostream>
using namespace std;
int main(){// find the maximum minimum distance between cows
     
        int n, arr[50], cows;
        cout << "Enter number of stalls: ";
        cin >> n;
        cout << "Enter number of cows: ";
        cin >> cows;
        cout << "Enter the distance of each stall: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //selection sort of array
        for(int i=0 ; i<=n-2 ; i++){
            for(int j=i+1 ; j<=n-1 ; j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }
        //minimum distance between two cows is maximum when one is at first and another at last
        //maximun minimum distance = arr[n-1]-arr[0]
        int start = arr[0], end = arr[n-1]-arr[0], mid, ans;
        
        //binary search between 1 to last distance
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            int count = 1 , prev=arr[0]; // count=1 ---> 1st cow
            // 
            for (int i = 1; i < n; i++)
            {   //if all cows can fit in the distance
                if(arr[i]-prev>=mid){
                    
                    count++;
                    prev = arr[i];
                }
                   
            }
            if (count >= cows)
            {   ans = mid;
                start = mid + 1;
            }
            else{
                end = mid-1;
            }
           
        }
        cout << "Maximun minimum distance between " <<cows<< " cows: " <<ans<< " unit ";
    }
