operators:
1)arithmetic ops:
		+,-,*,/and%
		a=10,b=3;
		a/b=3
		a%b=1
2)logical ops:
		and - &&
		or - ||
		not - !            
		exp1 exp1 exp1 &&exp2 exp1||exp2 !exp1
		t    t    t           t           f
		t    f    f           t           f
		f    t    f           t           t
		f    f    f           f           t
3) relational ops:
	    < <= > >= == !=
4) assignment ops:
	    =
		+=,*=,-=,/=,%= //compound assignments
		a+b------>a=a+b
5)sizeof()
	used to find the size of datatype
6)conditional op or ternary op
	ex1?exp2:exp3;
	--
	if(exp1)
	exp2;
	else
	exp3;
7)increment / decrement ops
	a=10;
	++a //pre increment
	a++ //post increment
	--a== //pre decrement
	a-- //post decrement
8)bit wise operators
	& -  and
	| -  or 
	^ -  xor
	~ -  complement
	<< - left shift
	>> - right shift
	
	a b a&b a|b a^b
	0 0  0   0   0
	0 1  0   1   1
	1 0  0   1   1
	1 1  1   1   0
9) comma(,)
