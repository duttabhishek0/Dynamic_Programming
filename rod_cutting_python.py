def top_down_cut_rod(n: int, prices: list):
    _enforce_args(n, prices)
    max_rev = [float("-inf") for _ in range(n + 1)]
    return _top_down_cut_rod_recursive(n, prices, max_rev)
def main():
    prices = [6, 10, 12, 15, 20, 23]
    n = len(prices)

    # the best revenue comes from cutting the rod into 6 pieces, each
    # of length 1 resulting in a revenue of 6 * 6 = 36.
    expected_max_revenue = 36

    max_rev_top_down = top_down_cut_rod(n, prices)
    max_rev_bottom_up = bottom_up_cut_rod(n, prices)
    max_rev_naive = naive_cut_rod_recursive(n, prices)

    assert expected_max_revenue == max_rev_top_down
    assert max_rev_top_down == max_rev_bottom_up
    assert max_rev_bottom_up == max_rev_naive


if __name__ == "__main__":
    main()   
