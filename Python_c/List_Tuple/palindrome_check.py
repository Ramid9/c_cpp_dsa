nums = []
nums.append(input("Enter first element"))
nums.append(input("Enter first element"))
nums.append(input("Enter first element"))
nums.append(input("Enter first element"))
print(nums)
copy = nums.copy()
copy.reverse()
if(nums==copy):
    print("palindrome")
else:
    print("not palindrome")