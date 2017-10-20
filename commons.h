#ifndef COMMONS_H
#define COMMONS_H
#include <string>


class commons
{
    public:
        commons();
        void clr();
        void wait();
        void fgcolor(std::string a);
        void bgcolor(std::string a);
        void clrline();
        int randGen(int a, int b);

    protected:
    private:
    int seedGen();
};

#endif // COMMONS_H
