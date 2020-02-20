#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
extern void createProfile(vector<Profile*> &ProfilesVector);
extern void printProfile(vector<Profile*> &ProfilesVector);
extern void editProfile(vector<Profile*> &ProfilesVector);
extern void deleteProfile(vector<Profile*> &ProfilesVector);
extern void sendMessage(vector<Profile*> &ProfilesVector);
extern void printImage(int imageno);

void menu(vector<Profile*> &ProfilesVector) {	
	int menuchoice{};
	cout << "***********************************" << endl;
	cout << "*********** - MENU - **************" << endl;
	cout << "***********************************\n" << endl;
	cout << "Press 1 to : Create a Profile" << endl;
	cout << "Press 2 to : Delete a Profile" << endl;
	cout << "Press 3 to : Edit a Profile" << endl;
	cout << "Press 4 to : Print all Profiles" << endl;
	cout << "Press 5 to : Send a message" << endl;
	cout << "Press 0 to : Exit" << endl;
	cin >> menuchoice;
	switch (menuchoice) {
	case 1:
		createProfile(ProfilesVector);
		break;
	case 2:
		deleteProfile(ProfilesVector);
		break;
	case 3:
		editProfile(ProfilesVector);
		break;
	case 4:
		printProfile(ProfilesVector);
		break;
	case 5:
		sendMessage(ProfilesVector);
		break;
	default:
		exit(0);
		break;
	}
	menu(ProfilesVector);

}

void createProfile(vector<Profile*> &ProfilesVector) {
	string nameinput{}, nationalityinput{}, programinput{}, cityinput{}, fPLinput{}, bIOinput{};
	int ageinput{}, imageinput{};

	cout << "Input the name of new profile" << endl;
	cin >> nameinput;

	cout << "Input the age of new profile" << endl;
	cin >> ageinput;

	cout << "Input the nationality of new profile" << endl;
	cin >> nationalityinput;
	
	cout << "Input the program of new profile" << endl;
	cin >> programinput;

	cout << "Input the city of new profile" << endl;
	cin >> cityinput;

	cout << "Input the favorite programing language of new profile" << endl;
	cin >> fPLinput;

	cout << "Input the BIO of new profile" << endl;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(cin,bIOinput);

	cout << "No. 1" << endl;
	printImage(1);
	cout << endl;
	cout << "No. 2" << endl;
	printImage(2);
	cout << endl;
	cout << "Choose No. from above for your profile Image" << endl;
	cin >> imageinput;

	Profile* Newprofile = new Profile(nameinput, ageinput, nationalityinput, programinput, cityinput, fPLinput, bIOinput, imageinput);
	ProfilesVector.push_back(Newprofile);
}

void printProfile(vector<Profile*> &ProfilesVector) {
	cout << endl;
	for (size_t i = 0; i < ProfilesVector.size(); i++) {
		cout << "Index : " << i << endl;
		cout << "Name : "<<ProfilesVector.at(i)->getName() << endl;
		cout << "Age : " << ProfilesVector.at(i)->getAge() << endl;
		cout << "Nationality : " << ProfilesVector.at(i)->getNationality() << endl;
		cout << "Program : " << ProfilesVector.at(i)->getProgram() << endl;
		cout << "City : " << ProfilesVector.at(i)->getCity() << endl;
		cout << "Favorite Programing Language : " << ProfilesVector.at(i)->getFPL() << endl;
		cout << "BIO : " << ProfilesVector.at(i)->getBIO() << endl;
		cout << "Image : " <<endl;
		printImage(ProfilesVector.at(i)->getImage());
		cout << "Testimonial : " << ProfilesVector.at(i)->getTestimonial() << endl;
		cout << endl;
	}
}

