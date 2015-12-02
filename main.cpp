//
//  main.cpp
//  Dynamic
//
//  Created by 20141105072 on 15/12/2.
//  Copyright © 2015年 20141105072. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // int a[4];
    int *p;
    p=(int *)malloc(4);
    if(p==0)
        exit(0);
    *p=100;
    printf("p=%d    *p=%x\n",p,*p);
    return 0;
}
