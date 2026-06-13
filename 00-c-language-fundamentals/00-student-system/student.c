#include "student.h"
#include <stdio.h>

// 显示菜单
void showMenu() {
    printf("\n");
    printf("=================================\n");
    printf("         学生管理系统\n");
    printf("=================================\n");
    printf("    1. 添加学生信息\n");
    printf("    2. 删除学生信息\n");
    printf("    3. 修改学生信息\n");
    printf("    4. 查询学生信息\n");
    printf("    5. 显示所有学生信息\n");
    printf("    6. 按成绩排序\n");
    printf("    7. 统计信息 (平均分/最高分/最低分) \n");
    printf("    8. 保存到文件\n");
    printf("    9. 从文件加载\n");
    printf("    0. 退出系统\n");
    printf("=================================\n");
    printf("    请选择 (0-9): ");
}

// 获取菜单选择
int getMenuChoice() {
    int choice;
    scanf("%d", &choice);
    clearInputBuffer();
    return choice;
}

// 清空输入缓存区
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// 添加学生信息
void addStudent(Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("❌ 学生数量已达上限! \n");
        return;
    }

    Student newStudent;

    printf("\n--- 添加学生信息 ---\n");

    // 输入学号 (唯一性检查)
    printf("学号: ");
    scanf("%d", &newStudent.id);
    clearInputBuffer();

    // 检查学号是否已存在
    for (int i = 0; i < *count; i++) {
        if (students[i].id == newStudent.id) {
            printf("❌ 学号已存在! \n");
            return;
        }
    }

    // 输入姓名
    printf("姓名: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';   //去掉换行符

    // 输入年龄
    printf("年龄: ");
    scanf("%d", &newStudent.age);
    clearInputBuffer();

    // 输入性别
    printf("性别 (男/女): ");
    fgets(newStudent.gender, sizeof(newStudent.gender), stdin);
    newStudent.gender[strcspn(newStudent.gender, "\n")] = '\0';

    // 输入专业
    printf("专业: ");
    fgets(newStudent.major, sizeof(newStudent.major), stdin);
    newStudent.major[strcspn(newStudent.major, "\n")] = '\0';

    // 添加到数组
    students[*count] = newStudent;
    (*count)++;

    printf("✅ 学生信息添加成功! \n");
}


// 删除学生信息
void deleteStudent(Student students[], int *count) {
    if (*count == 0) {
        printf("❌ 没有学生信息! \n");
        return;
    }
    
    printf("\n--- 删除学生信息 ---\n");
    printf("请输入要删除的学生学号: ");

    int id;
    scanf("%d", &id);
    clearInputBuffer();

    // 查找并删除
    int found = 0;
    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) {
            // 将后面的元素前移
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
        (*count)--;
            found = 1;
            printf("✅ 学生信息删除成功! \n");
            break;
        }
    }

    if (!found) {
        printf("❌ 未找到学号为 %d 的学生! \n", id);
    }
}

    // 修改学生信息
    void modifyStudent(Student students[], int count) {
        if (count == 0) {
            printf("❌ 没有学生信息! \n");
            return;
        }

        printf("\n--- 修改学生信息 ---\n");
        printf("请输入要修改的学生学号: ");

        int id;
        scanf("%d", &id);
        clearInputBuffer();

        // 查找学生
        int found = 0;
        for (int i = 0; i < count; i++) {
            if (students[i].id == id) {
                found = 1;
                printf("找到学生: %s\n", students[i].name);

                // 修改姓名
                printf("新姓名 (回车跳过): ");
                char newName[50];
                fgets(newName, sizeof(newName), stdin);
                newName[strcspn(newName, "\n")] = '\0';
                if (strlen(newName) > 0) {
                    strcpy(students[i].name, newName);
                }


                // 修改年龄
                printf("新年龄 (输入 0 跳过): ");
                int newAge;
                scanf("%d", &newAge);
                clearInputBuffer();
                if (newAge > 0) {
                    students[i].age = newAge;
                }

                // 修改性别
                printf("新性别 (回车跳过): ");
                char newGender[10];
                fgets(newGender, sizeof(newGender), stdin);
                newGender[strcspn(newGender, "\n")] = '\0';
                if (strlen(newGender) > 0) {
                    strcpy(students[i].gender, newGender);
                }

                // 修改专业
                printf("新专业 (回车跳过): ");
                char newMajor[50];
                fgets(newMajor, sizeof(newMajor), stdin);
                newMajor[strcspn(newMajor, "\n")] = '\0';
                if (strlen(newMajor) > 0) {
                    strcpy(students[i].major, newMajor);
                }

                printf("✅ 学生信息修改成功! \n");
                break;
            }
        }

        if (!found) {
            printf("❌ 未找到学号为 %d 的学生! \n", id);
        }
    }

    // 查询学生信息
    void searchStudent(Student students[], int count) {
        if (count == 0) {
            printf("❌ 没有学生信息! \n");
            return;
        }

        printf("\n--- 查询学生信息 ---\n");
        printf("1. 按学号查询\n");
        printf("2. 按姓名查询\n");
        printf("请选择查询方式 (1-2): ");

        int choice;
        scanf("%d", &choice);
        clearInputBuffer();

        if (choice == 1) {
            // 按学号查询
            printf("请输入学号: ");
            int id;
            scanf("%d", &id);
            clearInputBuffer();

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (students[i].id == id) {
                    printf("\n--- 学生信息 ---\n");
                    printf("学号: %d\n", students[i].id);
                    printf("姓名: %s\n", students[i].name);
                    printf("年龄: %d\n", students[i].age);
                    printf("性别: %s\n", students[i].gender);
                    printf("成绩: %.2f\n", students[i].score);
                    printf("专业: %s\n", students[i].major);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("❌ 未找到学号为 %d 的学生! \n", id);
            }
        } else if (choice == 2) {
            // 按姓名查询
            printf("请输入姓名: ");
            char name[50];
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(students[i].name, name) == 0) {
                    printf("\n--- 学生信息 ---\n");
                    printf("学号: %d\n", students[i].id);
                    printf("姓名: %s\n", students[i].name);
                    printf("年龄: %d\n", students[i].age);
                    printf("性别: %s\n", students[i].gender);
                    printf("成绩: %.2f\n", students[i].score);
                    printf("专业: %s\n", students[i].major);
                    found = 1;
                }
            }


            if (!found) {
                printf("❌ 未找到姓名为 %s 的学生! \n", name);
            }
        } else {
            printf("❌ 无效选择! \n");
        }
    }

    // 显示所有学生信息
    void displayAll(Student students[], int count) {
        if (count == 0) {
            printf("❌ 没有学生信息! \n");
            return;
        }

        printf("\n--- 所有学生信息 ---\n");
        printf("%-8s %-12s %-6s %-8s %-8s %-20s\n", "学号", "姓名", "年龄", "性别", "成绩", "专业");
        printf("-----------------------------------------------\n");

        for(int i =0; i < count; i++) {
            printf("%-8d %-12s %-6d %-8s %-8.2f %-20s\n",
                   students[i].id,
                   students[i].name,
                   students[i].age,
                   students[i].gender,
                   students[i].score,
                   students[i].major);
        }

        printf("-----------------------------------------------\n");
        printf("共 %d 名学生\n", count);
    }

    // 按成绩排序 (冒泡排序)
    void sortByScore(Student students[], int count) {
        if (count == 0) {
            printf("❌ 没有学生信息! \n");
            return;
        }

        printf("\n--- 按成绩排序 ---\n");
        printf("1. 升序排列 (从低到高) \n");
        printf("2. 降序排列 (从高到低) \n");
        printf("请选择排序方式 (1-2): ");

        int choice;
        scanf("%d", &choice);
        clearInputBuffer();

        // 冒泡排序
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; i < count - 1 - i; j++) {
            bool shouldSwap = false;

            if (choice == 1) {
                // 升序: 如果前面的成绩大于后面的成绩, 交换
                shouldSwap = students[j].score > students[j + 1].score;
            } else if (choice == 2) {
                // 降序: 如果前面的成绩小于后面的成绩, 交换
                shouldSwap = students[j].score < students[j + 1].score;
            }

            if (shouldSwap) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("✅ 排序完成! \n");
    displayAll(students, count);
}

