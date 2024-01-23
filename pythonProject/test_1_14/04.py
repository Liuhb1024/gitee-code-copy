# break
score_list = [1,1,11,322,34]
for score in score_list:
    if score >= 90:
        print("game over")
        break
    print(score)

# continue 结束的是某次循环
for score in score_list:
    if score < 10:
        continue
    print(score)
 