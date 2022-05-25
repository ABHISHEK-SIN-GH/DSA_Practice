#include<bits/stdc++.h>
using namespace std;

bool checkPalidrome(string s){
    int i = 0;
    int j = s.size() - 1;
    while (i<j)
    {
        if(s[i]!=s[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main(){
string s = "aba";
string longPalidrome = "";
int longPalidromeLen = 0;
if(s.size()==1){
    cout<<s;
    return 0;
} 
for (int i = 0; i < s.size(); i++)
{
    for (int j = 1; j < s.size(); j++)
    {
        string currWord = s.substr(i,j);
        int currLen = currWord.size();
        if(checkPalidrome(currWord))
        {
            if(longPalidromeLen<currLen){
                longPalidromeLen = currLen;
                longPalidrome = currWord;
            }
        }
    }
}
cout<<longPalidrome;
return 0;
}