// 统计信息
void statistics(Student *students, int count) {
    if (count == 0) {
        printf("❌ 没有学生信息! \n");
        return;
    }

    printf("\n--- 统计信息 ---\n");

    // 计算平均分
    float sum = 0;
    for (int i = 0; i < count; i++) {
        sum += students[i].score;
    }
    float average = sum / count;

    // 找最高分和最低分
    float maxScore = students[0].score;
    float minScore = students[0].score;
    char maxName[50], minName[50];
    strcpy(maxName, students[0].name);
    strcpy(minName, students[0].name);

    for (int i = 1; i < count; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
            strcpy(maxName, students[i].name);
        }
        if (students[i].score < minScore) {
            minScore = students[i].score;
            strcpy(minName, students[i].name);
        }
    }

    // 输出统计结果
    printf("学生总数: %d 人\n", count);
    printf("平均成绩: %.2f 分\n", average);
    printf("最高成绩: %.2f 分 (%s)\n", maxScore, maxName);
    printf("最低成绩: %.2f 分 (%s)\n", minScore, minName);
}

// 保存到文件
void saveToFile(Student students[], int count) {
    FILE *fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("❌ 文件打开失败! \n");
        return;
    }

    // 写入学生数量
    fwrite(&count, sizeof(int), 1, fp);

    // 写入学生数据
    fwrite(students, sizeof(Student), count, fp);

    fclose(fp);
    printf("✅ 学生信息已保存到文件 (students.dat)! \n");
}

// 从文件加载
int loadFromFile(Student students[]) {
    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("⚠️ 文件不存在或打开失败! \n");
        return 0;
    }

    int count = 0;

    // 读取学生数量
    fread(&count, sizeof(int), 1, fp);

    if (count > MAX_STUDENTS) {
        printf("❌ 文件数据异常! \n");
        fclose(fp);
        return 0;
    }

    // 读取学生数据
    fread(students, sizeof(Student), count, fp);

    fclose(fp);
    printf("✅ 成功从文件加载 %d 名学生信息! \n", count);

    return count;
}

// 主函数
int main() {
    Student students[MAX_STUDENTS];
    int count = 0;

    printf("=================================\n");
    printf("    欢迎使用学生信息管理系统\n");
    printf("=================================\n");

    // 尝试从文件加载数据
    printf("\n正在尝试从文件加载数据...\n");
    count = loadFromFile(students);

    // 主循环
    while (1) {
        showMenu();
        int choice = getMenuChoice();

        switch (choice) {
            case 1:
            addStudent(students, &count);
            break;
            case 2:
            deleteStudent(students, &count);
            break;
            case 3:
            modifyStudent(students, count);
            break;
            case 4:
            searchStudent(students, count);
            break;
            case 5:
            displayAll(students, count);
            break;
            case 6:
            sortByScore(students, count);
            break;
            case 7:
            statistics(students, count);
            break;
            case 8:
            saveToFile(students, count);
            break;
            case 9:
            count = loadFromFile(students);
            break;
            case 0:
            printf("\n感谢使用, 再见! 👋\n");
            return 0;
            default:
            printf("❌ 无效选择, 请重新输入! \n");
        }

        printf("\n按回车键继续...");
        getchar();
    }

    return 0;
}
