def iq_test(numbers):
    # your code here
    list = [int(s) for s in numbers.split(" ")]
    even = []
    odd = []

    for number in list:
        if number % 2 == 0:
            even.append(number)
        else:
            odd.append(number)
    if len(even) == 1:
        return list.index(even[0]) + 1
    else:
        return list.index(odd[0]) + 1


def iq_test(numbers):
    # your code here
    list = [int(s) for s in numbers.split(" ")]
    even = []
    odd = []

    for number in list:
        if number % 2 == 0:
            even.append(number)
        else:
            odd.append(number)
    if len(even) == 1:
        return list.index(even[0]) + 1
    else:
        return list.index(odd[0]) + 1


def min_max(lst):
    return [min(lst), max(lst)]


def maps(a):
    result = map(lambda x: 2 * x, a)
    return list(result)


def invert(lst):
    new = []
    for i in lst:
        new.append(i * -1)
    return new


def solution(string):
    new = []
    for i in string:
        new.insert(0, i)
    return "".join(new)


def xo(s):
    x = 0
    o = 0
    s = s.lower()
    for i in s:
        if i == "x":
            x += 1
        if i == "o":
            o += 1
    return x == o


def stray(arr):
    for i in arr:
        if arr.count(i) == 1:
            return i


def solution(string, ending):
    # your code here...
    length = len(ending)
    return string[-length:] == ending or ending == ""


def f(n):
    return sum(range(1, n + 1)) if type(n) is int and n > 0 else None


def sum_two_smallest_numbers(numbers):
    numbers.sort()
    return sum(numbers[:2])


def revrot(strng, sz):
    func = lambda x: x[1:] + x[0] if sum(int(i) for i in x) % 2 else x[::-1]
    return (
        ""
        if sz <= 0 or sz > len(strng)
        else "".join(func(strng[i : i + sz]) for i in range(0, len(strng) - sz + 1, sz))
    )


import string


def is_pangram(s):
    lets = string.ascii_lowercase
    no = ""
    for i in lets:
        if i not in s.lower():
            no += i
    return no == ""


def evaporator(content, evap_per_day, threshold):
    p = lambda x: (100 - x) / 100
    x = 100
    times = 0
    while x >= threshold:
        x *= p(evap_per_day)
        times += 1
    else:
        return times


def capitals(word):
    c = []
    x = -1
    for i in word:
        x += 1
        if i.isupper():
            c.append(x)
    return c

def find_even_index(arr):
    for i in range(len(arr)):
        if sum(arr[:i]) == sum(arr[i+1:]):
            return i
    return -1