program Algoritmos(input, output);

function Divide(a, b: integer): boolean;
begin
    if 
    a = 0 then
        Divide := false
    else
        Divide := (b mod a = 0)
end;

function MDC(a, b: integer): integer;
var i: integer;
begin
    i := maxint;
    while not (Divide(i, a) and Divide(i, b)) do
        i := pred(i);
    MDC := i
end;

begin
end.