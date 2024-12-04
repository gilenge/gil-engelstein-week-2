#include "socialNetwork.h"
#include <string>

void SocialNetwork::init(const std::string networkName, const int minAge)
{
	this->_networkName = networkName;
	this->_minAge = minAge;
	//this->_ProfilesList = nullptr;
}
void SocialNetwork::clear()
{
	this->_networkName = "";
	this->_minAge = 0;
	//this->_ProfilesList = nullptr;
}
std::string SocialNetwork::getNetworkName() const
{
	return _networkName;
}
int SocialNetwork::getMinAge() const
{
	return _minAge;
}
bool SocialNetwork::addProfile(const Profile profile_to_add)
{
	if (profile_to_add.getOwner().getAge() >= this->getMinAge())
	{
		this->_ProfilesList.add(profile_to_add);
		return true;
	}
	return false;
}
std::string SocialNetwork::getWindowsDevices() const
{
	ProfileList* cur = this._ProfilesList.get;
	if (cur == nullptr)
	{
		return "";
	}
	while (cur.get_first()->get_next() != nullptr)
	{
		if (cur.get_first()->get_data().getOwner().getDevices())
		{

		}
	}
}