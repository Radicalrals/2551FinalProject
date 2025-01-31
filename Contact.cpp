#include "Contact.hpp"
#include <string.h>

Contact::Contact() {
	this->UUID = new unsigned char[UUID_LENGTH];
	this->name = new char[NAME_LENGTH + 1];
	this->name[0] = '\0';
	this->UUID[0] = 0;
}

Contact::Contact(unsigned char *givenUUID, char const *givenName) {
	this->UUID = givenUUID;
	this->name = new char[NAME_LENGTH + 1];
	strcpy(this->name, givenName);
}

Contact::Contact(unsigned char *givenUUID, char givenName) {
	this->UUID = givenUUID;
	this->name = new char[NAME_LENGTH + 1];
	this->name[0] = givenName;
	this->name[1] = '\0';
}

void Contact::setUUID(unsigned char *givenUUID) { this->UUID = givenUUID; }

void Contact::setName(char const *givenName) { strcpy(this->name, givenName); }

void Contact::setName(char givenName) {
	this->name[0] = givenName;
	this->name[1] = '\0';
}

unsigned char *Contact::getUUID() { return this->UUID; }

char *Contact::getName() { return this->name; }