% -*- prolog -*-
% Using Swi-Prolog 
% swipl -g main -s logic.pl

message(hello, 'Hello, World.').
message(goodbye, 'Goodbye, World.').

hello(STRING) :- 
    message(hello, MESSAGE),
    STRING = MESSAGE.

main :-
    hello(MESSAGE),
    write(MESSAGE),
    write('\n'),
    halt.
