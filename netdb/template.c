#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netdb.h>

/**
 * @function:		
 * 
 * @brief:			
 * 
 * @param:
 * @param:
 * @param:
 * 
 * @return:   				
 * 
 * @notice:
 * 
*/

int main(int argc,char *argv[]) {
    if(argc !=3){
        fprintf(stderr,"Usage:%s <query> <host>",argv[0]);
        exit(-1);
    }



    return 0;
}
