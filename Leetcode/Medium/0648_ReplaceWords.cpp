#include <bits/stdc++.h>
using namespace std;

string replaceWords(vector<string> &dictionary, string sentence)
{

    sort(dictionary.begin(), dictionary.end());

    string result;
    string word;
    int n = sentence.size();

    for (int i = 0; i <= n; i++)
    {
        if (i == n || sentence[i] == ' ')
        {
            for (int j = 0; j < dictionary.size(); j++)
            {
                if (word.substr(0, dictionary[j].size()) == dictionary[j])
                {
                    word = dictionary[j];
                    break;
                }
            }

            if (result.size() != 0)
            {
                result += " ";
            }
            result += word;
            word = "";
        }
        else
        {
            word += sentence[i];
        }
    }

    return result;
}

int main()
{
    vector<string> dictionary = {"catt", "cat", "bat", "rat"};
    string sentence = "the cattle was rattled by the battery";
    string replaced = replaceWords(dictionary, sentence);
    cout << replaced << endl;

    return 0;
}
