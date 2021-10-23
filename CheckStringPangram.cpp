#include <iostream>
#include <string.h>
using namespace std;
bool isPangram(char *str)
{
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
            count[str[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char str[100] = "the quick brown fox jumps over the lazy dog";
    
    if(isPangram(str)){
      cout<<"Yes";
    }else{
      cout<<"No";
    }

    return 0;
}
