# python thing.py
# author: slab
def calc(op, nums):
	match op:
		case '+':
			return sum(nums)
		case '-':
			return nums[0] - sum(nums[1:])
		case '*':
			result = 1
			for num in nums:
				result *= num
			return result
		case '/':
			result = nums[0]
			for num in nums[1:]:
				result /= num
			return result
		case _:
			raise Exception('Invalid operator')

while True:
	words = input().split()
	print(calc(words[0], list(map(int, words[1:]))))
