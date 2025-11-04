# import matplotlib.pyplot as plt
# x = ["GLB", "SHARDA","KCC","NIOT"]
# y1 = [8.9,6.2,7.5,8.0]
# y2 = [9.1,5.5,8.0,8.5]
# p=[1, 2, 3, 4]
# width = 0.4
# p1 = [j+width for j in p]
# p2 = [j+width/2 for j in p]
# c = ["r", "y", "b", "c"]
# plt.figure(figsize=(4,3))
# plt.bar(p, y1, width, label="2024", color= c)
# plt.bar(p1, y2, width, label="2025", color= "g")
# plt.xlabel("Noida Engg. Collage", fontsize=12)
# plt.ylabel("Score", fontsize=12)
# plt.title("NIRF Ranking", fontsize=12)
# plt.xticks(p2, x, rotation=20)
# plt.legend(loc = "upper center")
# plt.tight_layout()
# plt.show()



import matplotlib.pyplot as plt
# Data
day = [1, 2, 3, 4, 5, 6, 7]
no = [2, 3, 1, 4, 5, 3, 6]
colors = ["red", "blue", "green", "purple", "orange", "brown", "pink"]
sizes = [400, 200, 400, 300, 200, 100, 600]
# Create scatter plot
plt.scatter(day, no, c=colors, s=sizes, alpha=0.9, marker='*', edgecolors='black')
plt.title("Scatter Plot", fontsize=15)
plt.xlabel("Day", fontsize=15)
plt.ylabel("No.", fontsize=15)
plt.show()