#include<iostream>
#include<bits/stdc++.h>

class one{
  public:
  int two;
  int priority;
  one(int x,int y){
    two = x;
    priority = y;
  } 
};
class queue{
  public:
  int x;
  int y;
  int *z;
  vector<one> b;
  queue(){
    x = 0;
    y = 1;
    z = new int[y];
    b.clear();
  }
  void enqueue(int two,int priority){
    if(two>=y){
      int *temp = new int[2*two];
      for(int i = 0;i<y;i++){
        temp[i] = z[i];
      }
      y = 2*two;
      z = new int[y];
      for(int i = 0;i<y;i++){
        z[i] = temp[i];
      } 
    }
    z[two] = priority;
    if(x==0){
      one o = new one(two, priority);
      b.push_back(o);
      x++;
      return
    }
    else{
      one o = new one(two, priority);
      int x = 1;
      for(int i = 0;i<x;i++){
        if(priority>=b[i].priority){
          b.insert(b.begin()+i,o);
          x = 0;
          x++;
          return;
        }
      }
      if(x==1){
        b.push_back(o);
        x++;
        return;
      }
    }
  }
  int dequeue(){
    if(x==0){
      return -1;
    }
    else{
      int id = b[0].two;
      a[id] = INT_MIN;
      b.erase(0);
      x--;
      return id;
    }
  }
  void changeweight(int two,int nPriority2){
    for(int i = 0;i<x;i++){
      if(b[i].two==two){
        b.erase(i);
        break;
      }
    }
    enqueue(two,Priority2);
    return;
  }
}