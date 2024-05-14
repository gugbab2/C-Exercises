#include <string>
#include <vector>
#include <iostream>

using namespace std;
/*
    // 문제 (문자열이 몇 번 등장하는지 세기)
    문자열 myString과 pat이 주어집니다. myString에서 pat이 등장하는 횟수를 return 하는 solution 함수를 완성해 주세요.
    
    // 입출력 
    "banana"	"ana"	2
    "aaaa"	"aa"	3
    
    // 변수 
    int start = 0;
    int patSize = pat.size();
    
    // 문제풀이
    myString.substr(start, patSize);    // ban
    start++;    // 1
    
    myString.substr(start, patSize);    // ana
    answer++;   // 1
    start++;    // 2
    
    myString.substr(start, patSize);    // nan
    start++;    // 3 
    
    myString.substr(start, patSize);    // ana
    answer++;   // 2
    start++;    // 3
    
*/

int solution(string myString, string pat) {
    int answer = 0;
    int patSize = pat.size();
    
    for(int start=0; start<myString.size()-pat.size()+1; ++start)
    {
        if(myString.substr(start, patSize) == pat)
            answer++; 
    }
    
    return answer;
}