#include <string>
#include <vector>

using namespace std;

/*
    // 문제 (배열의 길이를 2의 거듭제곱으로 만들기)
    정수 배열 arr이 매개변수로 주어집니다. arr의 길이가 2의 정수 거듭제곱이 되도록 arr 뒤에 정수 0을 추가하려고 합니다. arr에 최소한의 개수로 0을 추가한 배열을 return 하는 solution 함수를 작성해 주세요.
    
    // 입출력
    [1, 2, 3, 4, 5, 6]	[1, 2, 3, 4, 5, 6, 0, 0]
    [58, 172, 746, 89]	[58, 172, 746, 89]
    
    // 초기화 
    size_t new_length = 1;
    vector<int> answer = arr;
    
    new_length = new_length * 2; // 2
    new_length = new_length * 2; // 4
    new_length = new_length * 2; // 8
    
    answer.push_back(0);    // 1,2,3,4,5,6,0
    answer.push_back(0);    // 1,2,3,4,5,6,0,0 
    
*/
vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    size_t new_length = 1; 
    
    while(new_length < arr.size())
        new_length *= 2;
    
    while(answer.size() < new_length)
        answer.push_back(0);
    
    return answer;
}