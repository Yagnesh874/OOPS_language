#include <iostream>
using namespace std;

class paper
{
public:
    int final_width;
    int width, height;
    void getdata();
    void putdata(paper, paper);
};
void paper::getdata()
{
    cout << "Enter the width ";
    cin >> width;
    cout << "Enter the height ";
    cin >> height;
}
void paper::putdata(paper p1, paper p2)
{
    final_width = p1.width + p2.width;
    final_width = p1.height + p2.height;
    cout << "Total width" << final_width << endl;
    cout << "Total height" << final_width << endl;
}
int main()
{
    paper p1, p2, p3;
    p1.getdata();
    p2.getdata();
    p2.putdata(p1, p2);
    return 0;
}