void read_six_numbers();
void explode_bomb();


void phase6(char *input){
    read_six_numbers();
    char stack[6] = {};
    int r12d = 0;
    char *r13 = stack;
    char *rbp = r13;
    int eax = stack[0];
    eax = eax -1;

    if(eax>5){
        explode_bomb();
    }

    r12d = r12d + 1;
    
    if(r12d != 6){
        int ebx = r12d;
        do{
            long rax = ebx;
            rax = stack[4*rax];
            if(stack[0]==rax){
                explode_bomb();
            }
            
            ebx = ebx + 1;
        }while(ebx<=5);
        
        r13 = r13 + 4;

    }












}

