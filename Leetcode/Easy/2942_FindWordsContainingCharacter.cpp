#include <bits\stdc++.h>
using namespace std;

// void FindWord(string a[], char x, int l)
// {
//     int arr[2];
//     int n = 0;
//     for (int i = 0; i < l; i++)
//     {
//         for (int j = 0; j < a[j].length(); j++)
//         {
//             if (a[i][j] == x)
//             {
//                 arr[n] = i;
//                 n++;
//                 // cout << i << endl;
//                 break;
//             }
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }

vector<int> findWordsContaining(vector<string> &words, char x)
{
    vector<int> indices;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < words[i].length(); j++)
        {
            if (words[i][j] == x)
            {
                indices.push_back(i);
                break;
            }
        }
    }
    return indices;
}


int main()
{

    // string a[] = {"lttt", "code", "heell"};
    // char x = 'e';
    // int l = sizeof(a) / sizeof(a[0]);
    // FindWord(a, x, l);

    vector<string> words = {"lttt", "code", "heell"};
    char x = 'e';
    vector<int> result = findWordsContaining(words, x);

    for (int index : result)
    {
        cout << index << endl;
    }

    return 0;
}