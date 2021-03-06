x = linspace(0,1);
y = 6*x;
I = [1/16, 1/8, 1/5];
P = [0.325,0.75, 1.2];
X = [0,1/16, 1/8, 1/5,0.4333333333333]
Y = [0,0.375, 0.750,1.2,2.6];
plot( X,Y,...
     [1/16 1/8], [0.325 0.325], '-k',...
     [1/16 1/16], [0 0.325], '-k',...
     [0 1], [2.6 2.6], '-r','LineWidth',1.2);
xlabel('Intensity [Flops/bytes]');
ylabel('Performance [Flops/s]');
text(0.4,2.7,'CPU bound');
text(0.08,0.4,'naive');
text(0.06,1.4,'Memory bound')
xlim([0 1]);
ylim([0 3]);

