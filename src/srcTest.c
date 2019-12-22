//
// Created by jhq on 2019/12/22.
//
#include <stdio.h>
#include "srcTest.h"
#include "01/test2.h"

int src_test() {
    test01();
    printf("src test. \n");
    return 0;
}

#pragma once

inline int Add(int i, int j) { return i + j; }