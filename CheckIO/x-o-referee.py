def checkio(grid):
    l = grid
    l.extend(zip(*grid))
    l.append([grid[0][0], grid[1][1], grid[2][2]])
    l.append([grid[0][2], grid[1][1], grid[2][0]])
    for p in ('X','O'):
        for e in l:
            if all(map(lambda x: x == p, e)):
                return p
    return 'D'

if __name__ == '__main__':
    #These "asserts" using only for self-checking and not necessary for auto-testing
    assert checkio([
        "X.O",
        "XX.",
        "XOO"]) == "X", "Xs wins"
    assert checkio([
        "OO.",
        "XOX",
        "XOX"]) == "O", "Os wins"
    assert checkio([
        "OOX",
        "XXO",
        "OXX"]) == "D", "Draw"
    assert checkio([
        "O.X",
        "XX.",
        "XOO"]) == "X", "Xs wins again"

