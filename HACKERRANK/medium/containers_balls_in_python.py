def balls(container):
    total_containers = []
    total_ball_type = []


    for i in range(0,len(container)):
        for j in range(0,len(container)):
            total_containers[i] = total_containers[i] + container[i][j]
            total_ball_type[j] = total_ball_type[j] + container[i][j]


    sorted(total_containers)
    sorted(total_ball_type)

    if total_containers == total_ball_type:
        print("Possible")
    else:
        print("Imposssible")


