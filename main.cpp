#include <iostream>
#include <vector>
#include "stats.h"

#include "include/snu_bmt_gui_caller.h"
#include "include/snu_bmt_interface.h"

using namespace std;


class Virtual_Submitter_Implementation : public SNU_BMT_Interface
{
public:
    void process_A()
    {
        cout << "process_A from a virtual submitter" <<endl;
    }
    void process_B()
    {
        cout << "process_B from a virtual submitter" <<endl;
    }
    void process_C()
    {
        cout << "process_C from a virtual submitter" <<endl;
    }
};



int main()
{

    SNU_BMT_GUI_Caller* caller = new SNU_BMT_GUI_Caller();

    vector<int> v = {7,5,16,9};
    cout <<"mean : " << mean(v.data(), v.size()) <<endl;
    system("pause");
    return 0;
}