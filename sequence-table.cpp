#include <iostream>
#include <algorithm>
using namespace std;
#define InitSize 100
int t=1;

typedef struct{
    int *data;
    int MaxSize= 100, length= 0;
}SqList;

void InitList(SqList &L){
    L.data= (int *)malloc(InitSize* sizeof(int));
    L.length= 10;
    L.MaxSize= InitSize;
}

bool ListInsert(SqList &L, int i, int e){
    if(i<1 || i>L.length +1){
        printf("Wrong1");
        t=0;
        return false;
    }
    if(L.length>= L.MaxSize){
        printf("Wrong2");
        t=0;
        return false;
    }
    if(t==1){
        for (int j=L.length; j>=i; j--){
            L.data[j]= L.data[j-1];
        }
        L.data[i-1]= e;
        L.length ++;
    }
    return true;
}

int main(){
    SqList L;
    InitList(L);
    ListInsert(L, 3, 3);
    for(int i=0; i<L.length; i++){
        // cout << L.data[i] << endl;
        printf("%d\n", L.data[i]);
        cout << "------" << endl;
    }
}
