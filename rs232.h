#ifndef RS232_H_INCLUDED
#define RS232_H_INCLUDED

#include <windows.h>

class RS232
{
    public :
        RS232(const char *comname);
        ~RS232();
        int setParams(DWORD speed, BYTE byteSize, BYTE parity, BYTE stopBits);
        int connect();
        int disconnect();
        int read(int nbChar, char* data);
        int readNonBlocking(int nbChar, char* data);
        int write(int nbChar, char* data);

    private :
        char name[30];
        HANDLE handle;
        int isConnected;
};

#endif // RS232_H_INCLUDED
