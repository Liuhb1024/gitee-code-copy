#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>

using namespace std;

void printPascalTriangle(int numRows) {
    std::vector<std::vector<int>> triangle(numRows);

    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = 1;  // 每行的第一个元素为 1
        triangle[i][i] = 1;  // 每行的最后一个元素为 1

        for (int j = 1; j < i; j++) {
            // 计算每个元素的值为上一行的 j-1 和 j 位置的元素之和
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    // 打印杨辉三角
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
        cout << "请输入你要求的行数：>" << endl;
        cin >> numRows;
        printPascalTriangle(numRows);
        cout << endl;
      
    } while (numRows);

	return 0;
}