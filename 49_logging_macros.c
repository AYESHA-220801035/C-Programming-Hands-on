#include <stdio.h>
#define LOG_DEBUG(msg) printf("DEBUG %s:%d %s\n",__FILE__,__LINE__,msg)
#define LOG_INFO(msg) printf("INFO %s:%d %s\n",__FILE__,__LINE__,msg)
#define LOG_ERR(msg) printf("ERROR %s:%d %s\n",__FILE__,__LINE__,msg)
int main(){
    LOG_DEBUG("Start");
    LOG_INFO("Running");
    LOG_ERR("Fail");
    return 0;
}
