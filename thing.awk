# awk -f thing.awk
# author: slab
{ 
	result = $2;

	for (i = 3; i <= NF; i++) {
		if ($1 == "+") {
			result += $i;
		}
		else if ($1 == "-") {
			result -= $i;
		}
		else if ($1 == "*") {
			result *= $i;
		}
		else if ($1 == "/") {
			result /= $i;
		}
		else {
			print "Invalid operator";
			exit 1;
		}
	}

	print result;
}
