// HelloDll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"


__declspec(dllexport)  void APIENTRY entry()
{
    {
        MessageBoxA(NULL, __FILE__, __FUNCTION__, MB_OK);
    }
}