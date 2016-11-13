//class MSVThread;
typedef DWORD (*LPTHREAD_METHOD)(LPVOID pParam);

// ��������� ���������� ��� ����������� �������.
typedef struct STARTUP_PARAM
{
   // MSVThread*        pClass;
    LPTHREAD_METHOD    pMethod;
    LPVOID            pParam;
} *LPSTARTUP_PARAM;
  

    // �������, ������� ������� ����� �����.
    HANDLE    StartThread        (LPTHREAD_METHOD pMethod, LPVOID pParam, 
                             LPDWORD pdwThreadID = NULL, 
                             LPSECURITY_ATTRIBUTES pSecurity = NULL , 
                             DWORD dwStackSize = 0 , 
                             DWORD dwFlags = 0);

    // ����������� �������, ������� �������� �����.
    static  DWORD StartFunc    (LPSTARTUP_PARAM pStartup);
//};


HANDLE StartThread(LPTHREAD_METHOD pMethod, LPVOID pParam, 
                             LPDWORD pdwThreadID /* = NULL */, 
                             LPSECURITY_ATTRIBUTES pSecurity /* = NULL */, 
                             DWORD dwStackSize /* = 0 */, 
                             DWORD dwFlags /* = 0 */)
{
    // ������� ��������� � ����������� ������ ��� ����������� �������.
    LPSTARTUP_PARAM pStartup = new STARTUP_PARAM;
//    pStartup->pClass    = 0;
    pStartup->pMethod    = pMethod;
    pStartup->pParam    = pParam;

    // ������� ����� �����.
    return CreateThread(pSecurity, dwStackSize, (LPTHREAD_START_ROUTINE)StartFunc, pStartup, dwFlags, pdwThreadID);
}

// � ����� ������ ������� ���������� ������� CMyClass::StartFunc(...)
// � ��� ��������� ��� �����.

DWORD StartFunc(LPSTARTUP_PARAM pStartup)
{
    // ������������� ������ � ����� ������.
    // �������� ��������� �� ����� � �� ����� ������.
//    MSVThread* pClass        = pStartup->pClass;
    LPTHREAD_METHOD pMethod = pStartup->pMethod;
    LPVOID pParam            = pStartup->pParam;

    // ��������� ����� ������ � ����� ������.
    DWORD dwResult = (*pMethod)(pParam);

    // ������� ��������� ������ � ���������� ��� �������� �� ������ ������.
    delete pStartup;
    return dwResult;
}

  

HANDLE StartThread(
    LPTHREAD_METHOD pMethod, LPVOID pParam, 
    LPDWORD pdwThreadID /* = NULL */, 
    LPSECURITY_ATTRIBUTES pSecurity /* = NULL */, 
    DWORD dwStackSize /* = 0 */, 
    DWORD dwFlags /* = 0 */
);