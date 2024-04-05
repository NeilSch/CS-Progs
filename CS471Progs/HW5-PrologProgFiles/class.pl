topc :- write('give me the cs classes: '),
read(C),
classinfo(C, instructor(I), days(D), times(T)),
write(I), nl, write(D), nl, write(T), nl.

topd :- write('give me the days you want: '),
read(D),
classinfo(C, instructor(I), days(D), times(T)),
write(C), nl,  write(I), nl, write(T), nl.

classinfo(cs410, instructor('Sreedevi Gutta'), days('mwf'), times('1:30-2:20')).
classinfo(cs441, instructor('Cary Jardin'), days('mw'), times('5:30-6:45')).
classinfo(cs471, instructor('Rika Yoshii'), days('tutr'), times('2:30-3:45')).
