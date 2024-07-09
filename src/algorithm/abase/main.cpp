#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 字符串长度
#define LENGTH 10
// 字符串宽度
#define WIDTH 5
// 默认换行符
#define NEWLINE '\n'

void ivector() {
    vector<int> i1;
    i1.push_back(1);

    cout << i1.size();
}

void ibase() {
    std::cout << "基础算法案例" << std::endl;
    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
}

// istring 字符串查看
void istring() {

    // String
    string s1;
    s1 = "Hello Word!";
    cout << s1 << endl;

    string s2;
}

string stuInfo(string name, int age = 18, double score = 60) {
    string info = "学生姓名：" + name + "\t年龄：" + to_string(age) + "\t成绩：" + to_string(score);
    return info;
}

int main() {
    string (*fp)(string, int, double) = nullptr;
    fp = stuInfo;

    ibase();
    ivector();
    // 字符串
    istring();
    std::cout << stuInfo("张三") << std::endl;
    return 0;
}
