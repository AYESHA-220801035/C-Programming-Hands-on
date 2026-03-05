#include <iostream>
using namespace std;
class CryptoBox
{
private:
    string privateKey;
    int keyVersion;
public:
    CryptoBox(string key, int version)
    {
        privateKey = key;
        keyVersion = version;
    }
    friend void dumpForAudit(const CryptoBox &box);
};
void dumpForAudit(const CryptoBox &box)
{
    cout << "Audit Report:" << endl;
    cout << "Private Key: " << box.privateKey << endl;
    cout << "Key Version: " << box.keyVersion << endl;
}
int main()
{
    CryptoBox cb("ABC123SECRET", 1);
    dumpForAudit(cb);
    return 0;
}