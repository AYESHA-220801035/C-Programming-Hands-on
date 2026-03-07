#include <iostream>
using namespace std;
class Media
{
public:
    virtual void play()
    {
        cout << "Playing media..." << endl;
    }
};
class Audio : public Media
{
public:
    void play()
    {
        cout << "Playing audio file..." << endl;
    }
};
class Video : public Media
{
public:
    void play()
    {
        cout << "Playing video file..." << endl;
    }
};
int main()
{
    Media *m;

    Audio a;
    Video v;

    m = &a;
    m->play();  

    m = &v;
    m->play();  

    return 0;
}