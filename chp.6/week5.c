#include <vector>
#include <string>

using namespace std;

vector<string> hcat(const vector<string>& left, const vector<string>& right)
{
    vector<string> ret;

    // 왼쪽 문자열 최대 길이 + 공백 1칸
    string::size_type width1 = 0;
    for (size_t i = 0; i < left.size(); i++)
    {
        if (left[i].size() > width1)
            width1 = left[i].size();
    }
    width1 += 1;

    vector<string>::size_type i = 0, j = 0;

    while (i != left.size() || j != right.size())
    {
        string s;

        // 왼쪽 문자열 추가
        if (i != left.size())
            s = left[i++];

        // 공백 채우기
        s += string(width1 - s.size(), ' ');

        // 오른쪽 문자열 추가
        if (j != right.size())
            s += right[j++];

        ret.push_back(s);
    }

    return 0;
}
