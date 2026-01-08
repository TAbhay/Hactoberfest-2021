#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout<<"-------------Program started-------------"<<endl;
    unordered_map<string,int> ourmap;
    ourmap["abc"]=1;
    ourmap["def"]=2;
    ourmap["ghi"]=3;
    ourmap["jkl"]=4;
    ourmap["mno"]=5;
    ourmap["pqr"]=6;

    //iteration over unordered map
    unordered_map<string,int>::iterator it=ourmap.begin();
    while(it != ourmap.end()){
        cout<<"key: "<<it->first<<" value: "<<it->second<<endl;
        it++;
    }
    //yahan output koi sorted order me nhi aayega koi bhi pehle print ho jayega
    //bt if we have used normal map then sb sorted order me print hota

    //find function this will return iterator
    unordered_map<string,int>::iterator it1=ourmap.find("ghi");
    cout<<"value of "<<it1->first<<":"<<it1->second<<endl;

    //erasing from the unordered map
    //ourmap.erase(it2,it2+4);
    //it2 ke starting se it2+3 tk delete ho jayega

    //Iterators for vectors
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<int>::iterator it2 = v.begin();
    while(it2!=v.end()){
        //iterator ek pointer ki trah hai isiliye agar iske data ko print krna hai to
        //defrencing krna hota hai
        cout<<*it2<<endl;
        it2++;
    }

    return 0;
}

