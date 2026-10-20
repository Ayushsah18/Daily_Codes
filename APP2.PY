from functools import reduce
sales = [
    {"name": "Laptop", "price": 50000, "qty": 2, "discount": 10},
    {"name": "Mouse", "price": 1000, "qty": 3, "discount": 0},
    {"name": "Monitor", "price": 10000, "qty": 1, "discount": 5}
]
totals = list(map(
    lambda p: p["price"] * p["qty"] * (1 - p["discount"] / 100),
    sales
))
revenue = reduce(lambda a, b: a + b, totals, 0)
high = list(filter(
    lambda p: p["price"] * p["qty"] * (1 - p["discount"] / 100) >= 5000,
    sales
))
names = list(map(lambda p: p["name"], high))
print("Product Totals:", totals)
print("Total Revenue:", revenue)
print("High-Value Products:", names)
