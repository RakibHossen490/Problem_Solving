def max_arrays(t, test_cases):
    results = []
    for n, a in test_cases:
        freq = {}
        for num in a:
            freq[num] = freq.get(num, 0) + 1

        current = 0  # carry
        answer = 0
        val = min(freq.keys())  # Start from min value

        while True:
            if val not in freq and current == 0:
                break
            available = freq.get(val, 0) + current
            if available >= 1:
                answer += 1
                current = available - 1
            else:
                current = 0
            val += 1
        results.append(answer)
    return results

# Example Input
t = 6
test_cases = [
    (6, [1, 2, 3, 4, 5, 6]),
    (3, [1, 2, 3]),
    (4, [1, 2, 2, 4]),
    (1, [2]),
    (3, [1, 4, 8]),
    (2, [1, 1])
]

# Running the code
print(max_arrays(t, test_cases))
