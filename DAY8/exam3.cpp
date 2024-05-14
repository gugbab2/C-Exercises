#include <string>
#include <vector>
#include <iostream>

// 입력 : 문자열number
// 조건1 : 음이 아닌 정수를 9로 나눈 나머지는 그 정수의 각자리 숫자의 합을 9로 나눈 나머지와 같다. 
// 출력 : 이 정수를 9로 나눈 나머지를 return
using namespace std;

int solution(string number) {
    int answer = 0; 
    int eachNumberSum = 0;
    
    for(int i=0; i<number.size(); i++)
    {
        int temp = number[i] - '0';
        eachNumberSum += temp;
    }
    
    answer = eachNumberSum % 9;
    
    return answer;
}