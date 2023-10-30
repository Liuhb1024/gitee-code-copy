//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void displayList(const vector<int>& List) {
//    cout << "Linear List: ";
//    for (int i = 0; i < List.size(); i++) {
//        cout << List[i];
//        if (i < List.size() - 1) {
//            cout << " -> ";
//        }
//    }
//    cout << " -> NULL" << endl;
//}
//
//int main()
//{
//	vector<int> MyArrayList;
//	int option, element, position;
//
//	while (true)
//	{
//        cout << "*********************" << endl;
//        cout << "请选择你要进行的操作" << endl;
//        cout << "1. 插入" << endl;
//        cout << "2. 删除" << endl;
//        cout << "3. 求线性表长度" << endl;
//        cout << "4. 寻找元素" << endl;
//        cout << "5. 得到某个位置下的元素" << endl;
//        cout << "6. 打印" << endl;
//        cout << "7. 退出" << endl;
//        cout << "*********************" << endl;
//
//        cout << "请输入你要选的选项：> ";
//        cin >> option;
//        switch (option)
//        {
//        case 1:
//            cout << "输入你要插入的元素:> ";
//            cin >> element;
//            cout << endl;
//            MyArrayList.push_back(element);
//            break;
//        case 2:
//            cout << "选择你要删除的位置:> ";
//            cin >> position;
//            if (position >= 1 && position <= MyArrayList.size()) {
//                MyArrayList.erase(MyArrayList.begin() + position - 1);
//                cout << "已删除" << endl;
//            }
//            else {
//                cout << "无效位置" << endl;
//            }
//            cout << endl;
//
//            break;
//        case 3:
//            cout << "List length: " << MyArrayList.size() << endl;
//            cout << endl;
//            break;
//        case 4:
//            cout << "请输入你要寻找的元素:> ";
//            cin >> element;
//            for (int i = 0; i < MyArrayList.size(); i++) {
//                if (MyArrayList[i] == element) {
//                    cout << "元素在这个位置： " << i + 1 << endl;
//                    break;
//                }
//                else
//                {
//                    cout << "找不到该元素" << endl;
//                }
//            }
//            cout << endl;
//
//            break;
//        case 5:
//            cout << "输入要检索的位置:> ";
//            cin >> position;
//            if (position >= 1 && position <= MyArrayList.size()) {
//                cout << "Element at position " << position << ": " << MyArrayList[position - 1] << endl;
//            }
//            else {
//                cout << "无效位置" << endl;
//            }
//            cout << endl;
//
//            break;
//        case 6:
//            displayList(MyArrayList);
//            cout << endl;
//            break;
//        case 7:
//            return 0;
//        default:
//            cout << "无效选项，请重新选择~" << endl;
//        }
//        
//	}
//	return 0;
//}



