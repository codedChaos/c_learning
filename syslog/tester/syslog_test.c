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
// decision reference: https://eklitzke.org/declaring-c-string-constants-the-right-way
//#define ERR_MSG_TEST2 "test syslog entry using C lang program `syslog_tester.c`"
const char ERR_MSG_TEST[] = "test syslog entry using C lang program `syslog_tester.c`";

// int main program
int main(void) {
 	// open syslog
	openlog("test", LOG_PID, LOG_LOCAL0);
	
	// write test message
	syslog(LOG_ERR, ERR_MSG_TEST);

	// cleanup: close syslog
	closelog();

	// exit program
	return 0;
}
