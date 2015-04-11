#include <boost/thread/mutex.hpp>
#include <boost/thread.hpp>
#include <boost/date_time.hpp>
#include "logger.hpp"
#include "Aitf_Manager.hpp"

loglevel_e loglevel = logERROR;

void set_log_level(int level){
	switch(level){
	case 0: loglevel = logERROR;
		break;
	case 1: loglevel = logWARNING;
		break;
	case 2: loglevel = logINFO;
		break;
	case 3: loglevel = logDEBUG;
		break;
	case 4: loglevel = logDEBUG2;
		break;
	}
}

int main(){

	set_log_level(2);

	Aitf_Manager* aitf_manager = new Aitf_Manager();

	aitf_manager->start_thread();

	aitf_manager->join();
}




