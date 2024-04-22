#include <string>
#include <iostream>
#include <vector>

using namespace std; 

// 입력 : 문자열 my_string, overwrite_string 정수 s
// 처리 : my_string 의 s 번째 인덱스부터 overwrite_string 으로 덮어쓰자
// 출력 : my_string 의 s 번째 인덱스부터 overwrite_string 으로 덮어쓴 값
string solution(string my_string, string overwrite_string, int s) {
    string answer = ""; 
    
    for(int i=0; i<overwrite_string.length(); i++)
    {
        my_string[s+i] = overwrite_string[i];
    }
    answer = my_string;
    
    return answer;
}