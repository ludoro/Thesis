x = [1,2,4,6]
y1 = [6.43,3.33,1.8,1.3] 
y2 = [6.62, 3.55,2.733,2.0]
plot(x,y1,'-d',x,y2,'-d','LineWidth',1.2)
legend('Manually', 'LIKWID')
xlabel('Number of threads ');
ylabel('Time');

