#ifndef matrixxx_h
#define matrixxx_h
#include <iostream>

using namespace std;

void RemakeNegative() {
    system("cls");
    string fileName;
    cout<<"������� �������� ���������� ����� � ���������� ���������: ";
    cin >> fileName;
    ifstream fin(fileName + ".txt");
    if(fin.is_open()){
        int r, c;
        fin >> r >> c;
        int** ptr;
        ptr = new int* [r];
        for (int i = 0; i < c; i++)
            ptr[i] = new int[c];
        cout<<"�����:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                fin >> ptr[i][j];
                cout << ptr[i][j] << "\t";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"���������:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (ptr[i][j] < 0){
                    ptr[i][j] = ptr[i][j] * -1;

                }
                cout << ptr[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else{
        cout<<"\n������� ������ ����!\n";
    }
    system("pause");
}

void RemakePositive() {
    system("cls");
    string fileName;
    cout<<"������� �������� ���������� ����� � ���������� ���������: ";
    cin >> fileName;
    ifstream fin(fileName + ".txt");
    if(fin.is_open()){
        int r, c;
        fin >> r >> c;
        int** ptr;
        ptr = new int* [r];
        for (int i = 0; i < c; i++)
            ptr[i] = new int[c];
        cout<<"�����:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                fin >> ptr[i][j];
                cout << ptr[i][j] << "\t";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"���������:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (ptr[i][j] > 0){
                    ptr[i][j] = ptr[i][j] * -1;

                }
                cout << ptr[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else{
        cout<<"\n������� ������ ����!\n";
    }
    system("pause");
}
#endif
