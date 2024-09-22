#include<iostream>
using namespace std;
#include<vector>

int main(){
    int num ;
    cout<<"Enter Integer number: ";
    cin>>num;
    vector<int>ans(1,1);
    for(int i=num ; i>1 ; i--){

        int carry=0 ,res, size = ans.size();

        for(int j=0 ; j<size ; j++){

            res = ans[i]*num + carry;
            carry = res/ 10;
            ans[i] = res% 10;
        }

        while(carry){
            ans.push_back(carry%10);
            carry /= 10;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<"\nFatorial: "<<ans;
    return 0;
}