#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
    // 문제 (문자열 묶기)
    문자열 배열 strArr이 주어집니다. strArr의 원소들을 길이가 같은 문자열들끼리 그룹으로 묶었을 때 가장 개수가 많은 그룹의 크기를 return 하는 solution 함수를 완성해 주세요.
    
    // 제한사항 
    1 ≤ strArr의 길이 ≤ 100,000
    1 ≤ strArr의 원소의 길이 ≤ 30
    strArr의 원소들은 알파벳 소문자로 이루어진 문자열입니다.
    
    // 입출력 
    ["a","bc","d","efg","hi"]	2
    
    // 변수
    size_t start = 0;
    int countMax = 0; 
    int constArr[30];
    
    // 문제풀이
    constArr[strArr[start].size()] += 1;   
    start++;                                // 1
    
    constArr[strArr[start].size()] += 1;        
    start++;                                // 2
    
    ...
    
    countMax = constArr[0]                  // 2
*/
int solution(vector<string> strArr) {
    int maxValue = 0; 
    constexpr int arrSize = 31;
    int constArr[arrSize] = {};
    
    for(size_t start=0; start<strArr.size(); ++start)
    {
        constArr[strArr[start].size()] += 1;
    }
    
    for(size_t start=0; start<arrSize; ++start)
    {
        cout << constArr[start] << endl; 
        if(constArr[start] > maxValue)
            maxValue = constArr[start];
    }
    cout << endl; 
    
    return maxValue; 
}