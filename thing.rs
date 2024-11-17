// rustc thing.rs && ./thing
// author: slab
fn main() {
	std::io::stdin().lines()
		.filter_map(|line| line.ok())
		.for_each(|line| {
			let mut words = line.split(' ');

			let sign = words.next();
			let words = words.filter_map(|word| word.parse::<i32>().ok());
			println!("{}", match sign {
				Some("+") => words.reduce(|a, b| a + b),
				Some("-") => words.reduce(|a, b| a - b),
				Some("*") => words.reduce(|a, b| a * b),
				Some("/") => words.reduce(|a, b| a / b),
				Some(_)   => panic!("Invalid operator"),
				None      => panic!("Invalid input")
			}.unwrap_or(0))
		});
}
