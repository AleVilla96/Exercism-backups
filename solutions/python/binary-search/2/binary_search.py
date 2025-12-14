def find(search_list: list, value: int) -> int:
    
    start, end = 0, len(search_list) - 1

    while(start <= end):
        mid = (start + end) // 2

        if search_list[mid] == value:
            return mid
        elif search_list[mid] < value:
            start = mid + 1
        else:
            end = mid - 1

    raise ValueError("value not in array")
