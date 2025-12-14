def find(search_list: list, value: int) -> int:
    search_list.sort()
    start = 0
    end = len(search_list)

    if not end or value > search_list[-1]:
        raise ValueError("value not in array")

    while(start <= end):
        mid = (start + end) // 2

        if search_list[mid] == value:
            return mid
        elif search_list[mid] < value:
            start = mid + 1
        else:
            end = mid - 1
    
    raise ValueError("value not in array")
