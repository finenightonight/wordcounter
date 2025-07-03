#include <iostream>
using namespace std;

string a;
int WordCounter = 0;
int i = 0;

int main(){
    getline(cin, a);
    cout << a << endl;

    while (i < a.length())
    {   
        if (a[i] == ' '){
            i++;
        }
        else
        {
            if (a[i + 1] == ' ' || a[i + 1] == '\0')
            {
                WordCounter = WordCounter + 1;
                i++;
            }
            else
            {
                i++;
            }
        }
    }
    
    cout << "Word Counter = " << WordCounter << endl;
    cout << "Lenght = " << a.length() << endl;
    system("pause");
    return 0;
}