//
//  Tweet.cpp
//  TwitterRESTInterface
//
//  Created by austin crane on 9/18/15.
//  Copyright (c) 2015 OzDreams. All rights reserved.
//

#include "../twittercpp/Tweet.h"
const int max_text = 400;

void Tweet::set_text(std::string text){
    if (text.length() < max_text) {
        this->t_text = text;
    }
}
std::string Tweet::get_text(){
    return this->t_text;
}
Tweet::Tweet(Json::Value j){
	this->t_text = j["text"].asString();
	TwitterUser user = TwitterUser(j["user"]);
	this->t_user = user;
}

TwitterUser Tweet::getUser(){
	return t_user;
}
