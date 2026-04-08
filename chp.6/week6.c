#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// 공백이면 true
bool space(char c)
{
    return isspace(c);
}

// 공백이 아니면 true
bool not_space(char c)
{
    return !isspace(c);
}

vector<string> split(const string& str)
{
    typedef string::const_iterator iter;
    vector<string> ret;

    iter i = str.begin();

    while (i != str.end())
    {
        // 앞쪽 공백 제거
        i = find_if(i, str.end(), not_space);

        // 단어 끝 찾기
        iter j = find_if(i, str.end(), space);

        // 범위 내 문자열 저장
        if (i != str.end())
            ret.push_back(string(i, j));

        i = j;
    }

    return 0;
}
