#include <iostream>
#include <string>
#include <vector>
using namespace std;
namespace ariel{
    // template <typename T>
    class OrgChart{
    private:
        
        vector<string> chart;
        
    public:
        OrgChart();
        ~OrgChart();
        OrgChart& size();
        OrgChart add_root(const string root);
        OrgChart add_sub(const string root, const string sub);
        OrgChart *begin();
        OrgChart *end();
        OrgChart& begin_level_order();
        OrgChart& end_level_order();
        OrgChart& begin_reverse_order();
        OrgChart& reverse_order();
        OrgChart& begin_preorder();
        OrgChart& end_preorder();
        OrgChart& operator++();
        OrgChart& operator++(int);
        OrgChart& operator*();
        bool operator!=(const OrgChart& comp);
        OrgChart* operator->();
        friend ostream& operator<< (ostream& output, const OrgChart& chart);
    };
}
