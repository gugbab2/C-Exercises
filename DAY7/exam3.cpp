#include <string>
#include <vector>
#include <cassert>
#include <iostream>

// 입력 : 정수배열arr, 2차원 정수배열queries(queries의 원소는 각각 하나의 query를 나타내며, [s, e, k] 꼴입니다.)
// 조건#1 : 각 query마다 순서대로 s ≤ i ≤ e인 모든 i에 대해 k보다 크면서 가장 작은 arr[i]를 찾습니다.
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i=0; i<queries.size(); i++)
    {
        // query 의 각 값을 변수 선언
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        int temp = 1000001;
        
        // 범위에 맞추어 반복
        for(int j=s; j<e+1; j++)
        {
            // k 보다 큰 경우
            if(arr[j] > k)
                // 임시 값보다 작은 경우 temp 값으로 지정
               if(arr[j] < temp)
                   temp = arr[j];
        }

        // temp 값이 바뀐적이 없다는 것은 조건에 맞는 답이 없다는 것을 의미 -1 을 넣어준다. 
        if(temp == 1000001)
            temp = -1;

        // temp 값을 넣어준다. 
        answer.push_back(temp);
        
    }
    return answer;
}