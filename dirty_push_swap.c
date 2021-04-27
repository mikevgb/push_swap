int main(int argc)

read stdout

display OK if integers are sorted

else display KO


A1  	B1
A2		B2
A3		B3
A4		B4
A5		B5

if A1 > A5 = RA
if B1 > B5 = RB
if RA && RB = RR
if A5 < A1 = RRA
if B5 < B1 = RRB
if RRA && RRB = RRR
if A1 > A2 = SA
if B1 > B2 = SB
if SA && SB = SS
if A1 > B1 = PA
if A1 < B1 = PB

int tmp1;
int tmp2;

RA = tmp1 = stackA[4] && stackA[0] = stackA[4] && stackA[0] = tmp1;
RB = tmp1 = stackB[4] && stackB[0] = stackB[4] && stackB[0] = tmp1;
RR = tmp1 = stackA[4] && stackA[0] = stackA[4] && stackA[0] = tmp1 \
	&& tmp2 = stackB[4] && stackB[0] = stackB[4] && stackB[0] = tmp2;
