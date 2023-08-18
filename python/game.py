def print_board(board):
    for row in board:
        print(" | ".join(row))
        print("-" * 9)

def check_win(board, player):
    for row in board:
        if all(cell == player for cell in row):
            return True
    for col in range(3):
        if all(board[row][col] == player for row in range(3)):
            return True
    if all(board[i][i] == player for i in range(3)):
        return True
    if all(board[i][2 - i] == player for i in range(3)):
        return True
    return False

def main():
    board = [[" " for _ in range(3)] for _ in range(3)]
    current_player = "X"
    moves = 0

    while moves < 9:
        print_board(board)
        row, col = map(int, input(f"Player {current_player}, enter row and column (0-2) to place your move: ").split())

        if row < 0 or row > 2 or col < 0 or col > 2 or board[row][col] != " ":
            print("Invalid move. Try again.")
            continue

        board[row][col] = current_player

        if check_win(board, "X"):
            print_board(board)
            print("Player X wins!")
            break
        elif check_win(board, "O"):
            print_board(board)
            print("Player O wins!")
            break

        current_player = "O" if current_player == "X" else "X"
        moves += 1

    if moves == 9:
        print_board(board)
        print("It's a draw!")

if __name__ == "__main__":
    main()
