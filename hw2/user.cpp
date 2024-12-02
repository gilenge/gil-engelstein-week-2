
#include <iostream>
#include <string>
#include "user.h"
#include "DeviceList.h"

void User::init(unsigned int id, std::string username, unsigned int age)
{
	this->_id = id;
	this->_userName = username;
	this->_age = age;
	this->_devices.init();
}
void User::clear()
{
	this->_id = 0;
	this->_userName = "";
	this->_age = 0;
	this->_devices.clear();
}

unsigned int User::getID() const
{
	return _id;
}
std::string User::getUserName() const
{
	return _userName;
}
unsigned int User::getAge() const
{
	return _age;
}
DevicesList& User::getDevices()
{
	return _devices;
}

void User::addDevice(Device newDevice)
{
	this->_devices.add(newDevice);
}
bool User::checkIfDevicesAreOn() const
{
	DeviceNode* curr = this->_devices.get_first();
	if (curr == nullptr)
	{
		return true;
	}
	while (curr->get_next() != nullptr)
	{
		if (curr->get_data().isActive() == 0)
		{
			return false;
		}
		curr = curr->get_next();
	}
	return true;
}