#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

// 입력 : 정수배열arr
// 조건#1 : 배열 안의 2가 모두 포함된 가장 작은 연속된 부분을 리턴 
// 조건#2 : 배열 안의 2가 없는 경우 -1 을 리턴 
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
  
    // auto 타입으로 사용 가능
    vector<int>::iterator start = find(arr.begin(), arr.end(), 2);
    vector<int>::reverse_iterator end = find(arr.rbegin(), arr.rend(), 2);
    
    if(start == arr.end() || end == arr.rend()) {
        answer.push_back(-1);
    } else if(start == end.base()) { // start와 end가 같은 경우
        answer.push_back(*start);
    } else {
        for(auto it = start; it != end.base(); ++it) {
            answer.push_back(*it);
        }
    }
    return answer;
}