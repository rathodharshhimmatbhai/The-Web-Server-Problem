t = int(input())

for i in range(1, t+1):
    n = int(input())
    paint_required, base_required, trim_required = 0, 0, 0
    for _ in range(n):
        h, r, s, v = map(int, input().split(","))

        wall = (r * 3 + s * 4 + v * 6) / 3
        paint_required += wall * 2.5000 + wall * 3.2500 * 2
        base_required += wall * 1.5000
        trim_required += wall * 2.2500 * 2

    print("case#"+str(i), ":", format(paint_required, '.2f'), ",",
          format(base_required, '.2f'), ",", format(trim_required, '.2f'))
