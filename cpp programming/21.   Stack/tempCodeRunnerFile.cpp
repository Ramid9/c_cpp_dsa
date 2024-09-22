stack<char>stk;
    int count = 0;
   for(int i=0 ; i<paren.length() ; i++){
        
        if(paren[i]=='(')
            stk.push(paren[i]);
        else{
            if(stk.empty())
                count++;
            else
                stk.pop();
            
        }
   }