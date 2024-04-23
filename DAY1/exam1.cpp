#include <iostream>
#include <string>

using namespace std;

// 문제설명 : 영어 알파벳으로 이루어진 문자열 str이 주어집니다. 각 알파벳을 대문자는 소문자로 소문자는 대문자로 변환해서 출력하는 코드를 작성해 보세요.
 
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