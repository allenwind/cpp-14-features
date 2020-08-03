#include <iostream>
#include <memory>

using namespace std;

class Report
{
public:
    Report() { cout << "Report created" << endl; }
    ~Report() { cout << "Report deleted" << endl; }
};

// C++11没有make_unique，C++14添加
int main(int argc, char ** argv)
{
    {
        auto ptr = make_unique<Report>();
    }

    return 0;
}