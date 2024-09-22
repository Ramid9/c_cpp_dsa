#include <iostream>
using namespace std;
int main(){//minimum speed to eat bananas of all trees
 
        int n, arr[50], time;
        cout << "Enter number of banana tree: ";
        cin >> n;
        cout << "Enter total time to eat in hour: ";
        cin >> time;
        cout << "Enter number of bananas of each tree: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //minimum speed of koko eating banana = total banana/total time 
        //max speed = number of banana in largest tree 
        int start = 0, end =0, mid, ans;
        long long sum=0;
        for(int i=0 ; i<n ; i++){
            sum += arr[i]; // total banana
            end = max(end,arr[i]);
        }
        start =sum/time;
        if(start==0) //if sum < time
            start = 1;
        
        //binary search to find the minimum speed(banana/hour)
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            int count = 1 , hour=0 ; // count=1 ---> 1st cow
            // 
            for (int i = 0; i < n; i++)
            {   
                if(arr[i]%mid==0){
                    hour = hour + arr[i]/mid ;
                }
                //though the speed is > 1 banana/hour in some cases
                //koko eats remaining bananan in next 1 hour for same tree
                else{
                    hour = hour + arr[i]/mid + 1;
                }       
            }
            //hour < total time means speed is high
            if (hour <= time)
            {   //current minimum speed = mid
                ans = mid;
                //to decrease the speed if possible
                end = mid-1;
            }
            //hour> total time means speed is low
            else{
                //to increase the speed
                start = mid+1;
            }
           
        }
        cout << "\n\n minimum speed: " <<ans<<"banana/hour\n\nTotal time: " <<time<< " hour\n\n";
    }
