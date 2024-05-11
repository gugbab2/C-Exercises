#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
    // 문제(날짜 비교하기)
    정수 배열 date1과 date2가 주어집니다. 두 배열은 각각 날짜를 나타내며 [year, month, day] 꼴로 주어집니다. 각 배열에서 year는 연도를, month는 월을, day는 날짜를 나타냅니다.
    만약 date1이 date2보다 앞서는 날짜라면 1을, 아니면 0을 return 하는 solution 함수를 완성해 주세요.
    
    // 입출력
    [2021, 12, 28]	[2021, 12, 29]	1
    [1024, 10, 24]	[1024, 10, 24]	0
    
    // 변수 
    int firstYear = date1[0];
    int firstMonth = date2[0];
    int firstDay = date1[1];
    int secondYear = date2[1];
    int secondMonth = date1[2];
    int secondDay = date2[2];
    
    // 풀이 
    firstYear < secondYear     // true
    answer = 1
    
    firstYear == secondYear    // true
    firstMonth < secondMonth   // true
    answer = 1 
    
    firstYear == secondYear     // true
    firstMonth == secondMonth   // true
    firstDay < secondDay       // true
    answer = 1
    
    그 외 경우에는 answer = 0
*/

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    
    int firstYear = date1[0];
    int firstMonth = date1[1];
    int firstDay = date1[2];
    int secondYear = date2[0];
    int secondMonth = date2[1];
    int secondDay = date2[2];
    
    answer = 0;
    
    if(firstYear < secondYear)
        answer = 1;
    
    if(firstYear == secondYear)
        if(firstMonth < secondMonth)
            answer = 1;
    
    if(firstYear == secondYear)
        if(firstMonth == secondMonth)
            if(firstDay < secondDay)
                answer = 1;
    
    return answer;
}

 