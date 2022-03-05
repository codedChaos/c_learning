#include <stdio.h>
#include <syslog.h>

int main(void) {
    openLog("test", LOG_PID, LOG_LOCAL0);
    syslog(LOG_ERR, "waaaaaah");
    closeLog();
    return 0;
}