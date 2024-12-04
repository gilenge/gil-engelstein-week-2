#pragma once
#include <string>
#include "profileList.h"


class SocialNetwork
{
public:
	void init(const std::string networkName,const int minAge);
	void clear();
	std::string getNetworkName() const;
	int getMinAge() const;
	bool addProfile(const Profile profile_to_add);
	std::string getWindowsDevices()const;

private:
	std::string _networkName;
	int _minAge;
	ProfileList _ProfilesList;

};
