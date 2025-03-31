program Funcoes(input, output);
var n: integer;

function P(x: real): real;
begin
    P := sqr(x) - 4
end;

function Termial(n: integer): integer;
begin
    if n = 0 then
        Termial := 0
    else
        Termial := n + Termial(n - 1)
end;

function Termial2(n: integer): integer;
begin
    Termial := (1 + n) * n div 2
end;

begin
    writeln('Hello world!')
end.
