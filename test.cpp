#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"hello Word","C++"};
    for (const string& word : msg)
    {
        cout << word <<" ";
    }
    cout << endl;
}

