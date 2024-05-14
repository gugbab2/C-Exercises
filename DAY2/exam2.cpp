#include <string>
#include <vector>

using namespace std;

// 문제설명 : 정수로 이루어진 리스트 num_list가 주어집니다. num_list에서 가장 작은 5개의 수를 오름차순으로 담은 리스트를 return하도록 solution 함수를 완성해주세요.
// 입출력예 : [12, 4, 15, 46, 38, 1, 14]를 정렬하면 [1, 4, 12, 14, 15, 38, 46]이 되고, 앞에서 부터 5개를 고르면 [1, 4, 12, 14, 15]가 됩니다.

// 매개변수 : 정수vector num_list
// 처리1 : 버블정렬 
// 처리2 : 가장 작은 수 5개 세팅 
// 리턴 : 가장 작은 수 5개를 세팅 후 리턴
vector<int> solution(vector<int> num_list) { 
    vector<int> answer;
    
    // 버블정렬
    for(int i=0; i<num_list.size()-1; i++)
    {
        for(int j=0; j<num_list.size()-i-1; j++)
        {
            if(num_list[j] > num_list[j+1])
                swap(num_list[j], num_list[j+1]);
        }
    }
            
    // 앞 5개를 제외하고 
    for(int i=0; i<5; i++)
    {
        answer.push_back(num_list[i]);
    }
    return answer;
}