#include <string>
#include <vector>

// 조건#1 : slicer 에 담긴 정수를 차례대로 a,b,c 라고 할 때, 
// 조건#2 : n 에 따라 다음과 같이 num_list 를 슬라이싱 
// 조건#2-1 : n = 1 : num_list의 0번 인덱스부터 b번 인덱스까지
// 조건#2-2 : n = 2 : num_list의 a번 인덱스부터 마지막 인덱스까지
// 조건#2-3 : n = 3 : num_list의 a번 인덱스부터 b번 인덱스까지
// 조건#2-4 : n = 4 : num_list의 a번 인덱스부터 b번 인덱스까지 c 간격으로 올바르게 슬라이싱

/*
* switch 문의 장점
* 1. 가독성이 높다. 
* 2. 컴파일러가 상수 조건에 해당하는 코드블럭으로 Jump 해 불필요한 영역을 컴파일 하지 않는다.(컴파일 시간이 줄어든다) 
*
* switch 문의 단점 
* 1. 복잡한 조건을 사용하지 못한다.(상수만 사용 가능하다.)
* -> C++11 이후부터는 문자, 열거형
* -> C++17 이후부터는 문자열까지 사용 가능하다.
*/
using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    switch(n)
    {
        case 1 : 
            for(int i=0; i<=b; i++)
            {
                answer.push_back(num_list[i]);
            }
            break;
        case 2 : 
            for(int i=a; i<num_list.size(); i++)
            {
                answer.push_back(num_list[i]);
            }
            break;
        case 3 : 
            for(int i=a; i<=b; i++)
            {
                answer.push_back(num_list[i]);
            }
            break;
        case 4 : 
            for(int i=a; i<=b; i+=c)
            {
                answer.push_back(num_list[i]);
            }
            break;
    }
    
    return answer;
}