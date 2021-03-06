from pwn import *
import sys
import os

from pwn import *

gdb_script = """ 
directory plugins/sudoers/
directory debug
set follow-exec-mode new
set follow-fork-mode child
set breakpoint pending on
set exception-verbose on
c
"""

def conn():
    if args.REMOTE:
	    r = remote("addr", 1337) 
    else:
        r = process("./test_case", level="ERROR")
        if args.GDB:
            return gdb.debug("./test_case", gdbscript=gdb_script, level="info")

    return r


p = conn()

p.interactive()
