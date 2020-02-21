#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Profile
{
private:
	string name;
	int age;
	string nationality;
	string program;
	string city;
	string country;
	string fPL;
	string bIO;
	int image;
	string testimonial;

public:
	void setName(string name);
	string getName();

	void setAge(int age);
	int getAge();

	void setNationality(string nationality);
	string getNationality();

	void setProgram(string program);
	string getProgram();

	void setCity(string city);
	string getCity();

	void setFPL(string fPL);
	string getFPL();

	void setBIO(string bIO);
	string getBIO();

	void setImage(int image);
	int getImage();

	void setTestimonial(string testimonial);
	string getTestimonial();

	Profile(string Name = "noName", int Age = 0, string Nationality="none", string Program="noProgram", string City="noCity", string FPL="none", string BIO="none", int Image=0, string Testimonial = "");

	~Profile();

};
