#include <iostream>
#include <vector>
#include <string>

using namespace std;
int *test01(){
    int *p = new int(10);
    return p;
}
int test02(){
    int *arr = new int[10];
    for (int i = 0; i < 10;i++)
    {
        arr[i] = i + 90;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    test02();
    vector<string>
        msg{"hello world", "C++"};
    for (const string& word : msg)
    {
        cout << word <<" ";
    }
    cout << endl;
}

