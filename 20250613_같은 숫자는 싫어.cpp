//URL :https://school.programmers.co.kr/learn/courses/30/lessons/12906

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    if (arr.empty()) return answer; 

    answer.push_back(arr[0]); 

    for (size_t i = 1; i < arr.size(); ++i)
    {
        if (arr[i] != arr[i - 1])
        {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}


int main() {
    vector<int> test1 = {1, 1, 3, 3, 0, 1, 1};
    vector<int> test2 = {4, 4, 4, 3, 3};

    vector<int> result1 = solution(test1);
    vector<int> result2 = solution(test2);

    for (int n : result1) cout << n << " ";
    cout << endl;

    for (int n : result2) cout << n << " ";
    cout << endl;

    return 0;
}