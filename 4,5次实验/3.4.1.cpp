/*#include <iostream>
#include <cstring>
using namespace std;

int indexof(const char* s1, const char* s2) 
{
    int len_s1 = strlen(s1); 
    int len_s2 = strlen(s2);

    for (int i = 0; i < len_s2; i++) 
    {
        if (s2[i] == s1[0]) 
        {
            int j;
            for (j = 1; j < len_s1; j++) 
            {
                if (s2[i + j] != s1[j])
                    break;
            }
            if (j == len_s1) 
            {
                return i;
            }
        }
    }
    return -1; 
}

int main()
{
    char s1[100], s2[100]; 

    cout << " s1: ";
    cin >> s1;

    cout << " s2: ";
   cin >> s2;

    int index = indexof(s1, s2); 

    if (index != ( - 1))
        cout << index+1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
*/