//URL : https://school.programmers.co.kr/learn/courses/30/lessons/12982

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int solution(vector<int> d, int budget) {
   
    sort(d.begin(), d.end());

    int count = 0; 

   
    for (int i = 0; i < d.size(); i++) {
        if (budget >= d[i]) {
            budget -= d[i];
            count++;
        } else {
            break; 
        }
    }

    return count;
}