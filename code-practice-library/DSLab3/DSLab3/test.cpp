#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>

using namespace std;

void printPascalTriangle(int numRows) {
    std::vector<std::vector<int>> triangle(numRows);

    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = 1;  // ÿ�еĵ�һ��Ԫ��Ϊ 1
        triangle[i][i] = 1;  // ÿ�е����һ��Ԫ��Ϊ 1

        for (int j = 1; j < i; j++) {
            // ����ÿ��Ԫ�ص�ֵΪ��һ�е� j-1 �� j λ�õ�Ԫ��֮��
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    // ��ӡ�������
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << triangle[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


int main()
{
    int numRows;
    
    do
    {
        cout << "��������Ҫ���������>" << endl;
        cin >> numRows;
        printPascalTriangle(numRows);
        cout << endl;
      
    } while (numRows);

	return 0;
}