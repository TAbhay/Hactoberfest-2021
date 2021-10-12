#include <iostream>
using namespace std;

class bankdeposit{
    int principal;
    int years;
    
    float interestrate;
    float returnvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p , int y, float r);
    bankdeposit(int p , int y, int r);
    void show();
};
bankdeposit:: bankdeposit(int p , int y ,float r){
   principal = p;
   years = y;
   interestrate = r;
   returnvalue = principal;
   for (int i = 0; i < y; i++)
   {
    returnvalue = returnvalue * (1 + interestrate);
   }
   
}
bankdeposit:: bankdeposit(int p , int y ,int r){
   principal = p;
   years = y;
   interestrate = float(r)/100;
   returnvalue = principal;
   for (int i = 0; i < y; i++)
   {
    returnvalue = returnvalue * (1 + interestrate);
   }
   
}
 void bankdeposit  :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnvalue<<endl;
}
int main(){
    bankdeposit b;
    int p , y;
    float r;
    int R;
   
    cout<< " enter req conditions"<< endl;
    cin>> p>>y>>r;
     b = bankdeposit(p , y , r);
    b.show();
    return 0;
}