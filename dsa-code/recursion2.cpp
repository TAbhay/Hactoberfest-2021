#include <bits/stdc++.h>
using namespace std;

int length(char s[]){
    if(s[0]=='\0'){
        return 0;
    }
    int smalloutput = length(s+1);
    return 1+smalloutput;
}

void removeX(char s[]){
    if(s[0]=='\0'){
        return;
    }

    if(s[0]!='x'){
        removeX(s+1);
    }
    else{
        int i=1;
        for(;s[i]=='\0';i++){
            s[i-1]=s[i];

        }
        s[i-1]=s[i];
        removeX(s);
    }
}

void removeDuplicates(char s[]){
    if(s[0]=='\0'){
        return;
    }

    if(s[0]==s[1]){
        int i = 0;
        while (s[i] != '\0') {
            s[i] = s[i + 1];
            i++;
        }
        removeDuplicates(s);
    }
    removeDuplicates(s+1);


}


int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    char str[100];
    cin>>str;

    int l =length(str);
    cout<<"length of string is: "<<l<<endl;

    removeX(str);
    cout<<str<<endl;

    removeDuplicates(str);
    cout<<str<<endl;

    return 0;
}

