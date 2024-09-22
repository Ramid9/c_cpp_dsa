#include<iostream> // in all prefixes number of 1s is greater than or uqual to number of 0s
#include<vector>
#include<string>
using namespace std;
void  find_numbers(vector<string>&ans,string &temp,int zero,int one, int n){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
         
        temp.push_back('1');
        find_numbers(ans,temp,zero,one+1,n);
        temp.pop_back();
        
        if(zero<one){
            temp.push_back('0');
            find_numbers(ans,temp,zero+1,one,n);
            temp.pop_back();
        }
       
	    
    }
int main(){
    int N;
    cout<<"Enter number of bits: ";
    cin>>N;

    vector<string>ans;
    string temp;
    find_numbers(ans,temp,0,0,N);
    cout<<"All "<<N<<" digit numbers (in prefixes 1s >= 0s)\n";
    for(int i=0 ; i<N ; i++){
        cout<<ans[i]<<endl;
    }

    
}