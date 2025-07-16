import sys

T = int(sys.stdin.readline())
results = []

for _ in range(T):
    A, B = map(int, sys.stdin.readline().split())
    results.append(str(A + B))

sys.stdout.write('\n'.join(results) + '\n')
