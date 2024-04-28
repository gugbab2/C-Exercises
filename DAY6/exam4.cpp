#include <string>
#include <vector>

using namespace std;

// 입력 : 정수 리스트 num_list 
// 조건#1 : 마지막 원소가 그 이전 원소보다 크면, 마지막 원소에서 그전 원소를 뺀다
// 조건#2 : 마지막 원소가 그 이전 원소보다 크지 않다면, 마지막 원소를 두 배한 값을 추가한다 
// 리턴 : num_list 에서 조건 값을 마지막 원소로 추가해서 리턴한다. 
vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int lastInt = 0;
    
    if(num_list[num_list.size()-1] > num_list[num_list.size()-2])
        lastInt = num_list[num_list.size()-1] - num_list[num_list.size()-2];
    else 
        lastInt = num_list[num_list.size()-1] * 2;
    
    answer.swap(num_list);
    answer.push_back(lastInt);
    
    return answer;
}