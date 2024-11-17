// node thing.js
// author: slab
function calc(op, nums) {
	switch (op) {
		case '+' : return nums.reduce((a, b) => a + b);
		case '-' : return nums.reduce((a, b) => a - b);
		case '*' : return nums.reduce((a, b) => a * b);
		case '/' : return nums.reduce((a, b) => a / b);
		default  : throw new Error('Invalid operator');
	}
}

process.stdin.on('data', (data) => {
	const [op, ...nums] = data.toString().split(' ');
	console.log(calc(op, nums.map(Number)));
});
