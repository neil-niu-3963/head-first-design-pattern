/*
 * secure_request_info.cpp
 *
 *  Created on: Jul 30, 2016
 * 
 *  Author: niufan
 */

#include "observer.h"
#include <fstream>
//#define DEBUG
using  std::cout;
using  std::endl;
using  std::string;

namespace design_pattern {

Observer::Observer() {
    // TODO Auto-generated constructor stub
#ifdef DEBUG
    XLOG_DEBUG("now call the Observer constructor.");
#endif

}

Observer::~Observer() {
    // TODO Auto-generated destructor stub
#ifdef DEBUG
    XLOG_DEBUG("now call the Observer destructor.");
#endif
}

} /* namespace  */

