#include <string>
#include <vector>

using namespace std;

/*
    // 문제 (1로 만들기)
    정수가 있을 때, 짝수라면 반으로 나누고, 홀수라면 1을 뺀 뒤 반으로 나누면, 마지막엔 1이 됩니다. 예를 들어 10이 있다면 다음과 같은 과정으로 1이 됩니다.

    10 / 2 = 5
    (5 - 1) / 2 = 2
    2 / 2 = 1
    위와 같이 3번의 나누기 연산으로 1이 되었습니다.

    정수들이 담긴 리스트 num_list가 주어질 때, num_list의 모든 원소를 1로 만들기 위해서 필요한 나누기 연산의 횟수를 return하도록 solution 함수를 완성해주세요.
    
    // 입출력 
    [12, 4, 15, 1, 14]	11
    
    // 변수 
    size_t i = 0;
    int temp = 0;
    
    // 문제풀이 
    temp = num_list[i]; // 12
    temp = temp / 2;    // 6 
    answer++;           // 1
    temp = temp / 2;    // 3
    answer++;           // 2
    temp = (temp-1) / 2; // 1
    answer++;           // 3
    
    num_list 의 원소마다 위 연산 반복
    
*/

int solution(vector<int> num_list) {
    int answer = 0;
    int temp = 0;
    
    for(size_t i = 0; i<num_list.size(); ++i)
    {
        temp = num_list[i];
        while(temp != 1)
        {
            if(temp % 2 == 0)
                temp /= 2; 
            else 
                temp = (temp-1) / 2;
            answer++;
        }
    }
    return answer;
}