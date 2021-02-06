#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
    char * msg = "Hello world";
    int *umsg = (int *)msg;
    vector<string> msg_v {};
    msg_v.push_back("Hello 1");
    msg_v.push_back("Hello 2");
    msg_v.push_back("Hello 3");
    msg_v.push_back("Hello 4");
    msg_v.push_back("Hello 5");
    msg_v.push_back("Hello 6");
    while(!msg_v.empty())
    {
        cout << msg_v.front() << " ";
        msg_v.pop_back();
    }
    cout << endl;
    cout << msg << endl;
}