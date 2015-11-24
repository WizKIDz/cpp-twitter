//
//  TwitterUser.cpp
//  TwitterRESTInterface
//
//  Created by austin crane on 9/18/15.
//  Copyright (c) 2015 OzDreams. All rights reserved.
//

#include "TwitterUser.h"
TwitterUser::TwitterUser(Json::Value j){
	this->t_id = j["id"];
	this->t_name = j["name"];
	this->t_description = j["description"];
}
