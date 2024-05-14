#include <string>
#include <vector>

using namespace std;

// 문제설명 : 두 정수 배열 arr1과 arr2가 주어질 때, 위에서 정의한 배열의 대소관계에 대하여 arr2가 크다면 -1, arr1이 크다면 1, 두 배열이 같다면 0을 return 하는 solution 함수를 작성해 주세요.
// 조건1 : 두 배열의 길이가 다르다면, 배열의 길이가 긴 쪽이 더 큽니다. 
// 조건2 : 배열의 길이가 같다면 각 배열에 있는 모든 원소의 합을 비교하여 다르다면 더 큰 쪽이 크고, 같다면 같습니다.

// 입력 : 정수vector arr1, 정수vector arr2
// 처리1 : 두 배열의 길이가 같지 않다면, 사이즈를 비교 후 리턴
// 처리2 : 두 배열이 길이가 같다면, 각 배열의 있는 모든 원소를 합하여 비교
// 리턴 : 처리된 결과를 바탕으로 1,0,-1 중 하나의 값 리턴
int solution(vector<int> arr1, vector<int> arr2) {
    
    // 두 배열의 길이가 같지 않은 경우 
    if(arr1.size() != arr2.size()) 
    {
        if(arr1.size() > arr2.size())
            return 1;
        else 
            return -1;
    }
    
    // 두 배열의 길이가 같은 경우
    int sum1 = 0;
    int sum2 = 0;
    for (int i=0; i<arr1.size(); i++)
    {
        sum1 += arr1[i];
        sum2 += arr2[i];
    }
    
    if(sum1 > sum2)
        return 1;
    else if(sum1 < sum2)
        return -1;
    else 
        return 0;
}