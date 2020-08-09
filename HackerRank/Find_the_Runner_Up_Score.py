if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

new_list = set(arr) 

# removing the largest element from temp list 
new_list.remove(max(new_list)) 

# elements in original list are not changed 
# print(list1) 

print(max(new_list))
