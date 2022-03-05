/* 
app: 	 	syslog_tester.c
lang:  		written in C lang
author: 	codedChaos
date:		03052022-092500EDT
update:		n/a
notes:		null
*/

#include <stdio.h>
#include <syslog.h>


// Variable DEFs
#define ERR_MSG_TEST2 "test syslog entry using C lang program `syslog_tester.c`"
const char * const ERR_MSG_TEST1 = "test syslog entry using C lang program `syslog_tester.c`";



// int main program
int main(void) {
 	// open syslog
	openlog("test", LOG_PID, LOG_LOCAL0);

	syslog(LOG_ERR, ERR_MSG_TEST2);
	closelog();
	return 0;
}
