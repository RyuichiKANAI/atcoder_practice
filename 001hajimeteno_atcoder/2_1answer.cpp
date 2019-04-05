#include<iostream>
int main(){
    int N;
    int score[4] = {0};//4つの要素を持つ配列を0で初期化
    std::cin>>N;
    char c;
    for(int i=0; i<N; ++i){
        std::cin>>c;
        score[c-'1']= score[c-'1']+1;//C++だとchar型の1には整数値49が割り当てられている。なので、そのままchar型のcをint(c)とすると49になってしまう。そうではなくて、'1'を引くことでintとして扱う。
    }
    int min1 = N+1, max1 = 0;
    for(int i=0; i<4; ++i){
        if(min1>score[i]){
            min1 = score[i];
        }
        if(max1<score[i]){
            max1 = score[i];
        }
    }
    std::cout<<max1<<" "<<min1<<std::endl;
    return 0;
}

