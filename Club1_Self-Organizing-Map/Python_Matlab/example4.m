net = selforgmap([2 3],100, 3, 'gridtop', 'linkdist');

x1 = randn([3,20]) + [20;0;0];
x2 = randn([3,20]) + [0;0;20];
x3 = randn([3,20]) + [0;0;0];
x4 = randn([3,20]) + [15;15;15];
x5 = randn([3,20]) + [4;10;5];
x6 = randn([3,20]) + [10;4;10];
P = [x1, x2, x3, x4, x5, x6];


net = configure(net,P);
plotsompos(net,P)

net.trainParam.epochs = 50000;
net = train(net,P);
plotsompos(net,P)