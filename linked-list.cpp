#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

typedef struct LNode {  // 单链表结点类型
    int data;
    int length;
    struct LNode *next;
}LNode, *PLinkList;

void InitList(PLinkList &L){    //初始化
    L= new LNode;
    L->next= NULL;
    L->length= 15;
}

void add(LNode* p, int sit, int target){    //依次建立新结点
    if(sit<1 || sit>L.length+1){
        cout<< "非法插入";
        exit(0);
    }
    p -> length =p ->length+1;
    for(int i=0; i+1<sit; i++){
        p=p->next;
    }
    LNode* s;
    InitList(s);
    s ->data= target;
    cout <<"插入的数据" << s->data << endl;
    s ->next= p->next;
    p ->next= s;
}

//在第i个位置插入
void InitInsert(PLinkList &L, int i, int e){
    LNode *p= L;
    int j=0;
    while (j<i-1 && p!=NULL)
    {
        p=p->next;
        j++;
    }
    if(p==NULL){
        return false;
    }
    LNode *s=(LNode*)malloc(sizeof(LNode));
    s->data= e;
    s->next= p->next;
    p->next= s;
    return true;
}

int main(){
    LinkList L;
    InitList(L);
    InitInsert(L, 10, 3);
    for(int i=0; i<15; i++){
        // cout << L.data[i] << endl;
        printf("%d\n", L.data[i]);
        cout << "------" << endl;
    }
}
