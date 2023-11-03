#include <iostream>
#include "box.h"
#include "binary_tree.h"

using namespace std;

void myClass() {
    // C++ 类和对象
    double volume = 0.0;     // 用于存储体积
    Box box1{};
    // box 1 详述
    box1.height = 5.0;
    box1.length = 6.0;
    box1.breadth = 7.0;
    // box 1 的体积
    volume = box1.height * box1.length * box1.breadth;
    cout << "Box1" << volume << endl;
}

// 基类
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// 派生类
class Rectangle : public Shape {
public:
    int getArea() {
        return (width * height);
    }
};

void myInheritance() {
    // 基类
    class Animal {
        // eat() 函数
        // sleep() 函数
    };


    // 派生类
    class Dog : public Animal {
        // bark() 函数
    };

    // 运行

    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(7);

    // 输出对象的面积
    cout << "继承 Rectangle Total area: " << Rect.getArea() << endl;
}

class printData {
public:
    static void print(int i) {
        cout << "整数为: " << i << endl;
    }

    static void print(double f) {
        cout << "浮点数为: " << f << endl;
    }

    static void print(char c[]) {
        cout << "字符串为: " << c << endl;
    }
};

void myOverloading() {
    // 输出整数
    printData::print(5);
    // 输出浮点数
    printData::print(500.263);
    // 输出字符串
    char c[] = "Hello C++";
    printData::print(c);
}

class Adder {
public:
    // 构造函数
    Adder(int i = 0) {
        total = i;
    }

    // 对外的接口
    void addNum(int number) {
        total += number;
    }

    // 对外的接口
    int getTotal() {
        return total;
    };
private:
    // 对外隐藏的数据
    int total;
};

void myDataEncapsulation() {
    Adder a;

    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    cout << "Total " << a.getTotal() << endl;
}

#define DEBUG

#define MIN(a, b) (((a)<(b)) ? a : b)

void myPreprocessor() {
    int i, j;
    i = 100;
    j = 30;
#ifdef DEBUG
    cerr << "Trace: Inside main function" << endl;
#endif

#if 0
    /* 这是注释部分 */
   cout << MKSTR(HELLO C++) << endl;
#endif

    cout << "The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
    cerr << "Trace: Coming out of main function" << endl;
#endif
}

void myBinaryTree() {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(9);
    tree.insert(6);
    cout << "Inorder traversal: ";
    tree.inorderTraversal(tree.root);
    cout << endl;
}

int main() {
    myClass();
    myInheritance();
    myOverloading();
    myDataEncapsulation();
    myPreprocessor();
    myBinaryTree();
    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

    return 0;
}