//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//// 定义通讯录节点
//struct contact {
//    string name;
//    string phonenumber;
//    contact* next;
//    contact* prev;
//    contact(string n, string phone) : name(n), phonenumber(phone), next(nullptr), prev(nullptr) {}
//};
//
//// 插入通讯录条目
//void insertcontact(contact*& head, string name, string phonenumber) {
//    contact* newcontact = new contact(name, phonenumber);
//    if (head == nullptr) {
//        head = newcontact;
//    }
//    else {
//        contact* current = head;
//        while (current->next != nullptr) {
//            current = current->next;
//        }
//        current->next = newcontact;
//        newcontact->prev = current;
//    }
//}
//
//// 查找通讯录条目
//contact* findcontact(contact* head, string name) {
//    contact* current = head;
//    while (current != nullptr) {
//        if (current->name == name) {
//            return current;
//        }
//        current = current->next;
//    }
//    return nullptr;
//}
//
//// 删除通讯录条目
//void deletecontact(contact*& head, string name) {
//    contact* contacttodelete = findcontact(head, name);
//    if (contacttodelete != nullptr) {
//        if (contacttodelete->prev != nullptr) {
//            contacttodelete->prev->next = contacttodelete->next;
//        }
//        else {
//            head = contacttodelete->next;
//        }
//        if (contacttodelete->next != nullptr) {
//            contacttodelete->next->prev = contacttodelete->prev;
//        }
//        delete contacttodelete;
//    }
//}
//
//// 打印通讯录列表
//void printcontactlist(contact* head) {
//    if (head == nullptr) {
//        cout << "通讯录为空" << endl;
//    }
//    else {
//        cout << "通讯录列表:" << endl;
//        contact* current = head;
//        while (current != nullptr) {
//            cout << "姓名: " << current->name << ", 电话号码: " << current->phonenumber << endl;
//            current = current->next;
//        }
//    }
//}
//
//// 保存通讯录到文件
//void savetofile(contact* head) {
//    ofstream file("contacts.txt");
//    if (file.is_open()) {
//        contact* current = head;
//        while (current != nullptr) {
//            file << current->name << " " << current->phonenumber << endl;
//            current = current->next;
//        }
//        file.close();
//        cout << "通讯录已保存至文件 contacts.txt" << endl;
//    }
//    else {
//        cout << "无法打开文件以保存通讯录" << endl;
//    }
//}
//
//// 从文件重新装入通讯录
//// 实际上就是更新 txt 文件的内容
//contact* loadfromfile() {
//    contact* head = nullptr;
//    ifstream file("contacts.txt");
//    if (file.is_open()) {
//        string name, phonenumber;
//        while (file >> name >> phonenumber) {
//            insertcontact(head, name, phonenumber);
//        }
//        file.close();
//        cout << "通讯录已从文件重新装入" << endl;
//    }
//    else {
//        cout << "无法打开文件以重新装入通讯录" << endl;
//    }
//    return head;
//}
//
//int main() {
//    contact* contactlist = nullptr;
//
//    while (true) {
//        cout << "通讯录操作:" << endl;
//        cout << "1. 插入联系人" << endl;
//        cout << "2. 查找联系人" << endl;
//        cout << "3. 删除联系人" << endl;
//        cout << "4. 显示通讯录" << endl;
//        cout << "5. 保存通讯录至文件" << endl;
//        cout << "6. 重新装入通讯录" << endl;
//        cout << "7. 退出" << endl;
//        cout << "请输入您的选择: ";
//        int choice;
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            cout << "输入联系人姓名: ";
//            string name;
//            cin >> name;
//            cout << "输入联系人电话号码: ";
//            string phonenumber;
//            cin >> phonenumber;
//            insertcontact(contactlist, name, phonenumber);
//            cout << "联系人已插入" << endl;
//            break;
//        }
//        case 2: {
//            cout << "输入联系人姓名: ";
//            string name;
//            cin >> name;
//            contact* contact = findcontact(contactlist, name);
//            if (contact != nullptr) {
//                cout << "联系人姓名: " << contact->name << ", 电话号码: " << contact->phonenumber << endl;
//            }
//            else {
//                cout << "联系人未找到" << endl;
//            }
//            break;
//        }
//        case 3: {
//            cout << "输入联系人姓名: ";
//            string name;
//            cin >> name;
//            deletecontact(contactlist, name);
//            cout << "联系人已删除" << endl;
//            break;
//        }
//        case 4: {
//            printcontactlist(contactlist);
//            break;
//        }
//        case 5: {
//            savetofile(contactlist);
//            break;
//        }
//        case 6: {
//            contactlist = loadfromfile();
//            break;
//        }
//        case 7:
//            return 0;
//        default:
//            cout << "无效的选择，请重试" << endl;
//        }
//    }
//    return 0;
//}


#include <iostream>
#include<cstdio>
using namespace std;

// 定义一元多项式的节点
/*
Polynomial 多项式
coefficient 系数
exponent 指数
*/
struct PolynomialNode {
    int coefficient;
    int exponent;
    PolynomialNode* next;
    PolynomialNode(int coef, int exp) : coefficient(coef), exponent(exp), next(nullptr) {}
};

// 向一元多项式中插入项
void insertTerm(PolynomialNode*& head, int coef, int exp) {
    PolynomialNode* newNode = new PolynomialNode(coef, exp);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        PolynomialNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// 打印一元多项式
void printPolynomial(PolynomialNode* head) {
    if (head == nullptr) {
        cout << "0" << endl;
    }
    else {
        while (head != nullptr) {
            cout << head->coefficient << "x^" << head->exponent;
            if (head->next != nullptr) {
                cout << " + ";
            }
            head = head->next;
        }
        cout << endl;
    }
}

// 相加两个一元多项式
PolynomialNode* addPolynomials(PolynomialNode* poly1, PolynomialNode* poly2) {
    PolynomialNode* result = nullptr;

    while (poly1 != nullptr || poly2 != nullptr) {
        int coef1 = (poly1 != nullptr) ? poly1->coefficient : 0;
        int coef2 = (poly2 != nullptr) ? poly2->coefficient : 0;
        int exp1 = (poly1 != nullptr) ? poly1->exponent : 0;
        int exp2 = (poly2 != nullptr) ? poly2->exponent : 0;

        if (exp1 == exp2) {
            insertTerm(result, coef1 + coef2, exp1);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        else if (exp1 > exp2) {
            insertTerm(result, coef1, exp1);
            poly1 = poly1->next;
        }
        else {
            insertTerm(result, coef2, exp2);
            poly2 = poly2->next;
        }
    }

    return result;
}

int main() {
    PolynomialNode* poly1 = nullptr;
    PolynomialNode* poly2 = nullptr;

    insertTerm(poly1, 3, 2);
    insertTerm(poly1, 5, 1);
    insertTerm(poly1, 2, 0);

    insertTerm(poly2, 4, 3);
    insertTerm(poly2, 1, 1);

    cout << "Polynomial 1: ";
    printPolynomial(poly1);
    cout << "Polynomial 2: ";
    printPolynomial(poly2);

    PolynomialNode* result = addPolynomials(poly1, poly2);
    cout << "Result: ";
    printPolynomial(result);

    return 0;
}
