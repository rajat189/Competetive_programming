# include <bits/stdc++.h>
using namespace std;
 
int  h, w;
char df122345[1024][1024];
char df12234[1024][1024];
int df1223451[1024][1024];
pair<int, int> par[1024][1024];
 
int dx[] = {-1,1,0,0,-1,-1,1,1};
int dy[] = { 0,0,-1,1,-1,1,-1,1};
 
char df1;
int dh12, dh1;
 
bool ok(int r, int c){
  if(r < 0 or c < 0 or r >= h or c >= w or df12234[r][c]=='w' or df12234[r][c]=='s' or df1223451[r][c]==1 ) return false;
  return true;
}
 
 
void init(){
  for(int i = 0; i < h; i++)
    for(int j = 0; j < w; j++){
      par[i][j] = make_pair(i,j);
      df12234[i][j] = df122345[i][j];
    }
}
 
void bfs(pair<int,int> s){
 
  queue<pair<int,int> > q;
  q.push(s);
  df1223451[s.first][s.second] = 1;
 
  while(!q.empty()){
    pair<int,int> s = q.front();
   int x = s.first;
   int y = s.second;
 
  q.pop();
 
   if(x == dh12 and y == dh1) return;
 
   for(int i = 0; i < 8; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
 
    if(ok(nx, ny)) {
      q.push(make_pair(nx,ny));  par[nx][ny] = make_pair(x,y); df1223451[nx][ny] = 1;
    }
   }
 
  }
}
 
void color(){
 pair<int,int> p = make_pair(dh12,dh1);
 while(1){
  int px = p.first;
  int py = p.second;  
  if(p == par[px][py]) break;
  if(df122345[px][py] != 'd') df12234[px][py] = df1;
  p = par[px][py];
}
}
 
void df12(){
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++) cout << df12234[i][j];
      cout << '\n';
  }
}
 
 
class Task{
public:
  void df(){
        set<pair<int,int> > bag;
  cin >> h >> w;
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      cin >> df122345[i][j];   
      df12234[i][j] = df122345[i][j];
      if(df122345[i][j] == 'd'){
       dh12 = i; dh1 = j;
      }
      if(df122345[i][j] == 's') bag.insert(make_pair(i,j));
    } 
  }
 
  set<pair<int,int> > temp = bag;
 
 
df1 = 'a';
set< pair<int,int> > :: iterator it = bag.begin();
while(it != bag.end()){
 
memset(df1223451,0,sizeof df1223451);
init();  
pair<int,int> start = *it;
bfs(start);
df12234[start.first][start.second] = df1;
color();
 
for(set<pair<int,int> > :: iterator itr = temp.begin(); itr != temp.end(); itr++ ){
  pair<int,int>  x = *itr;
 int df122 = x.first;
 int df1223 = x.second;
 if(df122 == start.first and df1223 == start.second) continue;
 df12234[df122][df1223] = '-';
}
 
df12(); cout << '\n';
df1++;
it++;
}
 
 
  }
};
 
int main(){ 
 
  Task ob;
  ob.df();
 
  return 0;
}
