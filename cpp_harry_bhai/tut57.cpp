#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout << "bogus code";
    }
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "This video has rating with  " << rating << "/5" << title << endl;
        cout << "Length of this video is " << videolength << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with length " << title << endl;
        cout << "Ratings" << rating << "/5 " << endl;
        cout << "NO of words in this text tutorial is " << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for laxman's video

    title = "Django Tutorial";
    vlen = 34.45f;
    rating = 4.89f;
    CWHVideo djvideo(title, rating, vlen);
    // djvideo.display();
    // for laxman's text

    title = "Django Tutorial text";
    rating = 4.19f;
    words = 433;
    CWHText djtext(title, rating, words);
    // djtext.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

/* rules for vrtual function
1.they can't be static
2.they are accessed by object pointers
3.virtual fucntions can be a friend of another class
4.a function in a base class might not be used .
5. If a virtual function is defiend in a base class, there is no necessity of redefining it is th derived class 
*/