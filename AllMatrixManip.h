#ifndef AllMatrixManip_H
#define AllMatrixManip_H
#include "matrixxx.h"
#include "MatrixSum.h"
#include "MatrixManip.h"
#include "PaintTrapezoid.h"

void MatrixManip(){
    char Key[10];
    do{
       system("cls");
       cout<<"1. ����� ������\n2. ������������� � �������������\n3. ������������� � �������������\n4. ������������ �������� �������\n5. ��������� ��������\n0. ��������� ������\n>> ";
       cin>>Key[0];
       switch(Key[0]){
           case '1': SumTwinMatrix(); getchar(); break;
           case '2': RemakeNegative(); getchar(); break;
           case '3': RemakePositive(); getchar(); break;
           case '4': DiagElementsOfMatrix(); getchar(); break;
           case '5': TrpzdPaint(); getchar(); break;
           case '0': return;
           default: break;
       }
    }
    while(Key[0] != '0');
}

#endif
