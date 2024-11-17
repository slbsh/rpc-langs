# perl thing.pl
# author: slab
while (1) {
	my $input = <STDIN>;
	chomp $input;
	my @words = split(' ', $input);

	if (scalar @words < 2) {
		print "Invalid Input\n";
		next;
	}

	my $op = $words[0];
	my $result = $words[1];

	foreach (@words[2..$#words]) {
		if ($op eq "+") {
			$result += $_;
		} 
		elsif ($op eq "-") {
			$result -= $_;
		} 
		elsif ($op eq "*") {
			$result *= $_;
		} 
		elsif ($op eq "/") {
			$result /= $_;
		} 
		else {
			print "Invalid Operator\n";
			return;
		}
	}

	print "$result\n";
}
