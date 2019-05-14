x = [1,2,4,6];
y_1 = [6.4,3.3,1.8,1.3];
y_2 = [6.6,3.5,2.7,2.0];

plot(x,y_1,'-o',x,y_2,'-o','LineWidth',1.3);
legend('Manual','LIKWID');
text(1.15,6.4,'6.6')
text(1.9,3.1,'3.5')
text(4,1.66,'2,7')
text(5.8,1.2,'1.3')
xlabel('Number of threads');
ylabel('Time [s]');