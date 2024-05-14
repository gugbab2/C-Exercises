#include <string>
#include <vector>

// 입력 : 정수배열arr, query
// 조건#1 : query 를 순회하면서, 짝수 인덱스에서는 arr 에서 query[i] 번 인덱스를 제외하고 query[i] 번 인덱스 뒷부분을 잘라서 버린다. 
// 조건#2 : query 를 순회하면서, 홀수 인덱스에서는 arr 에서 query[i] 번 인덱스를 제외하고 query[i] 번 인덱스 앞부분을 잘라서 버린다. 
using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer = arr;
    for (int idx = 0; idx < query.size(); idx++)
    {
        if (idx % 2 == 0)
        {
            answer.assign(answer.begin(), answer.begin() + query[idx]+1);
        }
        else 
        {
            answer.assign(answer.begin() + query[idx], answer.end());
        }
    }
    return answer;
}
