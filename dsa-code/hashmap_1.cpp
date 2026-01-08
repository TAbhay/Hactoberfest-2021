#include<bits/stdc++.h> //contains all the header files
/*
#include <iostream>
#include <unordered_map>
#include <string>
*/
using namespace std;



int main()
{
    cout<<"-------------Program started-------------"<<endl;
    //inbuilt unordered map ka use kr rhe hain so include kr liye hain

    //ek unordered map ka object bana liye, key value pair me ek value string
    //and ek value int
    unordered_map<string,int> ourmap;
    //now iske andr pair insert krne ke liye ek pair bana lenge
    pair<string,int> p("abc",1);
    //now ise insert kr lenge
    ourmap.insert(p);

    //second method of inserting
    ourmap["def"]=2;
    //means def key ke value me 2 daal diye


    //find or access
    cout<<ourmap["abc"]<<endl;
    cout<<ourmap["def"]<<endl;

    cout<<ourmap["ghi"]<<endl; //ghi koi key nhi hai phir bhi value 0 dikha rha hai
    //so .at() function is safer to use

    cout<<ourmap.at("ghi")<<endl;
    //this is safe method kuki agar out of range access krenge to isme error show ho
    //jayega bt upar wale me nhi show hoga jisse runtime pr garbage value milegi
    //as because hm pehle hi ourmap["ghi"] run kr chuke so .at() method me bhi 0 show
    //ho rha hai

    //size
    cout<<"size: "<<ourmap.size()<<endl;

    //checking presence
    //this fucntion tells whether somethings count 0 times or 1 times
    //map me koi element ya to 0 baar ya 1 baar hi aa skti hai
    if(ourmap.count("abc")>0){
        cout<<"key :abc is present"<<endl;
    }


    //erase
    ourmap.erase("ghi");
    cout<<"size: "<<ourmap.size()<<endl;

    return 0;
}

