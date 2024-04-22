#include <string>
#include <iostream>
#include <vector>

using namespace std;

// 입력 : 정수로 된 문자열
// 처리 : 각 문자를 정수로 변환하여 덧셈, 아스키코드 '0' 을 빼서 연산  
// 출력 : 정수로 변환 된 각 문자를 더하여 출력
int solution(string num_str) {
    int answer = 0;
    for(auto c : num_str)
    {
        answer += c-'0';
    }
    cout << answer;
    return answer;
}