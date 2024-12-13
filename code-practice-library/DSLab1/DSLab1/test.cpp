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
//        cout << "��ѡ����Ҫ���еĲ���" << endl;
//        cout << "1. ����" << endl;
//        cout << "2. ɾ��" << endl;
//        cout << "3. �����Ա���" << endl;
//        cout << "4. Ѱ��Ԫ��" << endl;
//        cout << "5. �õ�ĳ��λ���µ�Ԫ��" << endl;
//        cout << "6. ��ӡ" << endl;
//        cout << "7. �˳�" << endl;
//        cout << "*********************" << endl;
//
//        cout << "��������Ҫѡ��ѡ�> ";
//        cin >> option;
//        switch (option)
//        {
//        case 1:
//            cout << "������Ҫ�����Ԫ��:> ";
//            cin >> element;
//            cout << endl;
//            MyArrayList.push_back(element);
//            break;
//        case 2:
//            cout << "ѡ����Ҫɾ����λ��:> ";
//            cin >> position;
//            if (position >= 1 && position <= MyArrayList.size()) {
//                MyArrayList.erase(MyArrayList.begin() + position - 1);
//                cout << "��ɾ��" << endl;
//            }
//            else {
//                cout << "��Чλ��" << endl;
//            }
//            cout << endl;
//
//            break;
//        case 3:
//            cout << "List length: " << MyArrayList.size() << endl;
//            cout << endl;
//            break;
//        case 4:
//            cout << "��������ҪѰ�ҵ�Ԫ��:> ";
//            cin >> element;
//            for (int i = 0; i < MyArrayList.size(); i++) {
//                if (MyArrayList[i] == element) {
//                    cout << "Ԫ�������λ�ã� " << i + 1 << endl;
//                    break;
//                }
//                else
//                {
//                    cout << "�Ҳ�����Ԫ��" << endl;
//                }
//            }
//            cout << endl;
//
//            break;
//        case 5:
//            cout << "����Ҫ������λ��:> ";
//            cin >> position;
//            if (position >= 1 && position <= MyArrayList.size()) {
//                cout << "Element at position " << position << ": " << MyArrayList[position - 1] << endl;
//            }
//            else {
//                cout << "��Чλ��" << endl;
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
//            cout << "��Чѡ�������ѡ��~" << endl;
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
//// ����ͨѶ¼�ڵ�
//struct contact {
//    string name;
//    string phonenumber;
//    contact* next;
//    contact* prev;
//    contact(string n, string phone) : name(n), phonenumber(phone), next(nullptr), prev(nullptr) {}
//};
//
//// ����ͨѶ¼��Ŀ
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
//// ����ͨѶ¼��Ŀ
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
//// ɾ��ͨѶ¼��Ŀ
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
//// ��ӡͨѶ¼�б�
//void printcontactlist(contact* head) {
//    if (head == nullptr) {
//        cout << "ͨѶ¼Ϊ��" << endl;
//    }
//    else {
//        cout << "ͨѶ¼�б�:" << endl;
//        contact* current = head;
//        while (current != nullptr) {
//            cout << "����: " << current->name << ", �绰����: " << current->phonenumber << endl;
//            current = current->next;
//        }
//    }
//}
//
//// ����ͨѶ¼���ļ�
//void savetofile(contact* head) {
//    ofstream file("contacts.txt");
//    if (file.is_open()) {
//        contact* current = head;
//        while (current != nullptr) {
//            file << current->name << " " << current->phonenumber << endl;
//            current = current->next;
//        }
//        file.close();
//        cout << "ͨѶ¼�ѱ������ļ� contacts.txt" << endl;
//    }
//    else {
//        cout << "�޷����ļ��Ա���ͨѶ¼" << endl;
//    }
//}
//
//// ���ļ�����װ��ͨѶ¼
//// ʵ���Ͼ��Ǹ��� txt �ļ�������
//contact* loadfromfile() {
//    contact* head = nullptr;
//    ifstream file("contacts.txt");
//    if (file.is_open()) {
//        string name, phonenumber;
//        while (file >> name >> phonenumber) {
//            insertcontact(head, name, phonenumber);
//        }
//        file.close();
//        cout << "ͨѶ¼�Ѵ��ļ�����װ��" << endl;
//    }
//    else {
//        cout << "�޷����ļ�������װ��ͨѶ¼" << endl;
//    }
//    return head;
//}
//
//int main() {
//    contact* contactlist = nullptr;
//
//    while (true) {
//        cout << "ͨѶ¼����:" << endl;
//        cout << "1. ������ϵ��" << endl;
//        cout << "2. ������ϵ��" << endl;
//        cout << "3. ɾ����ϵ��" << endl;
//        cout << "4. ��ʾͨѶ¼" << endl;
//        cout << "5. ����ͨѶ¼���ļ�" << endl;
//        cout << "6. ����װ��ͨѶ¼" << endl;
//        cout << "7. �˳�" << endl;
//        cout << "����������ѡ��: ";
//        int choice;
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            cout << "������ϵ������: ";
//            string name;
//            cin >> name;
//            cout << "������ϵ�˵绰����: ";
//            string phonenumber;
//            cin >> phonenumber;
//            insertcontact(contactlist, name, phonenumber);
//            cout << "��ϵ���Ѳ���" << endl;
//            break;
//        }
//        case 2: {
//            cout << "������ϵ������: ";
//            string name;
//            cin >> name;
//            contact* contact = findcontact(contactlist, name);
//            if (contact != nullptr) {
//                cout << "��ϵ������: " << contact->name << ", �绰����: " << contact->phonenumber << endl;
//            }
//            else {
//                cout << "��ϵ��δ�ҵ�" << endl;
//            }
//            break;
//        }
//        case 3: {
//            cout << "������ϵ������: ";
//            string name;
//            cin >> name;
//            deletecontact(contactlist, name);
//            cout << "��ϵ����ɾ��" << endl;
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
//            cout << "��Ч��ѡ��������" << endl;
//        }
//    }
//    return 0;
//}


#include <iostream>
#include<cstdio>
using namespace std;

// ����һԪ����ʽ�Ľڵ�
/*
Polynomial ����ʽ
coefficient ϵ��
exponent ָ��
*/
struct PolynomialNode {
    int coefficient;
    int exponent;
    PolynomialNode* next;
    PolynomialNode(int coef, int exp) : coefficient(coef), exponent(exp), next(nullptr) {}
};

// ��һԪ����ʽ�в�����
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

// ��ӡһԪ����ʽ
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

// �������һԪ����ʽ
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
