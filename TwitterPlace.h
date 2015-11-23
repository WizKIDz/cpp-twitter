//
//  TwitterPlace.h
//  TwitterRESTInterface
//
//  Created by austin crane on 9/18/15.
//  Copyright (c) 2015 OzDreams. All rights reserved.
//

#ifndef __TwitterRESTInterface__TwitterPlace__
#define __TwitterRESTInterface__TwitterPlace__

#include <vector>

#include "Twitter.h"

struct coordinate {
    double lat;
    double lng;
};
typedef enum : int {
    POLYGON,
    RECTANGLE,
    TRIANGLE,
} bounding_box_type;

struct bounding_box {
    std::vector <coordinate> coordinates;
    
};
class TwitterPlace{
public:
    
private:
    std::string t_address;
    coordinate t_coordinate;
    bounding_box_type t_bounding_box_type;
    std::string t_full_name;
    std::string t_name;
    std::string t_country_code;
    std::string t_country;
};
#endif /* defined(__TwitterRESTInterface__TwitterPlace__) */
