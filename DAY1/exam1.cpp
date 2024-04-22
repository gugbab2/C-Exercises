#include <iostream>
#include <string>

using namespace std;
 
// input : 문자열  
// output : 소문자는 대문자로, 대문자는 소문자로
// 소문자 : if(문자 % 65 > 31) 문자 - 32 
// 대문자 : if(문자 % 65 < 31) 문자 + 32
int main(void) { 
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] % 65 > 31) {
            str[i] -= 32;
        }    
        else if(str[i] % 65 < 31) 
            str[i] += 32;
    }
    cout << str;
    return 0;
}