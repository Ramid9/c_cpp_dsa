#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter Roman number: ";
    getline(cin,s);
    char roman[7]={'I','V','X','L','C','D','M'};
    int digit[7]={1,5,10,50,100,500,1000};
    int sum=0;
    // iterate through the roman number
    for(int i=0 ; i<=s.size()-1 ; i++){
        //check roman digit
        for(int j=0 ; j<7 ; j++){
            if(s[i]==roman[j]){
                bool flag=0;
                int k;
                // check if next digit is greater
                for( k=j+1 ; k<7 ; k++){
                    if(s[i+1]==roman[k]){
                    flag=1;
                    break;
                    }
                }
                //if greater then substract digit with from next digit
                if(flag==1){
                sum += digit[k]-digit[j];//and add to sum
                i++; //s[i] and s[i+1] both are completed 
                }
                else
                sum += digit[j];
                break;
            }
        
        }
    }
    
    cout<<"Integer equivalent: "<<sum;
}