#include <stdio.h>

#define not !
#define and &&
#define or ||
#define start {
#define then {
#define end }
#define function int
#define print printf
#define local int
#define otherwise else

function main() 
start
    print("Hello world!\n");

    local i = 6;
    if (not (i >= 5)) then
        print("GG\n");
    end
    otherwise start
        print("NT");
    end
end