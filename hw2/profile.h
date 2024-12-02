#pragma once
#include <string>
#include "user.h"
#include "userList.h"
#include "page.h"

class Profile
{
public:
	void init(User owner);
	void clear();
	User getOwner();
	void setStatus(std::string new_status);
	void addPostToProfilePage(std::string post);
	void addFriend(User friend_to_add);
	std::string getPage();
	std::string getFriends();
	std::string getFriendsWithSameNameLength();


private:
	User _owner;
	Page _page;
	UserList _friendsList;
};