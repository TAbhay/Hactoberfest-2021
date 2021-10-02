#include<bits\stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int max_pass = 0;
    int curr_pass = 0;
    while(n--){
        int exit, enter;
        cin>>exit>>enter;
        curr_pass = curr_pass - exit + enter;
        max_pass = (curr_pass>max_pass)?curr_pass:max_pass;
    }

    cout<<max_pass;
}
