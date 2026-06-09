#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// 学生结构体
typedef struct {
    int id;           // 学号
    char name[50];    // 姓名
    int age;          // 年龄
    char gender[10];  // 性别
    float score;      // 成绩
    char major[50];   // 专业
} Student;

// 最大学生数量
#define MAX_STUDENTS 100

// 函数声明
void showMenu();                                         // 显示菜单
int getMenuChoice();                                     // 获取菜单
void addStudent(Student students[], int *count);         // 添加学生
void deleteStudent(Student students[], int *count);      // 删除学生
void modifyStudent(Student students[], int count);       // 修改学生
void searchStudent(Student students[], int count);       // 查询学生
void displayAll(Student students[], int count);          // 显示所有
void sortByScore(Student students[], int count);         // 按成绩排序
void statistics(Student students[], int count);          // 统计信息
void saveToFile(Student students[], int count);          // 保到文件
int loadFromFile(Student students[]);                    // 从文件加载
void clearInputBuffer();                                 // 清空输入缓冲区

#endif
