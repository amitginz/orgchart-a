/**
 *
 * AUTHORS: amit ginzberg
 * 
 * Date: 2021-05
 */
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include <vector>
#include "OrgChart.hpp"
using namespace ariel;

TEST_CASE("checkthrow-goodinput"){
    OrgChart org;
    OrgChart org1;
        CHECK_NOTHROW(org.add_root("mark zukerberg"));
        CHECK_NOTHROW(org.add_sub("mark zukerberg","amit"));
        CHECK_NOTHROW(org1.add_root("bill gatizs"));
        CHECK_NOTHROW(org.add_sub("mark zukerberg","mayan"));
        CHECK_NOTHROW(bool temp = (org!=org1));
        CHECK_NOTHROW(bool temp = (org1!=org));
        CHECK_NOTHROW(org.add_sub("mark zukerberg","amit"));//we dont have node as aylon mask in org1
        CHECK_NOTHROW(org.add_sub("mark zukerberg","amit"));
        CHECK_NOTHROW(org1.add_sub("bill gatiz","YONI"));//wehave node as bill gatiz in org
        CHECK_NOTHROW(org1.add_sub("bill gatizs","arik"));
        CHECK_NOTHROW(org1.add_sub("bill gatizs","amit"));//add to ufind root
        CHECK_NOTHROW(org1.add_sub("bill gatizs","may"));
}

TEST_CASE("checkthrow-badinput"){
    OrgChart org;
    OrgChart org1;
        CHECK_NOTHROW(org.add_root("mark zukerberg"));
        CHECK_NOTHROW(org1.add_root("bill gatizs"));
        CHECK_THROWS(org.add_sub("aylon mask","amit"));//we dont have node as aylon mask in org1
        CHECK_THROWS(org.add_sub("alylon mask","amit"));
        CHECK_THROWS(org1.add_sub("alylon mask","amit"));//we dont have node as aylon mask in org1
        CHECK_NOTHROW(org1.add_sub("bill gatizs","haim"));
        CHECK_THROWS(org1.add_sub("aviv","amit"));//add to ufind root
        CHECK_THROWS(org1.add_sub("aviv","arik"));
        CHECK_THROWS(org1.add_sub("haim","arik"));
}