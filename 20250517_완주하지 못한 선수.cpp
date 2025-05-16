//URL : https://school.programmers.co.kr/learn/courses/30/lessons/42576

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> count_map;

  
    for (const string& name : participant) {
        count_map[name]++;
    }

  
    for (const string& name : completion) {
        count_map[name]--;
    }

   
    for (const auto& pair : count_map) {
        if (pair.second > 0) {
            return pair.first;
        }
    }

    return "";
}