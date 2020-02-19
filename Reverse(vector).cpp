#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cout << "enter your text" << endl;
    vector <string> container(5);

    for (int j = 0; j < 5; j++)
    {

    getline (cin, container[j]);
    }

    for (int i = 4; i >= 0; i--)
    {
        cout << container[i] << endl;
    }

   
    system ("pause");
    return 0;
}
