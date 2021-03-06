#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

int v,t,s,d;
double foo,bar;
void solve1(){

  // 切り捨て
  foo=1;
  while((v*foo)<d)foo+=1;

  // .1 とか
  bar=foo;
  if(v*foo>d){
    bar+=1;
  }

}

void solve2(){
  foo=(double)d/(double)v;
}

int main() {
  scanf("%d%d%d%d",&v,&t,&s,&d);

  solve2();

  //printf("foo: %lf\n",foo);

  if(foo>=(double)t&&foo<=(double)s){
    puts("No");
  }else{
    puts("Yes");
  }

  return 0;
}
