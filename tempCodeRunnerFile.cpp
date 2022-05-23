unordered_map<int,bool> map;
int sum = 0;
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
    if(sum==0 && map[sum]==true){
        return 1;
    }
    map[sum]=true;
}