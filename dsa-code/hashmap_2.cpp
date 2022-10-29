#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

//remove duplicates program
vector<int> removeDuplicates(int *a, int size){
    /*ek vector  bna lenge output numbers ko store krne ke liye
    ek unordered map bala lenge jo int and bool ko as a key value
    pair rakhega isme jo bhi elements aayega usko as a key manke
    uske value me true rakh denge and us element ko output vector me push back ke denge
    */
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0; i<size;i++){
        if(seen.count(a[i])>0){
            continue;
        }
        seen[a[i]]=true; //if a[i]=4 then seen[4] as a key and value me true daal diye
        output.push_back(a[i]); //output vector me push back kr diye element ko
    }
    return output;
}

int main()
{
    int a[]={1,2,3,3,2,1,4,3,6,5,5};
    vector<int> output = removeDuplicates(a,11);
    for(int i=0; i<output.size();i++){
        cout<<output[i]<<" ";
    }

    return 0;
}
