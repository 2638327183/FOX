#pragma once

#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define q "\033[31;6m"
#define w "\033[31;0m"

int 总量,小时,多少数,乘,exti;
int gly=0;
int syz=1314520;

#define 蓝色 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x01)
#define 绿色 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x02)
#define 红色 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x04)