#include <string>
#include <vector>

using namespace std;

/*
    // 문제 (빈 배열에 추가, 삭제하기)
    아무 원소도 들어있지 않은 빈 배열 X가 있습니다. 길이가 같은 정수 배열 arr과 boolean 배열 flag가 매개변수로 주어질 때, flag를 차례대로 순회하며 flag[i]가 true라면 X의 뒤에 arr[i]를 arr[i] × 2 번 추가하고, flag[i]가 false라면 X에서 마지막 arr[i]개의 원소를 제거한 뒤 X를 return 하는 solution 함수를 작성해 주세요.

    // 입출력
    [3, 2, 4, 1, 3]	[true, false, true, false, false]	[3, 3, 3, 3, 4, 4, 4, 4]
    
    // 문제풀이 
    int i=0; 
    flag[i]     // true
    arr[i]      // 3
    answer      // 3,3,3,3,3,3
    
    int i=0; 
    flag[i]     // false
    arr[i]      // 2
    answer      // 3,3,3,3
    
    int i=0; 
    flag[i]     // true
    arr[i]      // 4
    answer      // 3,3,3,3,4,4,4,4,4,4,4,4
    
    ...
*/  


vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
     
    for(size_t i=0; i<arr.size(); ++i)
    {
        if(flag[i])
            for(size_t j=0; j<arr[i]*2; j++)
                answer.push_back(arr[i]);
        else
            for(size_t j=0; j<arr[i]; j++)
                answer.pop_back();
    }
    return answer;
}