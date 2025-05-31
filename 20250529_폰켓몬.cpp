//URL : https://school.programmers.co.kr/learn/courses/30/lessons/1845

#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
 
    unordered_set<int> kinds(nums.begin(), nums.end());

 
    int maxPick = nums.size() / 2;

   
    return min((int)kinds.size(), maxPick);
}