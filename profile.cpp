#include "pch.h"
#include "Profile.h"

void Profile::setName(string name) {
	this->name = name;
}

string Profile::getName() {
	return name;
}

void Profile::setAge(int age) {
	this->age = age;
}

int Profile::getAge() {
	return age;
}

void Profile::setNationality(string nationality) {
	this->nationality = nationality;
}

string Profile::getNationality() {
	return nationality;
}

void Profile::setProgram(string program) {
	this->program = program;
}

string Profile::getProgram() {
	return program;
}

void Profile::setCity(string city) {
	this->city = city;
}

string Profile::getCity() {
	return city;
}

void Profile::setFPL(string fPL) {
	this->fPL = fPL;
}

string Profile::getFPL() {
	return fPL;
}

void Profile::setBIO(string bIO) {
	this->bIO = bIO;
}

string Profile::getBIO() {
	return bIO;
}

void Profile::setImage(int image) {
	this->image = image;
}

int Profile::getImage() {
	return image;
}

void Profile::setTestimonial(string testimonial) {
	this->testimonial = testimonial;
}

string Profile::getTestimonial() {
	return testimonial;
}

Profile::Profile(string Name, int Age, string Nationality, string Program, string City, string FPL, string BIO, int Image, string Testimonial) : name{ Name }, age{ Age }, nationality{ Nationality }, program{ Program }, city{ City }, fPL{ FPL }, bIO{ BIO }, image{ Image }, testimonial{Testimonial}
{
	cout << "Constructor Activated" << endl;
}

Profile::~Profile()
{
	cout << "Destructor Activated" << endl;
}
