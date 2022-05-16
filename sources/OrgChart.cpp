#include "OrgChart.hpp"
using namespace ariel;

OrgChart::OrgChart(){

}
OrgChart::~OrgChart(){

}
//add the head of chart
OrgChart OrgChart::add_root(const string root){
    return OrgChart::add_root("aaa");
}

//add sub to the head of chart
OrgChart OrgChart::add_sub(const string root, const string sub){
    return OrgChart::add_sub("aaa","aaa");
}


//IO stream operators
ostream& operator<< (ostream& output, const OrgChart& chart){
    return output;
}

OrgChart& OrgChart::begin_level_order(){
    return OrgChart::begin_level_order();
}
OrgChart& OrgChart::end_level_order(){
    return OrgChart::end_level_order();
}
OrgChart& OrgChart::begin_reverse_order(){
    return OrgChart::begin_reverse_order();
}

OrgChart& OrgChart::reverse_order(){
    return OrgChart::reverse_order();
}
OrgChart& OrgChart::begin_preorder(){
    return OrgChart::begin_preorder();
}
OrgChart& OrgChart::end_preorder(){
    return OrgChart::end_preorder();
}

OrgChart& OrgChart::operator++(){
    return OrgChart::operator++();
}
OrgChart& OrgChart::operator++(int){
    return OrgChart::operator++();
}
OrgChart *OrgChart::begin(){
    return OrgChart::begin();
}

OrgChart *OrgChart::end(){
    return OrgChart::end();
}
OrgChart* OrgChart::operator->(){
    return OrgChart::operator->();
}
OrgChart& OrgChart::operator*(){
    return OrgChart::operator*();
}
OrgChart& OrgChart::size(){
    return OrgChart::size();
}
bool OrgChart::operator!=(const OrgChart& comp){
    return (*this != comp);
}