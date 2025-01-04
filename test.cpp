#include <iostream>
#include <vector>
#include <string>

using namespace std;
int *test(){
    int *p = new int(10);
    return p;
}

int main()
{
    int *p = test();
    cout << *p << endl;
    cout << *p << endl;
    vector<string>
        msg{"你好", "C++"};
    for (const string& word : msg)
    {
        cout << word <<" ";
    }
    cout << endl;
}

