#include <string>
#include <vector>
#include <iostream>

// 조건#1 : intervals 는 항상 [[a1, b1], [a2, b2]] 꼴로 주어진다. 
// 조건#2 : 각 구간은 닫힌 구간이다. 닫힌 구간은 양 끝값과 그 사이값을 모두 포함하는 구간을 의미한다. 
// 조건#3 : 첫번째 구간에 해당하는 배열과 두번째 구간에 해당하는 배열을 만들어 리턴
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    int start = 0;
    int end = 0;
    
    for(int i=0; i<intervals.size(); i++)
    {
        start = intervals[i][0];
        end = intervals[i][1];
        
        // cout << start << ", " << end << endl;
        
        for(int j=start; j<=end; j++)
        {
            // cout << arr[j] << ", "; 
            answer.push_back(arr[j]);
        }
        // cout << endl;
    }
    return answer;
}