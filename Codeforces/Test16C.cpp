#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string path;
        cin>>path;
        set<pair<pair<int,int>,pair<int,int>>> dist;
        int x=0, y=0, tim=0;
        for(int i=0; i<path.length(); i++){
            if(path[i]=='N'){
                    if(dist.find(make_pair(make_pair(x, y), make_pair(x, y + 1))) == dist.end()){
                        dist.insert(make_pair(make_pair(x, y), make_pair(x, y + 1)));
                        dist.insert(make_pair(make_pair(x, y + 1), make_pair(x, y)));
                        tim+=5;
                    }
                    else
                        tim++;
                    y++;
            }
            else if(path[i]=='S'){
                    if(dist.find(make_pair(make_pair(x, y), make_pair(x, y - 1))) == dist.end()){
                        dist.insert(make_pair(make_pair(x, y), make_pair(x, y - 1)));
                        dist.insert(make_pair(make_pair(x, y - 1), make_pair(x, y)));
                        tim+=5;
                    }
                    else
                        tim++;
                    y--;
            }
            else if(path[i]=='E'){
                    if(dist.find(make_pair(make_pair(x, y), make_pair(x + 1, y))) == dist.end()){
                        dist.insert(make_pair(make_pair(x, y), make_pair(x + 1, y)));
                        dist.insert(make_pair(make_pair(x + 1, y), make_pair(x, y)));
                        tim+=5;
                    }
                    else
                        tim++;
                    x++;
            }
            else if(path[i]=='W'){
                    if(dist.find(make_pair(make_pair(x, y), make_pair(x - 1, y))) == dist.end()){
                        dist.insert(make_pair(make_pair(x, y), make_pair(x - 1, y)));
                        dist.insert(make_pair(make_pair(x -1, y), make_pair(x, y)));
                        tim+=5;
                    }
                    else
                        tim++;
                    x--;
            }
        }
        cout<<tim<<endl;
    }
}
