// Implementation, porting update_locations.py to C

// to import random, sys, timeit, psutil: should have includes instead


///////////////
// Create a list of 'size' floating point numbers in the range [-bound, bound]
def generate_random_list(size, bound):
    return [random.uniform(-bound, bound) for i in range(size)]

//###############
// Update position by velocity, one time-step
void update_coords(coord_t xs,coord_t ys,coord_t zs,coord_t vx,coord_t vy,coord_t vz):
    for i in range(len(xs)):
        xs[i] = xs[i] + vx[i]
        ys[i] = ys[i] + vy[i]
        zs[i] = zs[i] + vz[i]
// using a for loop and void function 

int main(int argv[1], int argv[2]){
vector_t xs[size];
vector_t ys[size];
vector_t zs[size];
vector_t vx[size];
vector_t vy[size];
vector_t vz[size];
if (len(sys.argv) != 3):
    print("Required arguments: vector_length(N) and iterations_num(M)")
    sys.exit(-1)
int size = int(sys.argv[1])
int iters = int(sys.argv[2])

random.seed(size)
// xs = generate_random_list(size, 1000.)
// ys = generate_random_list(size, 1000.)
// zs = generate_random_list(size, 1000.)
// vx = generate_random_list(size, 1.)
// vy = generate_random_list(size, 1.)
// vz = generate_random_list(size, 1.)


generate_random_list(&xs, size);
generate_random_list(&ys, size);
generate_random_list(&zs, size);
generate_random_list(&vx, size);
generate_random_list(&vy, size);
generate_random_list(&vz, size);

t = timeit.timeit(stmt = "update_coords(xs, ys, zs, vx, vy, vz)",
    setup = "from __main__ import update_coords, xs, ys, zs, vx, vy, vz",
    number = iters)
chksum = sum(xs) + sum(ys) + sum(zs)
print("Mean time per coordinate: " + str(1000000 * t / (size * iters)) + "us")
print("Final checksum is: " + str(chksum))
print(psutil.virtual_memory())
exit(0)
}