#include <string>
#include <vector>
#include <iostream>

// 입력 : 정수배열arr
// 조건#1 : 배열 안의 2가 모두 포함된 가장 작은 연속된 부분을 리턴 
// 조건#2 : 배열 안의 2가 없는 경우 -1 을 리턴 
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int start = -1;
    int end = -1;
    
    for(size_t i=0; i<arr.size(); i++)
    {
        if(arr[i] == 2)
        {
            start = i;
            break;
        }
    }
    
    for(size_t i=arr.size(); i>=0; i--)
    {
        if(arr[i] == 2)
        {
            end = i;
            break;
        }
    }
    
    cout << start << ", " << end << endl;
    
    if(start == -1 || end == -1)
        answer.push_back(-1);
    else if( start == end )
        answer.push_back(arr[start]);
    else 
    {
        for(int i=start; i<=end; i++)
            answer.push_back(arr[i]);
    }
    return answer;
}