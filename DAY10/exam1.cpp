#include <string>
#include <vector>
#include <iostream>

// 조건#1 : arr 의 원소는 0,1 로 이루어짐 
// 조건#2 : arr 의 인덱스가 idx 보다 크면서 배열의 값이 1인 가장 작은 인덱스를 찾아 반환 
// 조건#3 : 만약 그러한 인덱스가 없다면 -1 을 반환한다. 
using namespace std;

int solution(vector<int> arr, int idx) {
    for(int i = idx; i < arr.size(); ++i) {
        if(arr[i] == 1) return i;
    }
    return -1;
}
 