void editProfile(vector<Profile*> &ProfilesVector) {
	int noinput{};
	cout << "Input the Profile Index you want to edit" << endl;
	cin >> noinput;

	string nameinput{}, nationalityinput{}, programinput{}, cityinput{}, fPLinput{}, bIOinput{}, testimonialinput{};
	int ageinput{}, imageinput{};

	cout << "Input the new name" << endl;
	cin >> nameinput;
	ProfilesVector.at(noinput)->setName(nameinput);

	cout << "Input the new age" << endl;
	cin >> ageinput;
	ProfilesVector.at(noinput)->setAge(ageinput);

	cout << "Input the new nationality" << endl;
	cin >> nationalityinput;
	ProfilesVector.at(noinput)->setNationality(nationalityinput);

	cout << "Input the new program" << endl;
	cin >> programinput;
	ProfilesVector.at(noinput)->setProgram(programinput);

	cout << "Input the new city" << endl;
	cin >> cityinput;
	ProfilesVector.at(noinput)->setCity(cityinput);

	cout << "Input the new favorite programing language" << endl;
	cin >> fPLinput;
	ProfilesVector.at(noinput)->setFPL(fPLinput);

	cout << "Input the new BIO" << endl;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(cin, bIOinput);
	ProfilesVector.at(noinput)->setBIO(bIOinput);

	cout << "No. 1" << endl;
	printImage(1);
	cout << endl;
	cout << "No. 2" << endl;
	printImage(2);
	cout << endl;
	cout << "Choose new No. of your image from above" << endl;
	cin >> imageinput;
	ProfilesVector.at(noinput)->setImage(imageinput);

}

void deleteProfile(vector<Profile*> &ProfilesVector) {
	int noinput{};
	cout << "Input the Profile Index you want to delete" << endl;
	cin >> noinput;
	ProfilesVector.erase(ProfilesVector.begin() + noinput);
	printProfile(ProfilesVector);
}

void sendMessage(vector<Profile*> &ProfilesVector) {
	string sender{}, receiver{}, message{};
	cout << "Input your name" << endl;
	cin >> sender;
	cout << "To whom you want to send a message?" << endl;
	cin >> receiver;
	for (size_t i = 0; i < ProfilesVector.size(); i++) {
		if (receiver.compare(ProfilesVector.at(i)->getName()) == 0) {
			cout << "Input your message" << endl;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			getline(cin, message);
			ProfilesVector.at(i)->setTestimonial(ProfilesVector.at(i)->getTestimonial()+"\nMessage from " + sender + " >> " + message);
			cout << "You sent a message successfully\n" << endl;
			menu(ProfilesVector);
		}
	}
	cout<<receiver+" does not exist\n" <<endl;
}

void printImage(int imageno) {
	switch (imageno)
	{
	case 1:
		cout <<"      ////^\\\\\\\\"<<endl;
		cout <<"      | ^   ^ |" << endl;
		cout << "     @ (o) (o) @" << endl;
		cout << "      |   <   |" << endl;
		cout << "      |  ___  |" << endl;
		cout << "       \\_____/" << endl;
		cout << "     ____|  |____" << endl;
		cout << "    /    \\__/    \\" << endl;
		cout << "   /              \\"<<endl;
		cout << "  /\\_/|        |\\_/\\" << endl;
		cout << " / /  |        |  \\ \\" << endl;
		cout << "( <   |        |   > )" << endl;
		cout << " \\ \\  |        |  / /" << endl;
		cout << "  \\ \\ |________| / /\n" << endl;
		break;

	case 2:
		cout << " /////////////\\\\\\\\" << endl;
		cout << "(((((((((((((( \\\\\\\\" << endl;
		cout << "))) ~~      ~~  (((" << endl;
		cout << "((( (*)     (*) )))" << endl;
		cout << ")))     <       (((" << endl;
		cout << "((( '\\______/`  )))" << endl;
		cout << ")))\\___________/(((" << endl;
		cout << "       _) (_" << endl;
		cout << "      / \\_/ \\" << endl;
		cout << "     /(     )\\" << endl;
		cout << "    // )___( \\\\" << endl;
		cout << "    \\\\(     )//" << endl;
		cout << "     (       )" << endl;
		cout << "      |  |  |" << endl;
		cout << "       | | |" << endl;
		cout << "       | | |" << endl;
		cout << "      _|_|_|_\n" << endl;
		break;	
	default:
		cout << "No Image\n" << endl;
		break;
	}
}
