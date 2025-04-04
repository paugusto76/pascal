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

function Hipotenusa(c1, c2: real): real;
begin
    Hipotenusa := sqrt(sqr(c1) + sqr(c2))
end;

function max(a, b: integer):integer;
begin
    if a >= b then max := a
              else max := b
end;

function min(a, b: integer):integer;
begin
    if a <= b then min := a
              else min := b
end;

function rmax(a, b: real): real;
begin
    if a >= b then rmax := a
              else rmax := b
end;

function rmin(a, b: real): real;
begin
    if a <= b then rmin := a
              else rmin := b
end;

function Entre(a: integer; x1, x2: integer): boolean;
begin
    Entre := (x1 <= a) and (a <= x2)
end;

function Divide(a, b: integer): boolean;
begin
    if 
    a = 0 then
        Divide := false
    else
        Divide := (b mod a = 0)
end;

function pot(x, a: real): real;
begin
    pot := exp(a * ln(x))
end;

function tan(x: real): real;
begin
    tan := sin(x) / cos(x)
end;

begin
    writeln('Hello world!')
end.
