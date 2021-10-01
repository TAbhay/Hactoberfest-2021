# sample input
# Input: board = 
# [["4","3",".",".","7",".",".",".","."]
# ,["6",".",".","1","9","5",".",".","."]
# ,[".","9","8",".",".",".",".","6","."]
# ,["3",".",".",".","5",".",".",".","3"]
# ,["4",".",".","8",".","3",".",".","1"]
# ,["7",".",".",".","2",".",".",".","6"]
# ,[".","6",".",".",".",".","2","5","."]
# ,[".",".",".","4","1","9",".",".","5"]
# ,[".",".",".",".","8",".",".","7","9"]]



class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        def validPortion(start, end):
            tally = set()
            for i in range(start[0], end[0] + 1):
                for j in range(start[1], end[1] + 1):
                    entry = board[i][j]
                    if entry != '.':
                        entry = int(entry)
                        if entry < 1 or entry > 9 or entry in tally:
                            return False
                        tally.add(entry)
            return True
        
        
        for i in range(0, 9):
            if not validPortion((i, 0), (i, 8)) or not validPortion((0, i), (8, i)):
                
                return False
        for i in range(0, 9, 3):
            for j in range(0, 9, 3):
                if not validPortion((i, j), (i + 2, j + 2)):
                    # print("false found", i)
                    return False
        return True
                    