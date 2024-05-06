#include <string>
#include <vector>

// 조건#1 : slicer 에 담긴 정수를 차례대로 a,b,c 라고 할 때, 
// 조건#2 : n 에 따라 다음과 같이 num_list 를 슬라이싱 
// 조건#2-1 : n = 1 : num_list의 0번 인덱스부터 b번 인덱스까지
// 조건#2-2 : n = 2 : num_list의 a번 인덱스부터 마지막 인덱스까지
// 조건#2-3 : n = 3 : num_list의 a번 인덱스부터 b번 인덱스까지
// 조건#2-4 : n = 4 : num_list의 a번 인덱스부터 b번 인덱스까지 c 간격으로 올바르게 슬라이싱
using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    if(n == 1)
    {
        for(int i=0; i<=b; i++)
        {
            answer.push_back(num_list[i]);
        }
    }
    else if (n == 2)
    {
        for(int i=a; i<num_list.size(); i++)
        {
            answer.push_back(num_list[i]);
        }
    }
    else if (n == 3)
    {
        for(int i=a; i<=b; i++)
        {
            answer.push_back(num_list[i]);
        }
    }
    else if (n == 4)
    {  
        for(int i=a; i<=b; i+=c)
        {
            answer.push_back(num_list[i]);
            // if(num_list[i] % c == 0)
                
        }
    }
    return answer;
}