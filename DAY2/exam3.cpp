#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 문제설명 : 정수 배열 arr과 정수 n이 매개변수로 주어집니다. arr의 길이가 홀수라면 arr의 모든 짝수 인덱스 위치에 n을 더한 배열을, arr의 길이가 짝수라면 arr의 모든 홀수 인덱스 위치에 n을 더한 배열을 return 하는 solution 함수를 작성해 주세요.
// 입출력예#1 : arr = [49, 12, 100, 276, 33], n = 27, result = [76, 12, 127, 276, 60]
// 입출력예#2 : arr = [444, 555, 666, 777], n = 100, result = [444, 655, 666, 877]

// 입력 : 정수vector arr, 더하는 값 n
// 처리1 : arr 의 사이즈가 홀수인지 짝수인지 확인 
// 처리2 : 사이즈가 홀수라면 반복문을 돌면서 짝수 인덱스에 n을 더해준다.  
// 처리3 : 사이즈가 짝수라면 반복문을 돌면서 홀수 인덱스에 n을 더해준다. 
// 리턴 : 처리가 완료된 answer 리턴

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    bool isOdd = false;
    
    if(arr.size()%2 == 1)
        isOdd = true;
    
    for(int i=0; i<arr.size(); i++)
    {
        
        if(isOdd && i%2 == 0)
        {
            arr[i] += n;
        }
        
        if(!isOdd && i%2 != 0)
        {
            arr[i] += n;
        }
           
        // 디버깅을 위한 출력
        cout << arr[i] << ", ";
        
        answer.push_back(arr[i]);
    }
    
    return answer;
}