program Factoriais(input, output);
var n: integer;

function Factorial(x: integer): integer;
begin
    if x = 0 then
        Factorial := 1
    else
        Factorial := x * Factorial(x - 1);
end;

begin
    write('Qual é o número?');
    readln(n);
    writeln('O fatorial de é ', Factorial(n));
end.
