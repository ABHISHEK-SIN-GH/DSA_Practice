#include<bits/stdc++.h>
using namespace std;

int main(){
int a1[] = {11,2,3,24,12};
int a2[] = {2,3}; 
bool check = true;   
set<int> s;
for (int i = 0; i < 5; i++)
{
    s.insert(a1[i]);
}
for (int i = 0; i < 2; i++)
{
    if(s.find(a2[i])){
        
    }
}

return 0;
}