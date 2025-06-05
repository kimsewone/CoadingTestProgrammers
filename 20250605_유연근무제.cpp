//URL : https://school.programmers.co.kr/learn/courses/30/lessons/1845

#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    // 1️⃣ 폰켓몬 종류 개수 세기 (중복 제거)
    unordered_set<int> kinds(nums.begin(), nums.end());

    // 2️⃣ 고를 수 있는 최대 개수 (N/2)
    int maxPick = nums.size() / 2;

    // 3️⃣ 최대한 다양한 종류를 고르려면, 종류 개수와 maxPick 중 작은 값
    return min((int)kinds.size(), maxPick);
}