#include <string>
#include <vector>

// 입력 : 문자열 myString, pat
// 조건#1 : myString 의 길이는 pat 의 길이와 같거나 크다. 
// 조건#2 : 알파벳 대문자와 소문자를 구분하지 않는다. 
// 조건#3 : myString의 연속된 부분 문자열 중 pat이 존재하면 1을 그렇지 않으면 0을 return
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string firstString = myString;
    string secondString = pat;
    
    // 모두 대분자로 변경
    for(char& c : firstString)
    {
        c = toupper(c);
    }
    
    for(char& c : secondString)
    {
        c = toupper(c);
    }
    
    if(firstString.size() >= secondString.size())
    {
        if(firstString.find(secondString) != string::npos) 
        answer = 1;
    }
    
    
    return answer;
}