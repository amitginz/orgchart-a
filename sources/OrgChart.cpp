#include "OrgChart.hpp"
using namespace ariel;
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;
OrgChart::OrgChart(){
    
}
OrgChart::~OrgChart(){

}
//add the head of chart
OrgChart OrgChart::add_root(const string root){
    // this->chart.push_back(OrgChart::add_root(root));
    OrgChart organization;
    return organization;
}

//add sub to the head of chart
OrgChart OrgChart::add_sub(const string root, const string sub){
    // this->chart.push_back(OrgChart::add_sub(root,sub));
    OrgChart organization;
    return organization;
}


//IO stream operators
ostream& ariel::operator<< (ostream& output, const OrgChart& chart){
    return output;
}



OrgChart OrgChart::begin_level_order(){
    OrgChart organization;
    return organization;
}
OrgChart OrgChart::end_level_order(){
    OrgChart organization;
    return organization;
}
OrgChart OrgChart::begin_reverse_order(){
    OrgChart organization;
    return organization;
}

OrgChart OrgChart::reverse_order(){
    OrgChart organization;
    return organization;
}
OrgChart OrgChart::begin_preorder(){
    OrgChart organization;
    return organization;
}
OrgChart OrgChart::end_preorder(){
    OrgChart organization;
    return organization;
}

OrgChart& OrgChart::operator++(){
    OrgChart organization;
    return *this;
}
OrgChart& OrgChart::operator++(int){
    OrgChart organization;
    return *this;
}
OrgChart *OrgChart::begin(){
    return this;
}

OrgChart *OrgChart::end(){
    return this;
}
OrgChart* OrgChart::operator->(){
    return OrgChart::operator->();
}
OrgChart OrgChart::operator*(){
    OrgChart organization;
    return organization;
}
OrgChart& OrgChart::size(){
    return OrgChart::size();
}
bool OrgChart::operator!=(const OrgChart& comp){

    // return (*this != comp);
    return false;
}