#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cctype>
#pragma once
using namespace std;

class Translate
{
public:
				void buid(int num);
				bool search(char from,char to);
				bool search(const string& str1,const  string& str2);
				void print();
				map<char,map<char, bool>> dict;
};
