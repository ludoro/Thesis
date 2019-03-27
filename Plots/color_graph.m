n = [40, 400, 1000];
naive = [313, 941, 720];
tmp = [315, 937, 704];
loop = [926, 3046, 1523];
eigen = [455, 2297, 1958];

plot(n,naive,'-o',n,tmp,'-d',n,loop,'-d',n,eigen,'-d');
xlim([0 1200])
xlabel('n');
ylabel('Performance MFLOPS/s');
legend('naive','temporary','loop unrolling', 'Eigen');
