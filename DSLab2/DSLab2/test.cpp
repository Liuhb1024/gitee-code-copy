#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string changeToP(int N, int P) {
    string result = "";
    stack<int> digits;

    while (N > 0) {
        digits.push(N % P);
        N /= P;
    }

    while (!digits.empty()) {
        int digit = digits.top();
        digits.pop();

        char digitChar;
        if (digit < 10) {
            digitChar = '0' + digit;
        }
        else {
            digitChar = 'A' + digit - 10;
        }

        result.push_back(digitChar);
    }

    return result;
}

int main() {
    int N, P;
    while (true)
    {
        cout << "请输入10进制的数字: ";
        cin >> N;
        cout << "请输入你要转换的进制（2~16） ";
        cin >> P;

        if (P < 2 || P > 16) {
            cout << "请检查你输入要转换的进制是否不符合规定~" << endl;
            continue;
        }

        string result = changeToP(N, P);

        cout << "转换为" << P << "进制的结果为: " << result << endl;

    }
    return 0;
}


#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<int> s; // 使用STL中的栈数据结构
    stack<int> temp;

    cout << "请输入你的栈操作：>" << endl;
    cout << "1. 入栈" << endl;
    cout << "2. 出栈" << endl;
    cout << "3. 顶部元素" << endl;
    cout << "4. 判空" << endl;
    cout << "5. 打印栈" << endl;
    cout << "6. 退出" << endl;

    int choice, value;
    while (true) {
        cout << "输入你的选择:> ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "输入你要入栈的元素:> ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            if (!s.empty()) {
                s.pop();
                cout << "已经出栈" << endl;
            }
            else {
                cout << "栈为空" << endl;
            }
            break;
        case 3:
            if (!s.empty()) {
                cout << "顶部元素为: " << s.top() << endl;
            }
            else {
                cout << "栈为空" << endl;
            }
            break;
        case 4:
            if (s.empty()) {
                cout << "栈为空" << endl;
            }
            else {
                cout << "栈不空" << endl;
            }
            break;
        case 5:
            if (!s.empty())
            {
                temp = s;
                while (!temp.empty())
                {
                    cout << temp.top() << " ";
                    temp.pop();
                }
                cout << endl;
            }
            else cout << "栈为空" << endl;
            break;
        case 6:
            return 0;
        default:
            cout << "错误输入，请重试~" << endl;
        }
    }

    return 0;
}
