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
        cout << "������10���Ƶ�����: ";
        cin >> N;
        cout << "��������Ҫת���Ľ��ƣ�2~16�� ";
        cin >> P;

        if (P < 2 || P > 16) {
            cout << "����������Ҫת���Ľ����Ƿ񲻷��Ϲ涨~" << endl;
            continue;
        }

        string result = changeToP(N, P);

        cout << "ת��Ϊ" << P << "���ƵĽ��Ϊ: " << result << endl;

    }
    return 0;
}


#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<int> s; // ʹ��STL�е�ջ���ݽṹ
    stack<int> temp;

    cout << "���������ջ������>" << endl;
    cout << "1. ��ջ" << endl;
    cout << "2. ��ջ" << endl;
    cout << "3. ����Ԫ��" << endl;
    cout << "4. �п�" << endl;
    cout << "5. ��ӡջ" << endl;
    cout << "6. �˳�" << endl;

    int choice, value;
    while (true) {
        cout << "�������ѡ��:> ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "������Ҫ��ջ��Ԫ��:> ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            if (!s.empty()) {
                s.pop();
                cout << "�Ѿ���ջ" << endl;
            }
            else {
                cout << "ջΪ��" << endl;
            }
            break;
        case 3:
            if (!s.empty()) {
                cout << "����Ԫ��Ϊ: " << s.top() << endl;
            }
            else {
                cout << "ջΪ��" << endl;
            }
            break;
        case 4:
            if (s.empty()) {
                cout << "ջΪ��" << endl;
            }
            else {
                cout << "ջ����" << endl;
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
            else cout << "ջΪ��" << endl;
            break;
        case 6:
            return 0;
        default:
            cout << "�������룬������~" << endl;
        }
    }

    return 0;
}
