#include <string>
#include <vector>

using namespace std;

/*
    // 문제 (특별한 이차원 배열 2)
    n × n 크기의 이차원 배열 arr이 매개변수로 주어질 때, arr이 다음을 만족하면 1을 아니라면 0을 return 하는 solution 함수를 작성해 주세요.
    0 ≤ i, j < n인 정수 i, j에 대하여 arr[i][j] = arr[j][i]
    
    // 입출력 예
    [[5, 192, 33], [192, 72, 95], [33, 95, 999]]	1
    [[19, 498, 258, 587], [63, 93, 7, 754], [258, 7, 1000, 723], [587, 754, 723, 81]] 0
    
    // 변수
    int i = 0;
    int j = 0;
    int answer = 0;
    
    // i=0, j=0
    arr[i][j] = 5
    arr[j][i] = 5
    answer = 1;
    
    // i=0, j=1
    arr[i][j] = 192
    arr[j][i] = 192
    answer = 1;
    
    // i=0, j=2
    arr[i][j] = 33 
    arr[j][i] = 33
    answer = 1;
    
    // i=1, j=0
    arr[i][j] = 192
    arr[j][i] = 192
    answer = 1;
    
    ...
    
*/

int solution(vector<vector<int>> arr) {
    int answer = 0;
    size_t i=0;
    size_t j=0;
    
    for(; i<arr.size(); ++i)
    {
        for(; j<arr[i].size(); ++j)
        {
            if(arr[i][j] == arr[j][i])
                answer = 1;
            else 
            {
                answer = 0;
                break;
            }
        }
        if(answer == 0)
            break;
    }
    return answer;
}