#include <string>
#include <iostream>
#include <vector>

using namespace std;

// 문제설명 : 한 자리 정수로 이루어진 문자열 num_str이 주어질 때, 각 자리수의 합을 return하도록 solution 함수를 완성해주세요.
// 입출력예#1 : 문자열 안의 모든 숫자를 더하면 45가 됩니다.("123456789")

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